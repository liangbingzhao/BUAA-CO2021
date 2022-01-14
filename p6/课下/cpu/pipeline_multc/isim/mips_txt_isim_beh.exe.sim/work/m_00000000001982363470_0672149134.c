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
static const char *ng0 = "E:/Verilog_tool/p6plus/pipeline/en_byte.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {12U, 0U};
static int ng8[] = {16, 0};
static unsigned int ng9[] = {2U, 0U};
static int ng10[] = {8, 0};
static int ng11[] = {2, 0};
static unsigned int ng12[] = {4U, 0U};
static int ng13[] = {3, 0};
static unsigned int ng14[] = {8U, 0U};
static int ng15[] = {24, 0};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t6[8];
    char t32[8];
    char t33[8];
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

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(47, ng0);

LAB14:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(92, ng0);

LAB55:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2248);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB12;

LAB15:    xsi_set_current_line(48, ng0);

LAB18:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB19:    t4 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(86, ng0);

LAB54:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB28:    goto LAB17;

LAB20:    xsi_set_current_line(50, ng0);

LAB29:    xsi_set_current_line(51, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB28;

LAB22:    xsi_set_current_line(54, ng0);

LAB30:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1488U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t8, 2, t21, 32, 1);

LAB31:    t22 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t6, 32, t22, 32);
    if (t31 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t30 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB28;

LAB24:    xsi_set_current_line(66, ng0);

LAB39:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1528U);
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

LAB40:    t8 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t32, 32, t8, 32);
    if (t31 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t30 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t30 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t32, 32, t2, 32);
    if (t30 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB28;

LAB32:    xsi_set_current_line(56, ng0);

LAB37:    xsi_set_current_line(57, ng0);
    t28 = ((char*)((ng6)));
    t29 = (t0 + 2248);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB36;

LAB34:    xsi_set_current_line(60, ng0);

LAB38:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_lshift(t32, 32, t3, 32, t2, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t32, 0, 0, 32);
    goto LAB36;

LAB41:    xsi_set_current_line(68, ng0);

LAB50:    xsi_set_current_line(69, ng0);
    t21 = ((char*)((ng5)));
    t22 = (t0 + 2248);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB49;

LAB43:    xsi_set_current_line(72, ng0);

LAB51:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_lshift(t33, 32, t3, 32, t2, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t33, 0, 0, 32);
    goto LAB49;

LAB45:    xsi_set_current_line(76, ng0);

LAB52:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_lshift(t33, 32, t3, 32, t2, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t33, 0, 0, 32);
    goto LAB49;

LAB47:    xsi_set_current_line(80, ng0);

LAB53:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_lshift(t33, 32, t3, 32, t2, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t33, 0, 0, 32);
    goto LAB49;

}


extern void work_m_00000000001982363470_0672149134_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_42_1};
	xsi_register_didat("work_m_00000000001982363470_0672149134", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001982363470_0672149134.didat");
	xsi_register_executes(pe);
}
