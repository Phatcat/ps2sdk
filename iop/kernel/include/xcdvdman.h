/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
# $Id: cdvdman.h 1224 2005-10-14 16:37:42Z eeug $
# Definitions and imports for cdvdman
*/

#ifndef IOP_CDVDMAN_H
#define IOP_CDVDMAN_H

#include <types.h>
#include <irx.h>

#include <libxcdvd.h>

#define cdvdman_IMPORTS_start DECLARE_IMPORT_TABLE(cdvdman, 1, 1)
#define cdvdman_IMPORTS_end END_IMPORT_TABLE

#define I_cdvdman_termcall DECLARE_IMPORT(3, cdvdman_termcall)
#define I_sceCdInit DECLARE_IMPORT(4, sceCdInit)
#define I_sceCdStandby DECLARE_IMPORT(5, sceCdStandby)
#define I_sceCdRead DECLARE_IMPORT(6, sceCdRead)
#define I_sceCdSeek DECLARE_IMPORT(7, sceCdSeek)
#define I_sceCdGetError DECLARE_IMPORT(8, sceCdGetError)
#define I_sceCdGetToc DECLARE_IMPORT(9, sceCdGetToc)
#define I_sceCdSearchFile DECLARE_IMPORT(10, sceCdSearchFile)
#define I_sceCdSync DECLARE_IMPORT(11, sceCdSync)
#define I_sceCdGetDiskType DECLARE_IMPORT(12, sceCdGetDiskType)
#define I_sceCdDiskReady DECLARE_IMPORT(13, sceCdDiskReady)
#define I_sceCdTrayReq DECLARE_IMPORT(14, sceCdTrayReq)
#define I_sceCdStop DECLARE_IMPORT(15, sceCdStop)
#define I_sceCdPosToInt DECLARE_IMPORT(16, sceCdPosToInt)
#define I_sceCdIntToPos DECLARE_IMPORT(17, sceCdIntToPos)
#define I_sceCdGetToc2 DECLARE_IMPORT(19, sceCdGetToc2)
#define I_sceCdReadDVDV DECLARE_IMPORT(20, sceCdReadDVDV)
#define I_sceCdCheckCmd DECLARE_IMPORT(21, sceCdCheckCmd)
#define I_sceCdRI DECLARE_IMPORT(22, sceCdRI)
#define I_sceCdReadClock DECLARE_IMPORT(24, sceCdReadClock)
#define I_sceCdStatus DECLARE_IMPORT(28 , sceCdStatus)
#define I_sceCdApplySCmd DECLARE_IMPORT(29, sceCdApplySCmd)
#define I_sceCdSetHDMode DECLARE_IMPORT(30, sceCdSetHDMode)
#define I_sceCdReadKey DECLARE_IMPORT(35, sceCdReadKey)
#define I_sceCdDecSet DECLARE_IMPORT(36, sceCdDecSet)
#define I_sceCdCallback DECLARE_IMPORT(37, sceCdCallback)
#define I_sceCdPause DECLARE_IMPORT(38, sceCdPause)
#define I_sceCdBreak DECLARE_IMPORT(39, sceCdBreak)
#define I_sceCdReadCDDA DECLARE_IMPORT(40, sceCdReadCDDA)
#define I_sceCdReadConsoleID DECLARE_IMPORT(41, sceCdReadConsoleID)
#define I_sceCdMV DECLARE_IMPORT(43, sceCdMV)
#define I_sceCdGetReadPos DECLARE_IMPORT(44, sceCdGetReadPos)
#define I_sceCdCtrlADout DECLARE_IMPORT(45, sceCdCtrlADout)
#define I_sceCdNop DECLARE_IMPORT(46, sceCdNop)
#define I_sceGetFsvRbuf DECLARE_IMPORT(47, sceGetFsvRbuf)
#define I_sceCdstm0Cb DECLARE_IMPORT(48, sceCdstm0Cb)
#define I_sceCdstm1Cb DECLARE_IMPORT(49, sceCdstm1Cb)
#define I_sceCdSC DECLARE_IMPORT(50, sceCdSC)
#define I_sceCdRC DECLARE_IMPORT(51, sceCdRC)
#define I_sceCdForbidDVDP DECLARE_IMPORT(52, sceCdForbidDVDP)
#define I_sceCdReadSUBQ DECLARE_IMPORT(53, sceCdReadSUBQ)
#define I_sceCdApplyNCmd DECLARE_IMPORT(54, sceCdApplyNCmd)
#define I_sceCdStInit DECLARE_IMPORT(56, sceCdStInit)
#define I_sceCdStRead DECLARE_IMPORT(57, sceCdStRead)
#define I_sceCdStSeek DECLARE_IMPORT(58, sceCdStSeek)
#define I_sceCdStStart DECLARE_IMPORT(59, sceCdStStart)
#define I_sceCdStStat DECLARE_IMPORT(60, sceCdStStat)
#define I_sceCdStStop DECLARE_IMPORT(61, sceCdStStop)
#define I_sceCdRead0 DECLARE_IMPORT(62, sceCdRead0)
#define I_sceCdRV DECLARE_IMPORT(63, sceCdRV)
#define I_sceCdRM DECLARE_IMPORT(64, sceCdRM)
#define I_sceCdReadChain DECLARE_IMPORT(66, sceCdReadChain)
#define I_sceCdStPause DECLARE_IMPORT(67, sceCdStPause)
#define I_sceCdStResume DECLARE_IMPORT(68, sceCdStResume)
#define I_sceCdForbidRead DECLARE_IMPORT(69, sceCdForbidRead)
#define I_sceCdBootCertify DECLARE_IMPORT(70, sceCdBootCertify)
#define I_sceCdSpinCtrlIOP DECLARE_IMPORT(71, sceCdSpinCtrlIOP)
#define I_sceCdBlueLEDCtl DECLARE_IMPORT(72, sceCdBlueLEDCtl)
#define I_sceCdCancelPOffRdy DECLARE_IMPORT(73, sceCdCancelPOffRdy)
#define I_sceCdPowerOff DECLARE_IMPORT(74, sceCdPowerOff)
#define I_sceCdMmode DECLARE_IMPORT(75, sceCdMmode)
#define I_sceCdReadFull DECLARE_IMPORT(76, sceCdReadFull)
#define I_sceCdStSeekF DECLARE_IMPORT(77, sceCdStSeekF)
#define I_sceCdPOffCallback DECLARE_IMPORT(78, sceCdPOffCallback)
#define I_sceCdReadDiskID DECLARE_IMPORT(79, sceCdReadDiskID)
#define I_sceCdReadGUID DECLARE_IMPORT(80, sceCdReadGUID)
#define I_sceCdSetTimeout DECLARE_IMPORT(81, sceCdSetTimeout)
#define I_sceCdReadModelID DECLARE_IMPORT(82, sceCdReadModelID)
#define I_sceCdReadDvdDualInfo DECLARE_IMPORT(83, sceCdReadDvdDualInfo)
#define I_sceCdLayerSearchFile DECLARE_IMPORT(84, sceCdLayerSearchFile)
#define I_sceCdStatus2 DECLARE_IMPORT(90, sceCdStatus2)
#define I_sceCdApplySCmd2 DECLARE_IMPORT(112, sceCdApplySCmd2)
#define I_sceCdReadIOPm DECLARE_IMPORT(114, sceCdReadIOPm)
#define I_sceCdRcBypassCtl DECLARE_IMPORT(115, sceCdRcBypassCtl)
#define I_cdvdman_125 DECLARE_IMPORT(125, cdvdman_125)


#endif /* IOP_CDVDMAN_H */