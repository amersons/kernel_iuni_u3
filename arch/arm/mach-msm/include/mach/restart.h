/* Copyright (c) 2011, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _ASM_ARCH_MSM_RESTART_H_
#define _ASM_ARCH_MSM_RESTART_H_

#define RESTART_NORMAL 0x0
#define RESTART_DLOAD  0x1
//Gionee taochao 2013-11-20, add for delete the download mode when device crash begin
#if defined(CONFIG_GN_Q_BSP_NO_DOWNLOAD_MODE)
#define ENTER_DOWNLOAD 0x1
#endif
//Gionee taochao 2013-11-20, add for delete the download mode when device crash end

#if defined(CONFIG_MSM_NATIVE_RESTART)
void msm_set_restart_mode(int mode);
void msm_restart(char mode, const char *cmd);
#elif defined(CONFIG_ARCH_FSM9XXX)
void fsm_restart(char mode, const char *cmd);
#else
#define msm_set_restart_mode(mode)
#endif

//Gionee taochao 2013-11-20, add for delete the download mode when device crash begin
#if defined(CONFIG_GN_Q_BSP_NO_DOWNLOAD_MODE)
void msm_set_enter_download_mode(int mode);
#endif
//Gionee taochao 2013-11-20, add for delete the download mode when device crash end
extern int pmic_reset_irq;

#endif

