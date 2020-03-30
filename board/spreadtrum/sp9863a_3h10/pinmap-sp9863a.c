/*This file is created by PINMAP tool
 *Device: SharkL3_SC9863
 *Version: SC9863_3_IRD_A_SCH_V1.0.0_PINMAP_V1.0
 *Create Time: 2018/3/9 14:27:00
 *Author: weiwu.wang
 */

/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
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


#include <asm/io.h>
#include <asm/arch/pinmap.h>
#include <power/sprd_pmic/sprd_2721_pinmap.h>

#define BIT_PIN_SLP_ALL  (BIT_PIN_SLP_AP|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_WTLCP|BIT_PIN_SLP_WCN|BIT_PIN_SLP_CM4)
#define BIT_PIN_SLP_ALL_CP  (BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_WTLCP|BIT_PIN_SLP_WCN|BIT_PIN_SLP_CM4)
#define BIT_PIN_SLP_ALL_NO_CM4        (BIT_PIN_SLP_AP|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_WTLCP|BIT_PIN_SLP_WCN)

static pinmap_t pinmap[]={
{REG_PIN_CTRL0,0x00004B00},// BAT_DET_enable: pubcp_sim0/pubcp_sim1/ap_sdio0/ap_emmc
{REG_PIN_CTRL1,0x00000000},//
{REG_PIN_CTRL2,0x00000000},//
{REG_PIN_CTRL3,0x00000000},//
{REG_PIN_CTRL4,0x00000000},//
{REG_PIN_CTRL5,0x00000000},//

{REG_PIN_PWR_PAD_CTL_RESERVED,0x00000000},//
{REG_PIN_UART_MATRIX_MTX_CFG,0xE4261C01},//UART0->PUBCP_UART0;UART1->AP_UART1;UART2->TGDSP_UART0;UART3->SP_UART1;UART4->ITEDSP_UART0;UART5->BTWF_UART0;UART6->GNSS_UART0;
{REG_PIN_UART_MATRIX_MTX_CFG1,0xE00001B9},//UART8->WTLCP_WCI2;UART9->BTWF__WCI2;UART10->GNSS_UART0;
{REG_PIN_IIS_MATRIX_MTX_CFG,0x00459040},//IIS0->AP_IIS0;IIS1->AP_IIS1;IIS2->AP_IIS2;IIS3->WCN_IIS0;IIS4->VBC_IIS1;
{REG_PIN_SIM_MATRIX_MTX_CFG,0x00000002},//SIM0->PUBCP_SIM0;SIM1->PUBCP_SIM1;SIM2->AP_SIM0;
{REG_PIN_SPI_MATRIX_MTX_CFG,0x00000000},//SPI0->AP_SPI0;SPI1->AP_SPI1;SPI2->AP_SPI2;SPI3->AP_SPI3;   default
{REG_PIN_IIC_MATRIX_MTX_CFG,0x00000310},//IIC0->AP_IIC0;IIC1->AP_IIC1;IIC2->SP_IIC0;IIC3->AP_IIC3;IIC4->AON_IIC0;IIC5->AP_IIC5;IIC6->AP_IIC6;

{REG_PIN_IIS1CLK,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_IIS1CLK,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_IIS1DI,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_IIS1DI,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//FTID_INT
{REG_PIN_IIS1DO,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_IIS1DO,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//FTID_RSTN
{REG_PIN_IIS1LRCK,                      BITS_PIN_AF(3)},
{REG_MISC_PIN_IIS1LRCK,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SCL2,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SCL2,                     BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_CM4|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C2_SCL
{REG_PIN_SDA2,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SDA2,                     BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_CM4|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C2_SDA
{REG_PIN_CLK_AUX0,                      BITS_PIN_AF(3)},
{REG_MISC_PIN_CLK_AUX0,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//TP2107
{REG_PIN_T_DIG,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_T_DIG,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_GNSS_LNA_EN,                   BITS_PIN_AF(0)},
{REG_MISC_PIN_GNSS_LNA_EN,              BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_OE},//GPS_LNA_EN
{REG_PIN_EXTINT0,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_EXTINT0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//CTP_INT
{REG_PIN_EXTINT1,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_EXTINT1,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CTP_RST
{REG_PIN_SCL3,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SCL3,                     BITS_PIN_DS(3)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//CTP_SCL
{REG_PIN_SDA3,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SDA3,                     BITS_PIN_DS(3)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//CTP_SDA
{REG_PIN_SCL0,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SCL0,                     BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C0_SCL
{REG_PIN_SDA0,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SDA0,                     BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C0_SDA
{REG_PIN_SCL1,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SCL1,                     BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C1_SCL
{REG_PIN_SDA1,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SDA1,                     BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C1_SDA
{REG_PIN_CMPD2,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_CMPD2,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_PWDN2
{REG_PIN_CMRST2,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_CMRST2,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_RST2
{REG_PIN_CMMCLK0,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_CMMCLK0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_MCLK0
{REG_PIN_CMRST0,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_CMRST0,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_RST0
{REG_PIN_CMPD0,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_CMPD0,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_PWDN0
{REG_PIN_CMMCLK1,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_CMMCLK1,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_MCLK1
{REG_PIN_CMRST1,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_CMRST1,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_RST1
{REG_PIN_CMPD1,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_CMPD1,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_PWDN1
{REG_PIN_U0TXD,                         BITS_PIN_AF(0)},
{REG_MISC_PIN_U0TXD,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BB_U0TXD
{REG_PIN_U0RXD,                         BITS_PIN_AF(0)},
{REG_MISC_PIN_U0RXD,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//BB_U0RXD
{REG_PIN_U0CTS,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_U0CTS,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_OE},//VDDCAMCORE_EN
{REG_PIN_U0RTS,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_U0RTS,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//VDD_SMARTAMP_VSEL
{REG_PIN_U1TXDG0,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_U1TXDG0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BB_U1TXD
{REG_PIN_U1RXDG0,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_U1RXDG0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//BB_U1RXD
{REG_PIN_U2TXDG0,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_U2TXDG0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BB_U2TXD
{REG_PIN_U2RXDG0,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_U2RXDG0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//BB_U2RXD
{REG_PIN_EXTINT9,                       BITS_PIN_AF(2)},
{REG_MISC_PIN_EXTINT9,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//TF_DET
{REG_PIN_EXTINT10,                      BITS_PIN_AF(2)},
{REG_MISC_PIN_EXTINT10,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//BUA_BAT_DET
{REG_PIN_SD1_CLK,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_SD1_CLK,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD1_CMD,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_SD1_CMD,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD1_D0,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_SD1_D0,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD1_D1,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_SD1_D1,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD1_D2,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_SD1_D2,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD1_D3,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_SD1_D3,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_DMIC_CLKG0,                    BITS_PIN_AF(3)},
{REG_MISC_PIN_DMIC_CLKG0,               BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_DMIC_DATG0,                    BITS_PIN_AF(3)},
{REG_MISC_PIN_DMIC_DATG0,               BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//TOF_GPIO
{REG_PIN_DMIC_CLKG1,                    BITS_PIN_AF(3)},
{REG_MISC_PIN_DMIC_CLKG1,               BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//SUBPMIC_DSIP_NIRQ
{REG_PIN_DMIC_DATG1,                    BITS_PIN_AF(3)},
{REG_MISC_PIN_DMIC_DATG1,               BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//TOF_XSHUT
{REG_PIN_IIS0DI,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_IIS0DI,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_IIS0DO,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_IIS0DO,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_IIS0CLK,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_IIS0CLK,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_IIS0LRCK,                      BITS_PIN_AF(3)},
{REG_MISC_PIN_IIS0LRCK,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_U4TXD,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_U4TXD,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_U4RXD,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_U4RXD,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_U4CTS,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_U4CTS,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_U4RTS,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_U4RTS,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_U5TXD,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_U5TXD,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_U5RXD,                         BITS_PIN_AF(3)},
{REG_MISC_PIN_U5RXD,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SCL6,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SCL6,                     BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C6_SCL
{REG_PIN_SDA6,                          BITS_PIN_AF(0)},
{REG_MISC_PIN_SDA6,                     BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C6_SDA
{REG_PIN_EMMC_D3,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_D3,                  BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D3
{REG_PIN_EMMC_D7,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_D7,                  BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D7
{REG_PIN_EMMC_D4,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_D4,                  BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D4
{REG_PIN_EMMC_D2,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_D2,                  BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D2
{REG_PIN_EMMC_DS,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_DS,                  BITS_PIN_DS(2)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//EMMC_DS
{REG_PIN_EMMC_CLK,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_CLK,                 BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//EMMC_CLK
{REG_PIN_EMMC_D5,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_D5,                  BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D5
{REG_PIN_EMMC_D1,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_D1,                  BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D1
{REG_PIN_EMMC_CMD,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_CMD,                 BITS_PIN_DS(2)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_CMD
{REG_PIN_EMMC_D0,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_D0,                  BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D0
{REG_PIN_EMMC_RST,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_RST,                 BITS_PIN_DS(2)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//EMMC_RST
{REG_PIN_EMMC_D6,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_EMMC_D6,                  BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D6
{REG_PIN_NF_DATA_1,                     BITS_PIN_AF(3)},
{REG_MISC_PIN_NF_DATA_1,                BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//SUBPMIC_GPIO2
{REG_PIN_NF_CEN0,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_NF_CEN0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_OE},//VDDCAMA_EN
{REG_PIN_NF_DATA_2,                     BITS_PIN_AF(3)},
{REG_MISC_PIN_NF_DATA_2,                BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//LCM_ID
{REG_PIN_NF_DATA_0,                     BITS_PIN_AF(3)},
{REG_MISC_PIN_NF_DATA_0,                BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_OE},//VDDQ_EN
{REG_PIN_NF_WEN,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_NF_WEN,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_OE},//VDDSDCORE_EN
{REG_PIN_LCM_FMARK,                     BITS_PIN_AF(0)},
{REG_MISC_PIN_LCM_FMARK,                BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//LCM_FMARK
{REG_PIN_XTL_BUF_EN2,                   BITS_PIN_AF(0)},
{REG_MISC_PIN_XTL_BUF_EN2,              BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//XTL_BUF_EN2
{REG_PIN_XTL_BUF_EN1,                   BITS_PIN_AF(0)},
{REG_MISC_PIN_XTL_BUF_EN1,              BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//XTL_BUF_EN1
{REG_PIN_AUD_SCLK,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_AUD_SCLK,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//AUD_SCLK
{REG_PIN_LCM_RSTN,                      BITS_PIN_AF(3)},
{REG_MISC_PIN_LCM_RSTN,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LCM_RSTN
{REG_PIN_AUD_ADD0,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_AUD_ADD0,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//AUD_ADD0
{REG_PIN_CHIP_SLEEP,                    BITS_PIN_AF(0)},
{REG_MISC_PIN_CHIP_SLEEP,               BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CHIP_SLEEP
{REG_PIN_PTEST,                         BITS_PIN_AF(0)},
{REG_MISC_PIN_PTEST,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//GND
{REG_PIN_EXT_RST_B,                     BITS_PIN_AF(0)},
{REG_MISC_PIN_EXT_RST_B,                BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//EXT_RST_B
{REG_PIN_AUD_ADSYNC,                    BITS_PIN_AF(0)},
{REG_MISC_PIN_AUD_ADSYNC,               BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//AUD_ADSYNC
{REG_PIN_AUD_DASYNC,                    BITS_PIN_AF(0)},
{REG_MISC_PIN_AUD_DASYNC,               BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//AUD_DASYNC
{REG_PIN_DCDCARM_EN,                    BITS_PIN_AF(0)},
{REG_MISC_PIN_DCDCARM_EN,               BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//VDDARM1_EN/VDDARM_EN
{REG_PIN_AUD_DAD0,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_AUD_DAD0,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//AUO_DAD0
{REG_PIN_AUD_DAD1,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_AUD_DAD1,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//AUD_DAD1
{REG_PIN_CLK_32K,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_CLK_32K,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//CLK_32K
{REG_PIN_ADI_D,                         BITS_PIN_AF(0)},
{REG_MISC_PIN_ADI_D,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_NONE|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//ADI_D
{REG_PIN_ADI_SCLK,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_ADI_SCLK,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_NONE|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//ADI_SCLK
{REG_PIN_ANA_INT,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_ANA_INT,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//ANA_INT
{REG_PIN_ADI_SYNC,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_ADI_SYNC,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NoBall
{REG_PIN_SD0_CMD,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SD0_CMD,                  BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//TF_SD0_CMD
{REG_PIN_SD0_D1,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_SD0_D1,                   BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//TF_SD0_D1
{REG_PIN_SD0_D0,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_SD0_D0,                   BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//TF_SD0_D0
{REG_PIN_SD0_CLK,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SD0_CLK,                  BITS_PIN_DS(6)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//TF_SD0_CLK0
{REG_PIN_SD0_D2,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_SD0_D2,                   BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//TF_SD0_D2
{REG_PIN_SD0_D3,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_SD0_D3,                   BITS_PIN_DS(3)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//TF_SD0_D3
{REG_PIN_SD2_CLK,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_SD2_CLK,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD2_D1,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_SD2_D1,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD2_D0,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_SD2_D0,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD2_CMD,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_SD2_CMD,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD2_D3,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_SD2_D3,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD2_D2,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_SD2_D2,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SIMCLK0,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SIMCLK0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM0_CLK
{REG_PIN_SIMDAT0,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SIMDAT0,                  BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_NUL|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//SIM0_DA
{REG_PIN_SIMRST0,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SIMRST0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM0_RST
{REG_PIN_SIMCLK1,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SIMCLK1,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM1_CLK
{REG_PIN_SIMDAT1,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SIMDAT1,                  BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_NUL|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//SIM1_DA
{REG_PIN_SIMRST1,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SIMRST1,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM1_RST
{REG_PIN_SIMCLK2,                       BITS_PIN_AF(1)},
{REG_MISC_PIN_SIMCLK2,                  BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_NONE|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C4_SCL
{REG_PIN_SIMDAT2,                       BITS_PIN_AF(1)},
{REG_MISC_PIN_SIMDAT2,                  BITS_PIN_DS(1)|BIT_PIN_WPUS|BIT_PIN_WPU|BIT_PIN_SLP_NONE|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//I2C4_SDA
{REG_PIN_SIMRST2,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_SIMRST2,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_KEYOUT0,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_KEYOUT0,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//VDD_SMARTAMP_EN
{REG_PIN_KEYOUT1,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_KEYOUT1,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_KEYOUT2,                       BITS_PIN_AF(1)},
{REG_MISC_PIN_KEYOUT2,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LCM_BL_PWM
{REG_PIN_KEYIN0,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_KEYIN0,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//KEYIN0
{REG_PIN_KEYIN1,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_KEYIN1,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//KEYIN1
{REG_PIN_KEYIN2,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_KEYIN2,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//USBID_CRTL
{REG_PIN_RFFE0_SCK,                     BITS_PIN_AF(0)},
{REG_MISC_PIN_RFFE0_SCK,                BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//PCC_RFFE_SCK0
{REG_PIN_RFFE0_SDA,                     BITS_PIN_AF(0)},
{REG_MISC_PIN_RFFE0_SDA,                BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//PCC_RFFE_SDA0
{REG_PIN_RFCTL0,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL0,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_0
{REG_PIN_RFCTL1,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL1,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_1
{REG_PIN_RFCTL2,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL2,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_2
{REG_PIN_RFCTL3,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL3,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_3
{REG_PIN_RFCTL4,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL4,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_4
{REG_PIN_RFCTL5,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL5,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_5
{REG_PIN_RFCTL6,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL6,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_6
{REG_PIN_RFCTL7,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL7,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_7
{REG_PIN_RFCTL8,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL8,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_8
{REG_PIN_RFCTL9,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL9,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_9
{REG_PIN_RFCTL10,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL10,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_10
{REG_PIN_RFCTL11,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL11,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_11
{REG_PIN_GPIO31,                        BITS_PIN_AF(1)},
{REG_MISC_PIN_GPIO31,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//SIM0_DET
{REG_PIN_GPIO32,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_GPIO32,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//FS_DUALCAM
{REG_PIN_RFFE1_SCK,                     BITS_PIN_AF(3)},
{REG_MISC_PIN_RFFE1_SCK,                BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_RFFE1_SDA,                     BITS_PIN_AF(3)},
{REG_MISC_PIN_RFFE1_SDA,                BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_GPIO33,                        BITS_PIN_AF(3)},
{REG_MISC_PIN_GPIO33,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//BOARD_ID2
{REG_PIN_RFCTL16,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_RFCTL16,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_CP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//RFCTL_15
{REG_PIN_RFCTL17,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_RFCTL17,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//SUBPMIC_NIRQ
{REG_PIN_GPIO9,                         BITS_PIN_AF(1)},
{REG_MISC_PIN_GPIO9,                    BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_PUBCP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//SIM1_DET
{REG_PIN_RFCTL19,                       BITS_PIN_AF(1)},
{REG_MISC_PIN_RFCTL19,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BB_U3TXD
{REG_PIN_RFCTL20,                       BITS_PIN_AF(1)},
{REG_MISC_PIN_RFCTL20,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//BB_U3RXD
{REG_PIN_RFSDA1,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFSDA1,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_NO_CM4|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//SCC_RFSDA
{REG_PIN_RFSCK1,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFSCK1,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_NO_CM4|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//SCC_RFSCK
{REG_PIN_RFSEN1,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFSEN1,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_NO_CM4|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//SCC_RFSEN
{REG_PIN_RFSDA0,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFSDA0,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_NO_CM4|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//PCC_RFSDA
{REG_PIN_RFSCK0,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFSCK0,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_NO_CM4|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//PCC_RFSCK
{REG_PIN_RFSEN0,                        BITS_PIN_AF(0)},
{REG_MISC_PIN_RFSEN0,                   BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_ALL_NO_CM4|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//PCC_RFSEN
{REG_PIN_LVDSRF0_ADCON,                 BITS_PIN_AF(3)},
{REG_MISC_PIN_LVDSRF0_ADCON,            BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LCM_SOURCE_AVDDEN
{REG_PIN_LVDSRF0_DACON,                 BITS_PIN_AF(3)},
{REG_MISC_PIN_LVDSRF0_DACON,            BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LCM_SOURCE_AVEEEN
{REG_PIN_SPI2_CSN,                      BITS_PIN_AF(2)},
{REG_MISC_PIN_SPI2_CSN,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_CM4|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//PROX_INT
{REG_PIN_SPI2_DO,                       BITS_PIN_AF(2)},
{REG_MISC_PIN_SPI2_DO,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_CM4|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//M_RSTN
{REG_PIN_SPI2_DI,                       BITS_PIN_AF(2)},
{REG_MISC_PIN_SPI2_DI,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_CM4|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//AG_INT1
{REG_PIN_SPI2_CLK,                      BITS_PIN_AF(2)},
{REG_MISC_PIN_SPI2_CLK,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_CM4|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//AG_INT0
{REG_PIN_SPI0_CSN,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_SPI0_CSN,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//FTID_SPI_CS
{REG_PIN_SPI0_DO,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SPI0_DO,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//FTID_SPI_DI
{REG_PIN_SPI0_DI,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_SPI0_DI,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//FTID_SPI_DO
{REG_PIN_SPI0_CLK,                      BITS_PIN_AF(0)},
{REG_MISC_PIN_SPI0_CLK,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//FTID_SPI_CLK
{REG_PIN_TDO_LTE,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_TDO_LTE,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//VDD_SMARTAMP_BYP
{REG_PIN_TDI_LTE,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_TDI_LTE,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//BOARD_ID0
{REG_PIN_TCK_LTE,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_TCK_LTE,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_NUL|BIT_PIN_SLP_AP|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//BOARD_ID1
{REG_PIN_TMS_LTE,                       BITS_PIN_AF(3)},
{REG_MISC_PIN_TMS_LTE,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_NONE|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//SUBPMIC_BUCK_NIRQ
{REG_PIN_RTCK_LTE,                      BITS_PIN_AF(3)},
{REG_MISC_PIN_RTCK_LTE,                 BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPD|BIT_PIN_SLP_AP|BIT_PIN_SLP_WPD|BIT_PIN_SLP_OE},//CAMERA_FLASH_CHIPEN
{REG_PIN_TCK_ARM,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_TCK_ARM,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_NONE|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//MTCK
{REG_PIN_TMS_ARM,                       BITS_PIN_AF(0)},
{REG_MISC_PIN_TMS_ARM,                  BITS_PIN_DS(1)|BIT_PIN_NULL|BIT_PIN_WPU|BIT_PIN_SLP_NONE|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//MTMS
};

/*here is the adie pinmap such as 2721*/
static pinmap_t adie_pinmap[]={
{REG_PIN_ANA_EXT_XTL_EN0,		BITS_ANA_PIN_DS(1)|BIT_ANA_PIN_WPD|BIT_ANA_PIN_SLP_IE},//NC
{REG_PIN_ANA_EXT_XTL_EN1,		BITS_ANA_PIN_DS(1)|BIT_ANA_PIN_WPD|BIT_ANA_PIN_SLP_IE},//XTL_BUF_EN1
{REG_PIN_ANA_EXT_XTL_EN2,		BITS_ANA_PIN_DS(1)|BIT_ANA_PIN_WPD|BIT_ANA_PIN_SLP_IE},//XTL_BUF_EN2
{REG_PIN_ANA_EXT_XTL_EN3,		BITS_ANA_PIN_DS(1)|BIT_ANA_PIN_WPD|BIT_ANA_PIN_SLP_IE},//NC
{REG_PIN_ANA_PTESTO,            BITS_ANA_PIN_DS(1)|BIT_ANA_PIN_NUL|BITS_ANA_PIN_AF(1)|BIT_ANA_PIN_SLP_OE},//BUA_BAT_DET
};

int  pin_init(void)
{
	int i;
	for (i = 0; i < sizeof(pinmap)/sizeof(pinmap[0]); i++) {
		__raw_writel(pinmap[i].val, CTL_PIN_BASE + pinmap[i].reg);
	}

	for (i = 0; i < sizeof(adie_pinmap)/sizeof(adie_pinmap[0]); i++) {
		sci_adi_set(CTL_ANA_PIN_BASE + adie_pinmap[i].reg, adie_pinmap[i].val);
	}

	return 0;
}

