/** 914032013 **/
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
#include "daisySimAdcTherm_inst_static.h"

static long   __BITWISE_LOGIC_OP_TEMP_VAR__;int daisySimAdcTherm_DcFuncDerLoad(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;
double	__tmpStkVar_1 = 0.0;


/*  Pre-Anal Load Code. */memcpy ((void *) (instData + 312), (void *) (instData + 440), 128);
_V_Static_DATA_7__600 = 0.0;
_V_Static_DATA_6__632 = 0.0;
_V_Static_DATA_5__664 = 0.0;
_V_Static_DATA_4__696 = 0.0;
_V_Static_DATA_3__728 = 0.0;
_V_Static_DATA_2__760 = 0.0;
_V_Static_DATA_1__792 = 0.0;
_V_Static_DATA_0__824 = 0.0;

/*  C Code Every Code. */{ahdlDoSetLineNum ((long) 23);ahdlDoSetLineNum ((long) 23);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((__FLOAT_DIV((_vLogicHigh_96), ((2.00000000000000000000e+00)))));(_vtrans_clk_240) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 24);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((0.00000000000000000000e+00));(_vLogicLow_200) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 25);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = __INT_TO_DBL((1L));(_vref_280) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 26);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((__FLOAT_DIV((_vref_280), __INT_TO_DBL((2L)))));(_halfref_160) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 30);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((getAcrossSolution1(_vin_52)));__tmpStkVar_1 = ((1.00000000000000000000e+00));(_unconverted_120) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 31);for (_i_572 = (7L); (((_i_572)) >= ((0L))); _i_572 = (((_i_572) - ((1L))))){{ahdlDoSetLineNum ((long) 32);ahdlDoSetLineNum ((long) 32);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = __INT_TO_DBL((0L));(_vd_312((_i_572))) = __tempValueResultStatic;}if (((_unconverted_120) > __INT_TO_DBL((((_i_572) + ((1L))))))){{ahdlDoSetLineNum ((long) 34);ahdlDoSetLineNum ((long) 34);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = (_vLogicHigh_96);(_vd_312((_i_572))) = __tempValueResultStatic;}}}else{{ahdlDoSetLineNum ((long) 36);ahdlDoSetLineNum ((long) 36);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = (_vLogicLow_200);(_vd_312((_i_572))) = __tempValueResultStatic;}}}}}ahdlDoSetLineNum ((long) 41);if (0 /* Cross Event not valid in DC mode. */){{ahdlDoSetLineNum ((long) 42);ahdlDoSetLineNum ((long) 42);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((getAcrossSolution1(_vin_52)));__tmpStkVar_1 = ((1.00000000000000000000e+00));(_unconverted_120) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 43);for (_i_572 = (7L); (((_i_572)) >= ((0L))); _i_572 = (((_i_572) - ((1L))))){{ahdlDoSetLineNum ((long) 44);ahdlDoSetLineNum ((long) 44);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = __INT_TO_DBL((0L));(_vd_312((_i_572))) = __tempValueResultStatic;}if (((_unconverted_120) > __INT_TO_DBL((((_i_572) + ((1L))))))){{ahdlDoSetLineNum ((long) 46);ahdlDoSetLineNum ((long) 46);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = (_vLogicHigh_96);(_vd_312((_i_572))) = __tempValueResultStatic;}}}else{{ahdlDoSetLineNum ((long) 48);ahdlDoSetLineNum ((long) 48);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = (_vLogicLow_200);(_vd_312((_i_572))) = __tempValueResultStatic;}}}}}}}ahdlDoSetLineNum ((long) 65);(_V_Static_DATA_7__600) += (_vd_312((7L)));ahdlDoSetLineNum ((long) 66);(_V_Static_DATA_6__632) += (_vd_312((6L)));ahdlDoSetLineNum ((long) 67);(_V_Static_DATA_5__664) += (_vd_312((5L)));ahdlDoSetLineNum ((long) 68);(_V_Static_DATA_4__696) += (_vd_312((4L)));ahdlDoSetLineNum ((long) 69);(_V_Static_DATA_3__728) += (_vd_312((3L)));ahdlDoSetLineNum ((long) 70);(_V_Static_DATA_2__760) += (_vd_312((2L)));ahdlDoSetLineNum ((long) 71);(_V_Static_DATA_1__792) += (_vd_312((1L)));ahdlDoSetLineNum ((long) 72);(_V_Static_DATA_0__824) += (_vd_312((0L)));}ahdlDoSetLineNum ((long) 77);    ahdlInterSetAcrossQuan(      *(void **)(instData + 588),
       _DATA_16,       *(long*)(instData + 0),       _DATA_7__flow_584,      _V_Static_DATA_7__600   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 620),
       *(long*)(instData + 20),       *(long*)(instData + 0),       _DATA_6__flow_616,      _V_Static_DATA_6__632   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 652),
       *(long*)(instData + 24),       *(long*)(instData + 0),       _DATA_5__flow_648,      _V_Static_DATA_5__664   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 684),
       *(long*)(instData + 28),       *(long*)(instData + 0),       _DATA_4__flow_680,      _V_Static_DATA_4__696   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 716),
       *(long*)(instData + 32),       *(long*)(instData + 0),       _DATA_3__flow_712,      _V_Static_DATA_3__728   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 748),
       *(long*)(instData + 36),       *(long*)(instData + 0),       _DATA_2__flow_744,      _V_Static_DATA_2__760   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 780),
       *(long*)(instData + 40),       *(long*)(instData + 0),       _DATA_1__flow_776,      _V_Static_DATA_1__792   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 812),
       *(long*)(instData + 44),       *(long*)(instData + 0),       _DATA_0__flow_808,      _V_Static_DATA_0__824   ,       1.0    );
    return __msgSeverity__;
} /** end of daisySimAdcTherm_DcFuncDerLoad **/

int daisySimAdcTherm_DcFuncLoad(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;
double	__tmpStkVar_1 = 0.0;


/*  Pre-Anal Load Code. */memcpy ((void *) (instData + 312), (void *) (instData + 440), 128);
_V_Static_DATA_7__600 = 0.0;
_V_Static_DATA_6__632 = 0.0;
_V_Static_DATA_5__664 = 0.0;
_V_Static_DATA_4__696 = 0.0;
_V_Static_DATA_3__728 = 0.0;
_V_Static_DATA_2__760 = 0.0;
_V_Static_DATA_1__792 = 0.0;
_V_Static_DATA_0__824 = 0.0;

/*  C Code Every Code. */{ahdlDoSetLineNum ((long) 23);ahdlDoSetLineNum ((long) 23);(_vtrans_clk_240) = ((__FLOAT_DIV((_vLogicHigh_96), ((2.00000000000000000000e+00)))));ahdlDoSetLineNum ((long) 24);(_vLogicLow_200) = ((0.00000000000000000000e+00));ahdlDoSetLineNum ((long) 25);(_vref_280) = __INT_TO_DBL((1L));ahdlDoSetLineNum ((long) 26);(_halfref_160) = ((__FLOAT_DIV((_vref_280), __INT_TO_DBL((2L)))));ahdlDoSetLineNum ((long) 30);(_unconverted_120) = ((getAcrossSolution1(_vin_52)));ahdlDoSetLineNum ((long) 31);for (_i_572 = (7L); (((_i_572)) >= ((0L))); _i_572 = (((_i_572) - ((1L))))){{ahdlDoSetLineNum ((long) 32);ahdlDoSetLineNum ((long) 32);(_vd_312((_i_572))) = __INT_TO_DBL((0L));if (((_unconverted_120) > __INT_TO_DBL((((_i_572) + ((1L))))))){{ahdlDoSetLineNum ((long) 34);ahdlDoSetLineNum ((long) 34);(_vd_312((_i_572))) = (_vLogicHigh_96);}}else{{ahdlDoSetLineNum ((long) 36);ahdlDoSetLineNum ((long) 36);(_vd_312((_i_572))) = (_vLogicLow_200);}}}}ahdlDoSetLineNum ((long) 41);if (0 /* Cross Event not valid in DC mode. */){{ahdlDoSetLineNum ((long) 42);ahdlDoSetLineNum ((long) 42);(_unconverted_120) = ((getAcrossSolution1(_vin_52)));ahdlDoSetLineNum ((long) 43);for (_i_572 = (7L); (((_i_572)) >= ((0L))); _i_572 = (((_i_572) - ((1L))))){{ahdlDoSetLineNum ((long) 44);ahdlDoSetLineNum ((long) 44);(_vd_312((_i_572))) = __INT_TO_DBL((0L));if (((_unconverted_120) > __INT_TO_DBL((((_i_572) + ((1L))))))){{ahdlDoSetLineNum ((long) 46);ahdlDoSetLineNum ((long) 46);(_vd_312((_i_572))) = (_vLogicHigh_96);}}else{{ahdlDoSetLineNum ((long) 48);ahdlDoSetLineNum ((long) 48);(_vd_312((_i_572))) = (_vLogicLow_200);}}}}}}ahdlDoSetLineNum ((long) 65);(_V_Static_DATA_7__600) += (_vd_312((7L)));ahdlDoSetLineNum ((long) 66);(_V_Static_DATA_6__632) += (_vd_312((6L)));ahdlDoSetLineNum ((long) 67);(_V_Static_DATA_5__664) += (_vd_312((5L)));ahdlDoSetLineNum ((long) 68);(_V_Static_DATA_4__696) += (_vd_312((4L)));ahdlDoSetLineNum ((long) 69);(_V_Static_DATA_3__728) += (_vd_312((3L)));ahdlDoSetLineNum ((long) 70);(_V_Static_DATA_2__760) += (_vd_312((2L)));ahdlDoSetLineNum ((long) 71);(_V_Static_DATA_1__792) += (_vd_312((1L)));ahdlDoSetLineNum ((long) 72);(_V_Static_DATA_0__824) += (_vd_312((0L)));}ahdlDoSetLineNum ((long) 77);    ahdlInterSetAcrossQuan(      *(void **)(instData + 588),
       _DATA_16,       *(long*)(instData + 0),       _DATA_7__flow_584,      _V_Static_DATA_7__600   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 620),
       *(long*)(instData + 20),       *(long*)(instData + 0),       _DATA_6__flow_616,      _V_Static_DATA_6__632   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 652),
       *(long*)(instData + 24),       *(long*)(instData + 0),       _DATA_5__flow_648,      _V_Static_DATA_5__664   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 684),
       *(long*)(instData + 28),       *(long*)(instData + 0),       _DATA_4__flow_680,      _V_Static_DATA_4__696   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 716),
       *(long*)(instData + 32),       *(long*)(instData + 0),       _DATA_3__flow_712,      _V_Static_DATA_3__728   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 748),
       *(long*)(instData + 36),       *(long*)(instData + 0),       _DATA_2__flow_744,      _V_Static_DATA_2__760   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 780),
       *(long*)(instData + 40),       *(long*)(instData + 0),       _DATA_1__flow_776,      _V_Static_DATA_1__792   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 812),
       *(long*)(instData + 44),       *(long*)(instData + 0),       _DATA_0__flow_808,      _V_Static_DATA_0__824   ,       1.0    );
    return __msgSeverity__;
} /** end of daisySimAdcTherm_DcFuncLoad **/

int daisySimAdcTherm_TranFuncDerLoad(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;
double	__tmpStkVar_1 = 0.0;


/*  Pre-Anal Load Code. */memcpy ((void *) (instData + 312), (void *) (instData + 440), 128);
_V_Static_DATA_7__600 = 0.0;
_V_Static_DATA_6__632 = 0.0;
_V_Static_DATA_5__664 = 0.0;
_V_Static_DATA_4__696 = 0.0;
_V_Static_DATA_3__728 = 0.0;
_V_Static_DATA_2__760 = 0.0;
_V_Static_DATA_1__792 = 0.0;
_V_Static_DATA_0__824 = 0.0;

/*  C Code Every Code. */{ahdlDoSetLineNum ((long) 23);ahdlDoSetLineNum ((long) 23);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((__FLOAT_DIV((_vLogicHigh_96), ((2.00000000000000000000e+00)))));(_vtrans_clk_240) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 24);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((0.00000000000000000000e+00));(_vLogicLow_200) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 25);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = __INT_TO_DBL((1L));(_vref_280) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 26);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((__FLOAT_DIV((_vref_280), __INT_TO_DBL((2L)))));(_halfref_160) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 30);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((getAcrossSolution1(_vin_52)));__tmpStkVar_1 = ((1.00000000000000000000e+00));(_unconverted_120) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 31);for (_i_572 = (7L); (((_i_572)) >= ((0L))); _i_572 = (((_i_572) - ((1L))))){{ahdlDoSetLineNum ((long) 32);ahdlDoSetLineNum ((long) 32);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = __INT_TO_DBL((0L));(_vd_312((_i_572))) = __tempValueResultStatic;}if (((_unconverted_120) > __INT_TO_DBL((((_i_572) + ((1L))))))){{ahdlDoSetLineNum ((long) 34);ahdlDoSetLineNum ((long) 34);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = (_vLogicHigh_96);(_vd_312((_i_572))) = __tempValueResultStatic;}}}else{{ahdlDoSetLineNum ((long) 36);ahdlDoSetLineNum ((long) 36);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = (_vLogicLow_200);(_vd_312((_i_572))) = __tempValueResultStatic;}}}}}ahdlDoSetLineNum ((long) 41);if (ahdlIsCrossEvent (*(void **) (instData + 580), ((((getAcrossSolution1(_vclk_60))) - (_vtrans_clk_240))), (1L), -1, -1)){{ahdlDoSetLineNum ((long) 42);ahdlDoSetLineNum ((long) 42);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = ((getAcrossSolution1(_vin_52)));__tmpStkVar_1 = ((1.00000000000000000000e+00));(_unconverted_120) = __tempValueResultStatic;}ahdlDoSetLineNum ((long) 43);for (_i_572 = (7L); (((_i_572)) >= ((0L))); _i_572 = (((_i_572) - ((1L))))){{ahdlDoSetLineNum ((long) 44);ahdlDoSetLineNum ((long) 44);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = __INT_TO_DBL((0L));(_vd_312((_i_572))) = __tempValueResultStatic;}if (((_unconverted_120) > __INT_TO_DBL((((_i_572) + ((1L))))))){{ahdlDoSetLineNum ((long) 46);ahdlDoSetLineNum ((long) 46);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = (_vLogicHigh_96);(_vd_312((_i_572))) = __tempValueResultStatic;}}}else{{ahdlDoSetLineNum ((long) 48);ahdlDoSetLineNum ((long) 48);{double __tempValueResultStatic;double __tempValueResultDynamic;
__tempValueResultStatic = (_vLogicLow_200);(_vd_312((_i_572))) = __tempValueResultStatic;}}}}}}}ahdlDoSetLineNum ((long) 65);(_V_Static_DATA_7__600) += (_vd_312((7L)));ahdlDoSetLineNum ((long) 66);(_V_Static_DATA_6__632) += (_vd_312((6L)));ahdlDoSetLineNum ((long) 67);(_V_Static_DATA_5__664) += (_vd_312((5L)));ahdlDoSetLineNum ((long) 68);(_V_Static_DATA_4__696) += (_vd_312((4L)));ahdlDoSetLineNum ((long) 69);(_V_Static_DATA_3__728) += (_vd_312((3L)));ahdlDoSetLineNum ((long) 70);(_V_Static_DATA_2__760) += (_vd_312((2L)));ahdlDoSetLineNum ((long) 71);(_V_Static_DATA_1__792) += (_vd_312((1L)));ahdlDoSetLineNum ((long) 72);(_V_Static_DATA_0__824) += (_vd_312((0L)));}ahdlDoSetLineNum ((long) 77);    ahdlInterSetAcrossQuan(      *(void **)(instData + 588),
       _DATA_16,       *(long*)(instData + 0),       _DATA_7__flow_584,      _V_Static_DATA_7__600   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 620),
       *(long*)(instData + 20),       *(long*)(instData + 0),       _DATA_6__flow_616,      _V_Static_DATA_6__632   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 652),
       *(long*)(instData + 24),       *(long*)(instData + 0),       _DATA_5__flow_648,      _V_Static_DATA_5__664   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 684),
       *(long*)(instData + 28),       *(long*)(instData + 0),       _DATA_4__flow_680,      _V_Static_DATA_4__696   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 716),
       *(long*)(instData + 32),       *(long*)(instData + 0),       _DATA_3__flow_712,      _V_Static_DATA_3__728   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 748),
       *(long*)(instData + 36),       *(long*)(instData + 0),       _DATA_2__flow_744,      _V_Static_DATA_2__760   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 780),
       *(long*)(instData + 40),       *(long*)(instData + 0),       _DATA_1__flow_776,      _V_Static_DATA_1__792   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 812),
       *(long*)(instData + 44),       *(long*)(instData + 0),       _DATA_0__flow_808,      _V_Static_DATA_0__824   ,       1.0    );
    return __msgSeverity__;
} /** end of daisySimAdcTherm_TranFuncDerLoad **/

int daisySimAdcTherm_TranFuncLoad(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;
double	__tmpStkVar_1 = 0.0;


/*  Pre-Anal Load Code. */memcpy ((void *) (instData + 312), (void *) (instData + 440), 128);
_V_Static_DATA_7__600 = 0.0;
_V_Static_DATA_6__632 = 0.0;
_V_Static_DATA_5__664 = 0.0;
_V_Static_DATA_4__696 = 0.0;
_V_Static_DATA_3__728 = 0.0;
_V_Static_DATA_2__760 = 0.0;
_V_Static_DATA_1__792 = 0.0;
_V_Static_DATA_0__824 = 0.0;

/*  C Code Every Code. */{ahdlDoSetLineNum ((long) 23);ahdlDoSetLineNum ((long) 23);(_vtrans_clk_240) = ((__FLOAT_DIV((_vLogicHigh_96), ((2.00000000000000000000e+00)))));ahdlDoSetLineNum ((long) 24);(_vLogicLow_200) = ((0.00000000000000000000e+00));ahdlDoSetLineNum ((long) 25);(_vref_280) = __INT_TO_DBL((1L));ahdlDoSetLineNum ((long) 26);(_halfref_160) = ((__FLOAT_DIV((_vref_280), __INT_TO_DBL((2L)))));ahdlDoSetLineNum ((long) 30);(_unconverted_120) = ((getAcrossSolution1(_vin_52)));ahdlDoSetLineNum ((long) 31);for (_i_572 = (7L); (((_i_572)) >= ((0L))); _i_572 = (((_i_572) - ((1L))))){{ahdlDoSetLineNum ((long) 32);ahdlDoSetLineNum ((long) 32);(_vd_312((_i_572))) = __INT_TO_DBL((0L));if (((_unconverted_120) > __INT_TO_DBL((((_i_572) + ((1L))))))){{ahdlDoSetLineNum ((long) 34);ahdlDoSetLineNum ((long) 34);(_vd_312((_i_572))) = (_vLogicHigh_96);}}else{{ahdlDoSetLineNum ((long) 36);ahdlDoSetLineNum ((long) 36);(_vd_312((_i_572))) = (_vLogicLow_200);}}}}ahdlDoSetLineNum ((long) 41);if (ahdlIsCrossEvent (*(void **) (instData + 580), ((((getAcrossSolution1(_vclk_60))) - (_vtrans_clk_240))), (1L), -1, -1)){{ahdlDoSetLineNum ((long) 42);ahdlDoSetLineNum ((long) 42);(_unconverted_120) = ((getAcrossSolution1(_vin_52)));ahdlDoSetLineNum ((long) 43);for (_i_572 = (7L); (((_i_572)) >= ((0L))); _i_572 = (((_i_572) - ((1L))))){{ahdlDoSetLineNum ((long) 44);ahdlDoSetLineNum ((long) 44);(_vd_312((_i_572))) = __INT_TO_DBL((0L));if (((_unconverted_120) > __INT_TO_DBL((((_i_572) + ((1L))))))){{ahdlDoSetLineNum ((long) 46);ahdlDoSetLineNum ((long) 46);(_vd_312((_i_572))) = (_vLogicHigh_96);}}else{{ahdlDoSetLineNum ((long) 48);ahdlDoSetLineNum ((long) 48);(_vd_312((_i_572))) = (_vLogicLow_200);}}}}}}ahdlDoSetLineNum ((long) 65);(_V_Static_DATA_7__600) += (_vd_312((7L)));ahdlDoSetLineNum ((long) 66);(_V_Static_DATA_6__632) += (_vd_312((6L)));ahdlDoSetLineNum ((long) 67);(_V_Static_DATA_5__664) += (_vd_312((5L)));ahdlDoSetLineNum ((long) 68);(_V_Static_DATA_4__696) += (_vd_312((4L)));ahdlDoSetLineNum ((long) 69);(_V_Static_DATA_3__728) += (_vd_312((3L)));ahdlDoSetLineNum ((long) 70);(_V_Static_DATA_2__760) += (_vd_312((2L)));ahdlDoSetLineNum ((long) 71);(_V_Static_DATA_1__792) += (_vd_312((1L)));ahdlDoSetLineNum ((long) 72);(_V_Static_DATA_0__824) += (_vd_312((0L)));}ahdlDoSetLineNum ((long) 77);    ahdlInterSetAcrossQuan(      *(void **)(instData + 588),
       _DATA_16,       *(long*)(instData + 0),       _DATA_7__flow_584,      _V_Static_DATA_7__600   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 620),
       *(long*)(instData + 20),       *(long*)(instData + 0),       _DATA_6__flow_616,      _V_Static_DATA_6__632   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 652),
       *(long*)(instData + 24),       *(long*)(instData + 0),       _DATA_5__flow_648,      _V_Static_DATA_5__664   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 684),
       *(long*)(instData + 28),       *(long*)(instData + 0),       _DATA_4__flow_680,      _V_Static_DATA_4__696   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 716),
       *(long*)(instData + 32),       *(long*)(instData + 0),       _DATA_3__flow_712,      _V_Static_DATA_3__728   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 748),
       *(long*)(instData + 36),       *(long*)(instData + 0),       _DATA_2__flow_744,      _V_Static_DATA_2__760   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 780),
       *(long*)(instData + 40),       *(long*)(instData + 0),       _DATA_1__flow_776,      _V_Static_DATA_1__792   ,       1.0    );
    ahdlInterSetAcrossQuan(      *(void **)(instData + 812),
       *(long*)(instData + 44),       *(long*)(instData + 0),       _DATA_0__flow_808,      _V_Static_DATA_0__824   ,       1.0    );
    return __msgSeverity__;
} /** end of daisySimAdcTherm_TranFuncLoad **/

int daisySimAdcTherm_NoiseLoadBiasDep(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;
double	__tmpStkVar_1 = 0.0;


    return __msgSeverity__;
} /** end of daisySimAdcTherm_NoiseLoadBiasDep **/

int daisySimAdcTherm_OpPointCalc(int anal_mode, char* instData, char* modelData, char** stringList) {

int __msgSeverity__ = 0;
    return __msgSeverity__;
} /** end of daisySimAdcTherm_OpPointCalc **/
