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
static const char *ng0 = "E:/Verilog_tool/p1/P1_Q1/qiou.v";
static int ng1[] = {0, 0};
static int ng2[] = {31, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};



static void Always_31_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t24[8];
    char t43[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2008);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 8, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB22:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t26 = (t11 ^ t12);
    t27 = (t10 | t26);
    t28 = *((unsigned int *)t4);
    t29 = *((unsigned int *)t5);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB26;

LAB23:    if (t30 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t6) = 1;

LAB26:    t13 = (t6 + 4);
    t33 = *((unsigned int *)t13);
    t34 = (~(t33));
    t35 = *((unsigned int *)t6);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(47, ng0);

LAB31:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB29:
LAB11:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 2147483647U);
    t26 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t26 & 2147483647U);
    t5 = (t0 + 1288);
    t7 = (t5 + 36U);
    t13 = *((char **)t7);
    xsi_vlogtype_concat(t43, 63, 63, 2U, t13, 32, t6, 31);
    t14 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t14, t43, 0, 0, 32, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);
    t13 = (t0 + 1104);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = (t0 + 600U);
    t17 = *((char **)t16);
    t16 = (t0 + 576U);
    t19 = (t16 + 44U);
    t20 = *((char **)t19);
    t21 = (t0 + 1012);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t18, 8, t17, t20, 2, t23, 32, 1);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 8, t15, 8, t18, 8);
    t25 = (t0 + 1104);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB9:    xsi_set_current_line(35, ng0);

LAB12:    xsi_set_current_line(36, ng0);
    t13 = (t0 + 692U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t16 = (t13 + 4);
    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t13);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t15);
    t30 = *((unsigned int *)t16);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB16;

LAB13:    if (t35 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t18) = 1;

LAB16:    t19 = (t18 + 4);
    t38 = *((unsigned int *)t19);
    t39 = (~(t38));
    t40 = *((unsigned int *)t18);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(39, ng0);

LAB21:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    goto LAB11;

LAB15:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(36, ng0);

LAB20:    xsi_set_current_line(37, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 1288);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 32);
    goto LAB19;

LAB25:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(44, ng0);

LAB30:    xsi_set_current_line(45, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 1288);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB29;

}


extern void work_m_00000000001384908317_3656209114_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000001384908317_3656209114", "isim/test_isim_beh.exe.sim/work/m_00000000001384908317_3656209114.didat");
	xsi_register_executes(pe);
}
