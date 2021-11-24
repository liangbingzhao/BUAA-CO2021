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
static const char *ng0 = "E:/Verilog_tool/p4/one_clock_CPU_BLR/datapath.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {32, 0};
static unsigned int ng4[] = {31U, 0U};



static void Always_104_0(char *t0)
{
    char t7[8];
    char t16[8];
    char t19[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    int t35;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5372);
    *((int *)t2) = 1;
    t3 = (t0 + 5060);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4508);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 4508);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3268U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB8;

LAB7:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB9;

LAB10:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(108, ng0);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3268U);
    t3 = *((char **)t2);
    memcpy(t7, t3, 8);
    t2 = (t0 + 4508);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);

LAB17:    t2 = (t0 + 4508);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t5, 32);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB18;

LAB19:    goto LAB2;

LAB8:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t7) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(105, ng0);

LAB14:    xsi_set_current_line(106, ng0);
    t17 = (t0 + 2072U);
    t18 = *((char **)t17);
    t17 = (t0 + 2048U);
    t20 = (t17 + 44U);
    t21 = *((char **)t20);
    t22 = (t0 + 4508);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_index_select_value(t19, 1, t18, t21, 2, t24, 32, 1);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_unary_minus(t16, 1, t19, 1);
    t25 = (t0 + 4416);
    t27 = (t0 + 4416);
    t28 = (t27 + 44U);
    t29 = *((char **)t28);
    t30 = (t0 + 4508);
    t31 = (t30 + 36U);
    t32 = *((char **)t31);
    xsi_vlog_generic_convert_bit_index(t26, t29, 2, t32, 32, 1);
    t33 = (t26 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    if (t35 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4508);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 4508);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB15:    xsi_vlogvar_wait_assign_value(t25, t16, 0, *((unsigned int *)t26), 1, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(108, ng0);

LAB20:    xsi_set_current_line(109, ng0);
    t8 = (t0 + 2072U);
    t9 = *((char **)t8);
    t8 = (t0 + 2048U);
    t10 = (t8 + 44U);
    t17 = *((char **)t10);
    t18 = (t0 + 4508);
    t20 = (t18 + 36U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_index_select_value(t16, 1, t9, t17, 2, t21, 32, 1);
    t22 = (t0 + 4416);
    t23 = (t0 + 4416);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t27 = (t0 + 4508);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_bit_index(t19, t25, 2, t29, 32, 1);
    t30 = (t19 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (!(t34));
    if (t35 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4508);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 4508);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB17;

LAB21:    xsi_vlogvar_wait_assign_value(t22, t16, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB22;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 5416);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 31U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 4);

LAB1:    return;
}


extern void work_m_00000000000293114722_3027548060_init()
{
	static char *pe[] = {(void *)Always_104_0,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000293114722_3027548060", "isim/tb_isim_beh.exe.sim/work/m_00000000000293114722_3027548060.didat");
	xsi_register_executes(pe);
}
