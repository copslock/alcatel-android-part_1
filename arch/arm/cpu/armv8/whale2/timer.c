/*
 * (C) Copyright 2002
 * Sysgo Real-Time Solutions, GmbH <www.elinos.com>
 * Marius Groeger <mgroeger@sysgo.de>
 *
 * (C) Copyright 2002
 * Sysgo Real-Time Solutions, GmbH <www.elinos.com>
 * Alex Zuepke <azu@sysgo.de>
 *
 * (C) Copyright 2002
 * Gary Jennejohn, DENX Software Engineering, <gj@denx.de>
 *
 * (C) Copyright 2009
 * Ilya Yanok, Emcraft Systems Ltd, <yanok@emcraft.com>
 *
 * (C) Copyright 2009 DENX Software Engineering
 * Author: John Rigby <jrigby@gmail.com>
 * 	Add support for MX25
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <common.h>
#include <div64.h>
#include <asm/io.h>
#include <linux/types.h>
#include "asm/arch/common.h"
#include "asm/arch/sys_timer_reg_v0.h"
#include "asm/arch/timer_reg_r4p0.h"

#define TIMER_MAX_VALUE 0xFFFFFFFF
static unsigned long mul_value = 26;//default 26Mhz

static unsigned long long timestamp;
static ulong lastinc;

/*
 * "time" is measured in 1 / CONFIG_SYS_HZ seconds,
 * "tick" is internal timer period
 */
static inline unsigned long long tick_to_time(unsigned long long tick)
{
	tick *= CONFIG_SYS_HZ;
	do_div(tick, CONFIG_SPRD_TIMER_CLK);
	return tick;
}

static inline unsigned long long time_to_tick(unsigned long long time)
{
	time *= CONFIG_SPRD_TIMER_CLK;
	do_div(time, CONFIG_SYS_HZ);
	return time;
}

static inline unsigned long long us_to_tick(unsigned long long us)
{
	us = us*CONFIG_SPRD_TIMER_CLK;
	do_div(us, CONFIG_SYS_HZ*1000);
	return us;
}


/* nothing really to do with interrupts, just starts up a counter. */
/* The 32KHz 23-bit timer overruns in 512 seconds */

int timer_init(void)
{
	writel(readl(REG_AON_APB_APB_EB0) | BIT_AP_SYST_EB, REG_AON_APB_APB_EB0);
	writel(readl(REG_AON_APB_APB_RTC_EB) | BIT_AP_SYST_RTC_EB, REG_AON_APB_APB_RTC_EB);

	writel(readl(REG_AON_APB_APB_EB0) | BIT_AON_APB_AON_TMR_EB, REG_AON_APB_APB_EB0);
	writel(readl(REG_AON_APB_APB_RTC_EB) | BIT_AON_APB_AON_TMR_EB, REG_AON_APB_APB_RTC_EB);

	writel(readl(REG_AON_APB_APB_EB0) | BIT_AON_APB_AON_SYST_EB, REG_AON_APB_APB_EB0);
	writel(readl(REG_AON_APB_APB_RTC_EB) | BIT_AON_APB_AON_SYST_RTC_EB, REG_AON_APB_APB_RTC_EB);

	/* enable aon timer2 26M clk source */
	writel(readl(REG_AON_APB_CGM_REG1) | BIT_AON_APB_CGM_CM3_TMR2_EN, REG_AON_APB_CGM_REG1);
	/*init arch timer*/
	writel(0x1, 0x40610000);
	return 0;
}

void reset_timer(void)
{
	//capture current incrementer value time
	lastinc = readl(SYS_VLAUE_SHDW);
	timestamp = 0;
}
void reset_timer_masked(void)
{
	reset_timer();
}
unsigned long long get_ticks(void)
{
	ulong now = readl(SYS_VLAUE_SHDW);

	if(now >= lastinc) {
	/* not roll
	 * move stamp forward with absolut diff ticks
	 * */
		timestamp += (now - lastinc);
	}else{
		//timer roll over
		timestamp += (TIMER_MAX_VALUE - lastinc) + now;
	}
	lastinc = now;
	return timestamp;
}

ulong get_timer_masked(void)
{
	return get_ticks();
}

ulong get_timer(ulong base)
{
	return get_timer_masked() - base;
}

void set_timer(ulong t)
{
	timestamp = time_to_tick(t);
}

void __udelay (unsigned long usec)
{
	unsigned long delta_usec = usec * mul_value;

	writel(delta_usec, TM2_LOAD_LO);
	REG32 (TM2_CTL) |= (BIT_TIMER_RUN);//timer runs
	while(readl(TM2_SHDW_LO) > 0);//loop
	REG32 (TM2_CTL) &=~ (BIT_TIMER_RUN);//timer stops
}

u32 SCI_GetTickCount(void)
{
	volatile u32 tmp_tick1;
	volatile u32 tmp_tick2;

	tmp_tick1 = SYSTEM_CURRENT_CLOCK;
	tmp_tick2 = SYSTEM_CURRENT_CLOCK;

	while (tmp_tick1 != tmp_tick2)
	{
		tmp_tick1 = tmp_tick2;
		tmp_tick2 = SYSTEM_CURRENT_CLOCK;
	}

	return tmp_tick1;
}

