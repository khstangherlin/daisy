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

extern int daisySimAdcWalk_DcFuncDerLoad(int, char*, char*, char**);
extern int daisySimAdcWalk_DcFuncLoad(int, char*, char*, char**);
extern int daisySimAdcWalk_TranFuncDerLoad(int, char*, char*, char**);
extern int daisySimAdcWalk_TranFuncLoad(int, char*, char*, char**);
extern int daisySimAdcWalk_NoiseLoadBiasDep(int, char*, char*, char**);
extern int daisySimAdcWalk_OpPointCalc(int, char*, char*, char**);

int daisySimAdcWalk_InstallDeviceBindings(struct ahdlDevDescData *desc) {

   ahdlBindDevDescFuncs(desc,
                        daisySimAdcWalk_DcFuncDerLoad,  
                        daisySimAdcWalk_DcFuncLoad,     
                        daisySimAdcWalk_TranFuncDerLoad,
                        daisySimAdcWalk_TranFuncLoad,   
                        daisySimAdcWalk_NoiseLoadBiasDep,
                        daisySimAdcWalk_OpPointCalc
                       );
   return 1; /** success **/
}
