/** 463284674 **/
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
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "daisyPinParasitics_inst_static.h"

static long   __BITWISE_LOGIC_OP_TEMP_VAR__;int daisyPinParasitics_DcFuncDerLoad(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;


/*  Pre-Anal Load Code. */_V_Static_vPackage_vPad_208 = 0.0;
_Static_d_by_di_vPackage_vPad_184 = 0.0;

/*  C Code Every Code. */ahdlDoSetLineNum ((long) 20);(_V_Static_vPackage_vPad_208) += (((((((_bondRes_136)) + ((_leadRes_64))))) * ((getThruSolution(_vPackage_vPad_flow_192)))));_Static_d_by_di_vPackage_vPad_184 += (((((_bondRes_136))) + (((_leadRes_64)))));ahdlDoSetLineNum ((long) 20);    ahdlInterSetAcrossQuan(      *(void **)(instData + 196),
       _vPackage_12,       _vPad_20,       _vPackage_vPad_flow_192,      _V_Static_vPackage_vPad_208   ,       1.0    );
      ahdlInterAddStaticElement(*(void**)(instData + 176), -_Static_d_by_di_vPackage_vPad_184);
    return __msgSeverity__;
} /** end of daisyPinParasitics_DcFuncDerLoad **/

int daisyPinParasitics_DcFuncLoad(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;


/*  Pre-Anal Load Code. */_V_Static_vPackage_vPad_208 = 0.0;
_Static_d_by_di_vPackage_vPad_184 = 0.0;

/*  C Code Every Code. */ahdlDoSetLineNum ((long) 20);(_V_Static_vPackage_vPad_208) += (((((((_bondRes_136)) + ((_leadRes_64))))) * ((getThruSolution(_vPackage_vPad_flow_192)))));ahdlDoSetLineNum ((long) 20);    ahdlInterSetAcrossQuan(      *(void **)(instData + 196),
       _vPackage_12,       _vPad_20,       _vPackage_vPad_flow_192,      _V_Static_vPackage_vPad_208   ,       1.0    );
    return __msgSeverity__;
} /** end of daisyPinParasitics_DcFuncLoad **/

int daisyPinParasitics_TranFuncDerLoad(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;


/*  Pre-Anal Load Code. */_V_Static_vPackage_vPad_208 = 0.0;
_Static_d_by_di_vPackage_vPad_184 = 0.0;

/*  C Code Every Code. */ahdlDoSetLineNum ((long) 20);(_V_Static_vPackage_vPad_208) += (((((((_bondRes_136)) + ((_leadRes_64))))) * ((getThruSolution(_vPackage_vPad_flow_192)))));_Static_d_by_di_vPackage_vPad_184 += (((((_bondRes_136))) + (((_leadRes_64)))));ahdlDoSetLineNum ((long) 20);    ahdlInterSetAcrossQuan(      *(void **)(instData + 196),
       _vPackage_12,       _vPad_20,       _vPackage_vPad_flow_192,      _V_Static_vPackage_vPad_208   ,       1.0    );
      ahdlInterAddStaticElement(*(void**)(instData + 176), -_Static_d_by_di_vPackage_vPad_184);
    return __msgSeverity__;
} /** end of daisyPinParasitics_TranFuncDerLoad **/

int daisyPinParasitics_TranFuncLoad(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;


/*  Pre-Anal Load Code. */_V_Static_vPackage_vPad_208 = 0.0;
_Static_d_by_di_vPackage_vPad_184 = 0.0;

/*  C Code Every Code. */ahdlDoSetLineNum ((long) 20);(_V_Static_vPackage_vPad_208) += (((((((_bondRes_136)) + ((_leadRes_64))))) * ((getThruSolution(_vPackage_vPad_flow_192)))));ahdlDoSetLineNum ((long) 20);    ahdlInterSetAcrossQuan(      *(void **)(instData + 196),
       _vPackage_12,       _vPad_20,       _vPackage_vPad_flow_192,      _V_Static_vPackage_vPad_208   ,       1.0    );
    return __msgSeverity__;
} /** end of daisyPinParasitics_TranFuncLoad **/

int daisyPinParasitics_NoiseLoadBiasDep(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;


    return __msgSeverity__;
} /** end of daisyPinParasitics_NoiseLoadBiasDep **/

int daisyPinParasitics_OpPointCalc(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;
    return __msgSeverity__;
} /** end of daisyPinParasitics_OpPointCalc **/

