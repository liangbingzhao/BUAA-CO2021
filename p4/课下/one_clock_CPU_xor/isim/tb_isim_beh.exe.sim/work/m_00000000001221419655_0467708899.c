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
static const char *ng0 = "E:/Verilog_tool/p4plus/one_clock_CPU/IM.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {10, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static const char *ng6 = "code.txt";



static void Initial_29_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_power(t6, 32, t4, 32, t5, 32, 1);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t3, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1608);
    xsi_vlogfile_readmemh(ng6, 0, t1, 0, 0, 0, 0);

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB6:    xsi_set_current_line(31, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 1608);
    t18 = (t0 + 1608);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1608);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 1768);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

}

static void Cont_36_1(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1608);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 1023U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 10, 2);
    t22 = (t0 + 3336);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 3256);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000001221419655_0467708899_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Cont_36_1};
	xsi_register_didat("work_m_00000000001221419655_0467708899", "isim/tb_isim_beh.exe.sim/work/m_00000000001221419655_0467708899.didat");
	xsi_register_executes(pe);
}
