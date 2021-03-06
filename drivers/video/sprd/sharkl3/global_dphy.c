/*
 * Copyright (C) 2017 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <asm/arch/sprd_reg.h>
#include <sprd_glb.h>
#include "sprd_dphy.h"

static int dphy_glb_parse_dt(struct dphy_context *ctx)
{
	ctx->ctrlbase = SPRD_DSI_PHYS;

	return 0;
}

static void dphy_glb_enable(struct dphy_context *ctx)
{
	sci_glb_set(REG_AON_APB_APB_EB2,
		BIT_AON_APB_DPHY_REF_EB | BIT_AON_APB_DPHY_CFG_EB);
}

static void dphy_glb_disable(struct dphy_context *ctx)
{
	sci_glb_clr(REG_AON_APB_APB_EB2,
		BIT_AON_APB_DPHY_REF_EB | BIT_AON_APB_DPHY_CFG_EB);
}

static void dphy_power_domain(struct dphy_context *ctx, int enable)
{
	if (enable) {
		sci_glb_clr(REG_AON_APB_PWR_CTRL, BIT_AON_APB_MIPI_DSI_PS_PD_S);
		udelay(10);
		sci_glb_clr(REG_AON_APB_PWR_CTRL, BIT_AON_APB_MIPI_DSI_PS_PD_L);
		sci_glb_clr(REG_AON_APB_PWR_CTRL, BIT_AON_APB_MIPI_DSI_ISO_SW_EN);
	} else {
		sci_glb_set(REG_AON_APB_PWR_CTRL, BIT_AON_APB_MIPI_DSI_ISO_SW_EN);
		sci_glb_set(REG_AON_APB_PWR_CTRL, BIT_AON_APB_MIPI_DSI_PS_PD_L);
		udelay(10);
		sci_glb_set(REG_AON_APB_PWR_CTRL, BIT_AON_APB_MIPI_DSI_PS_PD_S);
	}
}

static struct dphy_glb_ops dphy_glb_ops = {
	.parse_dt = dphy_glb_parse_dt,
	.enable = dphy_glb_enable,
	.disable = dphy_glb_disable,
	.power = dphy_power_domain,
};

struct dphy_glb_ops *dphy_glb_ops_attach(void)
{
	return &dphy_glb_ops;
}
