/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static unsigned int ng0[] = {0U, 0U};
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {15, 0};
static int ng7[] = {31, 0};
static int ng8[] = {16, 0};
static unsigned int ng9[] = {12U, 0U};
static unsigned int ng10[] = {2U, 0U};
static int ng11[] = {7, 0};
static int ng12[] = {8, 0};
static int ng13[] = {2, 0};
static unsigned int ng14[] = {4U, 0U};
static int ng15[] = {23, 0};
static int ng16[] = {24, 0};
static int ng17[] = {3, 0};
static unsigned int ng18[] = {8U, 0U};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t6[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB14:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:
LAB83:    t2 = ((char*)((ng0)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:
LAB13:    t28 = ((char*)((ng0)));
    t29 = (t0 + 2248);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB12;

LAB15:
LAB18:    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB19:    t4 = ((char*)((ng0)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:
LAB82:    t2 = ((char*)((ng0)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB28:    goto LAB17;

LAB20:
LAB29:    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB28;

LAB22:
LAB30:    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1488U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t8, 2, t21, 32, 1);

LAB31:    t22 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t6, 32, t22, 32);
    if (t31 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t30 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB28;

LAB24:
LAB47:    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t32, 0, 8);
    t3 = (t32 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 3U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 3U);

LAB48:    t8 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t32, 32, t8, 32);
    if (t31 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t30 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t30 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t30 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB28;

LAB32:
LAB37:    t28 = ((char*)((ng5)));
    t29 = (t0 + 2248);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t7 = (t0 + 2088);
    t8 = (t0 + 2088);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng6)));
    t29 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t22)), 2, t28, 32, 1, t29, 32, 1);
    t36 = (t33 + 4);
    t15 = *((unsigned int *)t36);
    t30 = (!(t15));
    t37 = (t34 + 4);
    t16 = *((unsigned int *)t37);
    t31 = (!(t16));
    t38 = (t30 && t31);
    t39 = (t35 + 4);
    t17 = *((unsigned int *)t39);
    t40 = (!(t17));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng7)));
    t22 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t32, t33, t34, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t32 + 4);
    t9 = *((unsigned int *)t28);
    t30 = (!(t9));
    t29 = (t33 + 4);
    t10 = *((unsigned int *)t29);
    t31 = (!(t10));
    t38 = (t30 && t31);
    t36 = (t34 + 4);
    t11 = *((unsigned int *)t36);
    t40 = (!(t11));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB40;

LAB41:    goto LAB36;

LAB34:
LAB42:    t3 = ((char*)((ng9)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t32, 0, 8);
    t2 = (t32 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t7 = (t0 + 2088);
    t8 = (t0 + 2088);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng7)));
    t29 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t22)), 2, t28, 32, 1, t29, 32, 1);
    t36 = (t33 + 4);
    t15 = *((unsigned int *)t36);
    t30 = (!(t15));
    t37 = (t34 + 4);
    t16 = *((unsigned int *)t37);
    t31 = (!(t16));
    t38 = (t30 && t31);
    t39 = (t35 + 4);
    t17 = *((unsigned int *)t39);
    t40 = (!(t17));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng6)));
    t22 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t32, t33, t34, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t32 + 4);
    t9 = *((unsigned int *)t28);
    t30 = (!(t9));
    t29 = (t33 + 4);
    t10 = *((unsigned int *)t29);
    t31 = (!(t10));
    t38 = (t30 && t31);
    t36 = (t34 + 4);
    t11 = *((unsigned int *)t36);
    t40 = (!(t11));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB45;

LAB46:    goto LAB36;

LAB38:    t18 = *((unsigned int *)t35);
    t42 = (t18 + 0);
    t19 = *((unsigned int *)t33);
    t20 = *((unsigned int *)t34);
    t43 = (t19 - t20);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t7, t32, t42, *((unsigned int *)t34), t44);
    goto LAB39;

LAB40:    t12 = *((unsigned int *)t34);
    t42 = (t12 + 0);
    t13 = *((unsigned int *)t32);
    t14 = *((unsigned int *)t33);
    t43 = (t13 - t14);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t3, t2, t42, *((unsigned int *)t33), t44);
    goto LAB41;

LAB43:    t18 = *((unsigned int *)t35);
    t42 = (t18 + 0);
    t19 = *((unsigned int *)t33);
    t20 = *((unsigned int *)t34);
    t43 = (t19 - t20);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t7, t32, t42, *((unsigned int *)t34), t44);
    goto LAB44;

LAB45:    t12 = *((unsigned int *)t34);
    t42 = (t12 + 0);
    t13 = *((unsigned int *)t32);
    t14 = *((unsigned int *)t33);
    t43 = (t13 - t14);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t3, t2, t42, *((unsigned int *)t33), t44);
    goto LAB46;

LAB49:
LAB58:    t21 = ((char*)((ng4)));
    t22 = (t0 + 2248);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t33, 0, 8);
    t2 = (t33 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t7 = (t0 + 2088);
    t8 = (t0 + 2088);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng11)));
    t29 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t34, t35, t45, ((int*)(t22)), 2, t28, 32, 1, t29, 32, 1);
    t36 = (t34 + 4);
    t15 = *((unsigned int *)t36);
    t30 = (!(t15));
    t37 = (t35 + 4);
    t16 = *((unsigned int *)t37);
    t31 = (!(t16));
    t38 = (t30 && t31);
    t39 = (t45 + 4);
    t17 = *((unsigned int *)t39);
    t40 = (!(t17));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng7)));
    t22 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t33 + 4);
    t9 = *((unsigned int *)t28);
    t30 = (!(t9));
    t29 = (t34 + 4);
    t10 = *((unsigned int *)t29);
    t31 = (!(t10));
    t38 = (t30 && t31);
    t36 = (t35 + 4);
    t11 = *((unsigned int *)t36);
    t40 = (!(t11));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB61;

LAB62:    goto LAB57;

LAB51:
LAB63:    t3 = ((char*)((ng10)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t33, 0, 8);
    t2 = (t33 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t7 = (t0 + 2088);
    t8 = (t0 + 2088);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng6)));
    t29 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t34, t35, t45, ((int*)(t22)), 2, t28, 32, 1, t29, 32, 1);
    t36 = (t34 + 4);
    t15 = *((unsigned int *)t36);
    t30 = (!(t15));
    t37 = (t35 + 4);
    t16 = *((unsigned int *)t37);
    t31 = (!(t16));
    t38 = (t30 && t31);
    t39 = (t45 + 4);
    t17 = *((unsigned int *)t39);
    t40 = (!(t17));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng7)));
    t22 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t33 + 4);
    t9 = *((unsigned int *)t28);
    t30 = (!(t9));
    t29 = (t34 + 4);
    t10 = *((unsigned int *)t29);
    t31 = (!(t10));
    t38 = (t30 && t31);
    t36 = (t35 + 4);
    t11 = *((unsigned int *)t36);
    t40 = (!(t11));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng11)));
    t22 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t33 + 4);
    t9 = *((unsigned int *)t28);
    t30 = (!(t9));
    t29 = (t34 + 4);
    t10 = *((unsigned int *)t29);
    t31 = (!(t10));
    t38 = (t30 && t31);
    t36 = (t35 + 4);
    t11 = *((unsigned int *)t36);
    t40 = (!(t11));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB68;

LAB69:    goto LAB57;

LAB53:
LAB70:    t3 = ((char*)((ng14)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t33, 0, 8);
    t2 = (t33 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t7 = (t0 + 2088);
    t8 = (t0 + 2088);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng15)));
    t29 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t34, t35, t45, ((int*)(t22)), 2, t28, 32, 1, t29, 32, 1);
    t36 = (t34 + 4);
    t15 = *((unsigned int *)t36);
    t30 = (!(t15));
    t37 = (t35 + 4);
    t16 = *((unsigned int *)t37);
    t31 = (!(t16));
    t38 = (t30 && t31);
    t39 = (t45 + 4);
    t17 = *((unsigned int *)t39);
    t40 = (!(t17));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng7)));
    t22 = ((char*)((ng16)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t33 + 4);
    t9 = *((unsigned int *)t28);
    t30 = (!(t9));
    t29 = (t34 + 4);
    t10 = *((unsigned int *)t29);
    t31 = (!(t10));
    t38 = (t30 && t31);
    t36 = (t35 + 4);
    t11 = *((unsigned int *)t36);
    t40 = (!(t11));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng6)));
    t22 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t33 + 4);
    t9 = *((unsigned int *)t28);
    t30 = (!(t9));
    t29 = (t34 + 4);
    t10 = *((unsigned int *)t29);
    t31 = (!(t10));
    t38 = (t30 && t31);
    t36 = (t35 + 4);
    t11 = *((unsigned int *)t36);
    t40 = (!(t11));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB75;

LAB76:    goto LAB57;

LAB55:
LAB77:    t3 = ((char*)((ng18)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t33, 0, 8);
    t2 = (t33 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t33) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t7 = (t0 + 2088);
    t8 = (t0 + 2088);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng7)));
    t29 = ((char*)((ng16)));
    xsi_vlog_convert_partindices(t34, t35, t45, ((int*)(t22)), 2, t28, 32, 1, t29, 32, 1);
    t36 = (t34 + 4);
    t15 = *((unsigned int *)t36);
    t30 = (!(t15));
    t37 = (t35 + 4);
    t16 = *((unsigned int *)t37);
    t31 = (!(t16));
    t38 = (t30 && t31);
    t39 = (t45 + 4);
    t17 = *((unsigned int *)t39);
    t40 = (!(t17));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng15)));
    t22 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t33 + 4);
    t9 = *((unsigned int *)t28);
    t30 = (!(t9));
    t29 = (t34 + 4);
    t10 = *((unsigned int *)t29);
    t31 = (!(t10));
    t38 = (t30 && t31);
    t36 = (t35 + 4);
    t11 = *((unsigned int *)t36);
    t40 = (!(t11));
    t41 = (t38 && t40);
    if (t41 == 1)
        goto LAB80;

LAB81:    goto LAB57;

LAB59:    t18 = *((unsigned int *)t45);
    t42 = (t18 + 0);
    t19 = *((unsigned int *)t34);
    t20 = *((unsigned int *)t35);
    t43 = (t19 - t20);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t7, t33, t42, *((unsigned int *)t35), t44);
    goto LAB60;

LAB61:    t12 = *((unsigned int *)t35);
    t42 = (t12 + 0);
    t13 = *((unsigned int *)t33);
    t14 = *((unsigned int *)t34);
    t43 = (t13 - t14);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t3, t2, t42, *((unsigned int *)t34), t44);
    goto LAB62;

LAB64:    t18 = *((unsigned int *)t45);
    t42 = (t18 + 0);
    t19 = *((unsigned int *)t34);
    t20 = *((unsigned int *)t35);
    t43 = (t19 - t20);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t7, t33, t42, *((unsigned int *)t35), t44);
    goto LAB65;

LAB66:    t12 = *((unsigned int *)t35);
    t42 = (t12 + 0);
    t13 = *((unsigned int *)t33);
    t14 = *((unsigned int *)t34);
    t43 = (t13 - t14);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t3, t2, t42, *((unsigned int *)t34), t44);
    goto LAB67;

LAB68:    t12 = *((unsigned int *)t35);
    t42 = (t12 + 0);
    t13 = *((unsigned int *)t33);
    t14 = *((unsigned int *)t34);
    t43 = (t13 - t14);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t3, t2, t42, *((unsigned int *)t34), t44);
    goto LAB69;

LAB71:    t18 = *((unsigned int *)t45);
    t42 = (t18 + 0);
    t19 = *((unsigned int *)t34);
    t20 = *((unsigned int *)t35);
    t43 = (t19 - t20);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t7, t33, t42, *((unsigned int *)t35), t44);
    goto LAB72;

LAB73:    t12 = *((unsigned int *)t35);
    t42 = (t12 + 0);
    t13 = *((unsigned int *)t33);
    t14 = *((unsigned int *)t34);
    t43 = (t13 - t14);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t3, t2, t42, *((unsigned int *)t34), t44);
    goto LAB74;

LAB75:    t12 = *((unsigned int *)t35);
    t42 = (t12 + 0);
    t13 = *((unsigned int *)t33);
    t14 = *((unsigned int *)t34);
    t43 = (t13 - t14);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t3, t2, t42, *((unsigned int *)t34), t44);
    goto LAB76;

LAB78:    t18 = *((unsigned int *)t45);
    t42 = (t18 + 0);
    t19 = *((unsigned int *)t34);
    t20 = *((unsigned int *)t35);
    t43 = (t19 - t20);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t7, t33, t42, *((unsigned int *)t35), t44);
    goto LAB79;

LAB80:    t12 = *((unsigned int *)t35);
    t42 = (t12 + 0);
    t13 = *((unsigned int *)t33);
    t14 = *((unsigned int *)t34);
    t43 = (t13 - t14);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t3, t2, t42, *((unsigned int *)t34), t44);
    goto LAB81;

}


extern void work_m_00000000001982363470_0672149134_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_42_1};
	xsi_register_didat("work_m_00000000001982363470_0672149134", "isim/testX.exe.sim/work/m_00000000001982363470_0672149134.didat");
	xsi_register_executes(pe);
}
