/***************************************************************************
 *   Copyright (C) 2007 Ryan Schultz, PCSX-df Team, PCSX team              *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.           *
 ***************************************************************************/

#ifndef __GTE_H__
#define __GTE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "psxcommon.h"
#include "r3000a.h"

void gteMFC2(void);
void gteCFC2(void);
void gteMTC2(void);
void gteCTC2(void);
void gteLWC2(void);
void gteSWC2(void);

void gteRTPS(void);
void gteNCLIP(void);
void gteOP(void);
void gteDPCS(void);
void gteINTPL(void);
void gteMVMVA(void);
void gteNCDS(void);
void gteCDP(void);
void gteNCDT(void);
void gteNCCS(void);
void gteCC(void);
void gteNCS(void);
void gteNCT(void);
void gteSQR(void);
void gteDCPL(void);
void gteDPCT(void);
void gteAVSZ3(void);
void gteAVSZ4(void);
void gteRTPT(void);
void gteGPF(void);
void gteGPL(void);
void gteNCCT(void);

#ifdef __cplusplus
}
#endif
#endif
