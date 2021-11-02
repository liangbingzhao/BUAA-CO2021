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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Verilog_tool/p1/P1_L0_EXT/ext.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {15, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {65535U, 0U};
static int ng6[] = {31, 0};
static int ng7[] = {16, 0};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};
static int ng11[] = {17, 0};
static int ng12[] = {2, 0};



static void Initial_26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(26, ng0);

LAB2:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_29_1(char *t0)
{
    char t9[8];
    char t14[8];
    char t38[8];
    char t39[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    int t48;
    char *t49;
    unsigned int t50;
    int t51;
    int t52;
    char *t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;

LAB0:    t1 = (t0 + 1588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1784);
    *((int *)t2) = 1;
    t3 = (t0 + 1616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(47, ng0);

LAB41:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB17:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 576U);
    t10 = (t7 + 44U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t8, t11, 2, t12, 32, 1);
    t13 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t15 = (t9 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB21;

LAB18:    if (t26 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t14) = 1;

LAB21:    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB16;

LAB8:    xsi_set_current_line(37, ng0);

LAB30:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 920);
    t7 = (t0 + 920);
    t8 = (t7 + 44U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng3)));
    t12 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t9, t14, t38, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t9 + 4);
    t17 = *((unsigned int *)t13);
    t48 = (!(t17));
    t15 = (t14 + 4);
    t18 = *((unsigned int *)t15);
    t51 = (!(t18));
    t52 = (t48 && t51);
    t16 = (t38 + 4);
    t19 = *((unsigned int *)t16);
    t55 = (!(t19));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB31;

LAB32:    goto LAB16;

LAB10:    xsi_set_current_line(40, ng0);

LAB33:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 920);
    t7 = (t0 + 920);
    t8 = (t7 + 44U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng6)));
    t12 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t14, t38, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t9 + 4);
    t17 = *((unsigned int *)t13);
    t48 = (!(t17));
    t15 = (t14 + 4);
    t18 = *((unsigned int *)t15);
    t51 = (!(t18));
    t52 = (t48 && t51);
    t16 = (t38 + 4);
    t19 = *((unsigned int *)t16);
    t55 = (!(t19));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB34;

LAB35:    goto LAB16;

LAB12:    xsi_set_current_line(43, ng0);

LAB36:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 920);
    t7 = (t0 + 920);
    t8 = (t7 + 44U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng6)));
    t12 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t9, t14, t38, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t13 = (t9 + 4);
    t17 = *((unsigned int *)t13);
    t48 = (!(t17));
    t15 = (t14 + 4);
    t18 = *((unsigned int *)t15);
    t51 = (!(t18));
    t52 = (t48 && t51);
    t16 = (t38 + 4);
    t19 = *((unsigned int *)t16);
    t55 = (!(t19));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 920);
    t4 = (t0 + 920);
    t7 = (t4 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng11)));
    t11 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t9, t14, t38, ((int*)(t8)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t9 + 4);
    t17 = *((unsigned int *)t12);
    t6 = (!(t17));
    t13 = (t14 + 4);
    t18 = *((unsigned int *)t13);
    t48 = (!(t18));
    t51 = (t6 && t48);
    t15 = (t38 + 4);
    t19 = *((unsigned int *)t15);
    t52 = (!(t19));
    t55 = (t51 && t52);
    if (t55 == 1)
        goto LAB39;

LAB40:    goto LAB16;

LAB20:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(32, ng0);

LAB25:    xsi_set_current_line(33, ng0);
    t36 = ((char*)((ng5)));
    t37 = (t0 + 920);
    t41 = (t0 + 920);
    t42 = (t41 + 44U);
    t43 = *((char **)t42);
    t44 = ((char*)((ng6)));
    t45 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t38, t39, t40, ((int*)(t43)), 2, t44, 32, 1, t45, 32, 1);
    t46 = (t38 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (!(t47));
    t49 = (t39 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    t53 = (t40 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (!(t54));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 920);
    t4 = (t0 + 920);
    t7 = (t4 + 44U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t9, t14, t38, ((int*)(t8)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t9 + 4);
    t17 = *((unsigned int *)t12);
    t6 = (!(t17));
    t13 = (t14 + 4);
    t18 = *((unsigned int *)t13);
    t48 = (!(t18));
    t51 = (t6 && t48);
    t15 = (t38 + 4);
    t19 = *((unsigned int *)t15);
    t52 = (!(t19));
    t55 = (t51 && t52);
    if (t55 == 1)
        goto LAB28;

LAB29:    goto LAB24;

LAB26:    t57 = *((unsigned int *)t40);
    t58 = (t57 + 0);
    t59 = *((unsigned int *)t38);
    t60 = *((unsigned int *)t39);
    t61 = (t59 - t60);
    t62 = (t61 + 1);
    xsi_vlogvar_assign_value(t37, t36, t58, *((unsigned int *)t39), t62);
    goto LAB27;

LAB28:    t20 = *((unsigned int *)t38);
    t56 = (t20 + 0);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t14);
    t58 = (t21 - t22);
    t61 = (t58 + 1);
    xsi_vlogvar_assign_value(t2, t3, t56, *((unsigned int *)t14), t61);
    goto LAB29;

LAB31:    t20 = *((unsigned int *)t38);
    t58 = (t20 + 0);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t14);
    t61 = (t21 - t22);
    t62 = (t61 + 1);
    xsi_vlogvar_assign_value(t3, t4, t58, *((unsigned int *)t14), t62);
    goto LAB32;

LAB34:    t20 = *((unsigned int *)t38);
    t58 = (t20 + 0);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t14);
    t61 = (t21 - t22);
    t62 = (t61 + 1);
    xsi_vlogvar_assign_value(t3, t4, t58, *((unsigned int *)t14), t62);
    goto LAB35;

LAB37:    t20 = *((unsigned int *)t38);
    t58 = (t20 + 0);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t14);
    t61 = (t21 - t22);
    t62 = (t61 + 1);
    xsi_vlogvar_assign_value(t4, t3, t58, *((unsigned int *)t14), t62);
    goto LAB38;

LAB39:    t20 = *((unsigned int *)t38);
    t56 = (t20 + 0);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t14);
    t58 = (t21 - t22);
    t61 = (t58 + 1);
    xsi_vlogvar_assign_value(t2, t3, t56, *((unsigned int *)t14), t61);
    goto LAB40;

}


extern void work_m_00000000000178114438_4241813833_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Always_29_1};
	xsi_register_didat("work_m_00000000000178114438_4241813833", "isim/test_isim_beh.exe.sim/work/m_00000000000178114438_4241813833.didat");
	xsi_register_executes(pe);
}
