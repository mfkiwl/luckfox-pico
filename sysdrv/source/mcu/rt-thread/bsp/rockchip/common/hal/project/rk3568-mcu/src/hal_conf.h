/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd.
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* CPU config */
#define SOC_RK3568
#define HAL_MCU_CORE

/* System timer designation (RK TIMER) */
#define SYS_TIMER TIMER5

/* HAL Driver Config */
#define HAL_CRU_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_INTMUX_MODULE_ENABLED
#define HAL_IRQ_HANDLER_MODULE_ENABLED
#define HAL_PINCTRL_MODULE_ENABLED
#define HAL_PWM_MODULE_ENABLED
#define HAL_RISCVIC_MODULE_ENABLED
#define HAL_SARADC_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED

#define HAL_DBG_USING_LIBC_PRINTF
#define HAL_DBG_INFO_ON
#define HAL_DBG_WRN_ON
#define HAL_DBG_ERR_ON
#define HAL_ASSERT_ON

#define HAL_RISCVIC_INTERRUPT_SEPERATE 8

#endif