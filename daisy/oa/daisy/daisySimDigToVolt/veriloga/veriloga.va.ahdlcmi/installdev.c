/***********************************************************************************
 ** Copyright (c) 2003 Cadence Design Systems, Inc. All rights reserved.          **
 **                                                                               **
 ** This work may not be copied, modified, re-published, uploaded, executed, or   **
 ** distributed in any way, in any medium, whether in whole or in part, without   **
 ** prior written permission from Cadence Design Systems, Inc.                    **
 **                                                                               **
 ** This file is automatically generated and will be overwritten. The interfaces  **
 ** used within this generated code are subject to change without notice.         **
 ***********************************************************************************/
#include "ahdlcmi.h"

int ahdlBsourceInterfaceVersion() {
   return 1; /* Only used when version >= spectre's BsourceInterfaceVersion */
}

extern int daisySimDigToVolt_DcFuncDerLoad(int, char*, char*, char**);
extern int daisySimDigToVolt_DcFuncLoad(int, char*, char*, char**);
extern int daisySimDigToVolt_TranFuncDerLoad(int, char*, char*, char**);
extern int daisySimDigToVolt_TranFuncLoad(int, char*, char*, char**);
extern int daisySimDigToVolt_NoiseLoadBiasDep(int, char*, char*, char**);
extern int daisySimDigToVolt_OpPointCalc(int, char*, char*, char**);

int daisySimDigToVolt_InstallDeviceBindings(struct ahdlDevDescData *desc) {

   ahdlBindDevDescFuncs(desc,
                        daisySimDigToVolt_DcFuncDerLoad,  
                        daisySimDigToVolt_DcFuncLoad,     
                        daisySimDigToVolt_TranFuncDerLoad,
                        daisySimDigToVolt_TranFuncLoad,   
                        daisySimDigToVolt_NoiseLoadBiasDep,
                        daisySimDigToVolt_OpPointCalc
                       );
   return 1; /** success **/
}