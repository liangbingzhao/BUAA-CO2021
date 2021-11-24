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



static void Always_55_0(char *t0)
{
    char t7[8];
    char t16[8];
    char t19[8];
    char t43[8];
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    int t52;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5372);
    *((int *)t2) = 1;
    t3 = (t0 + 5060);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
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

LAB13:    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3268U);
    t3 = *((char **)t2);
    memcpy(t7, t3, 8);
    t2 = (t0 + 4508);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);

LAB23:    t2 = (t0 + 4508);
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
        goto LAB24;

LAB25:    goto LAB2;

LAB8:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t7) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(56, ng0);

LAB14:    xsi_set_current_line(57, ng0);
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
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t19);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t25) == 0)
        goto LAB15;

LAB17:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;

LAB18:    t32 = (t16 + 4);
    t33 = (t19 + 4);
    t34 = *((unsigned int *)t19);
    t35 = (~(t34));
    *((unsigned int *)t16) = t35;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t33) != 0)
        goto LAB20;

LAB19:    t40 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t40 & 1U);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t41 & 1U);
    t42 = (t0 + 4416);
    t44 = (t0 + 4416);
    t45 = (t44 + 44U);
    t46 = *((char **)t45);
    t47 = (t0 + 4508);
    t48 = (t47 + 36U);
    t49 = *((char **)t48);
    xsi_vlog_generic_convert_bit_index(t43, t46, 2, t49, 32, 1);
    t50 = (t43 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (!(t51));
    if (t52 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4508);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 4508);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB15:    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB20:    t36 = *((unsigned int *)t16);
    t37 = *((unsigned int *)t33);
    *((unsigned int *)t16) = (t36 | t37);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t33);
    *((unsigned int *)t32) = (t38 | t39);
    goto LAB19;

LAB21:    xsi_vlogvar_wait_assign_value(t42, t16, 0, *((unsigned int *)t43), 1, 0LL);
    goto LAB22;

LAB24:    xsi_set_current_line(59, ng0);

LAB26:    xsi_set_current_line(60, ng0);
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
    t31 = (t0 + 4508);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    xsi_vlog_generic_convert_bit_index(t19, t25, 2, t33, 32, 1);
    t42 = (t19 + 4);
    t26 = *((unsigned int *)t42);
    t52 = (!(t26));
    if (t52 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4508);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 4508);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB23;

LAB27:    xsi_vlogvar_wait_assign_value(t22, t16, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB28;

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


extern void work_m_00000000000547423714_3027548060_init()
{
	static char *pe[] = {(void *)Always_55_0,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000547423714_3027548060", "isim/tb_isim_beh.exe.sim/work/m_00000000000547423714_3027548060.didat");
	xsi_register_executes(pe);
}
