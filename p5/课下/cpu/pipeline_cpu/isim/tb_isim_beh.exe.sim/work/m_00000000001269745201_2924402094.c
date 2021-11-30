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
static const char *ng0 = "E:/Verilog_tool/p5/pipeline_cpu/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {4096, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "%d@%h: *%h <= %h";
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {31, 0};
static int ng8[] = {16, 0};
static int ng9[] = {15, 0};
static unsigned int ng10[] = {2U, 0U};
static int ng11[] = {7, 0};
static int ng12[] = {8, 0};
static int ng13[] = {23, 0};
static unsigned int ng14[] = {3U, 0U};
static int ng15[] = {24, 0};



static void Initial_43_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1656);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1564);
    t16 = (t0 + 1564);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1564);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1656);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1656);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1656);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Always_48_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t45[8];
    char t60[16];
    char t61[8];
    char t62[8];
    char t63[8];
    char t64[8];
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
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    int t72;
    int t73;
    char *t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    int t87;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2664);
    *((int *)t2) = 1;
    t3 = (t0 + 2352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 692U);
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

LAB11:    xsi_set_current_line(53, ng0);

LAB19:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB23;

LAB20:    if (t18 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t6) = 1;

LAB23:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB24;

LAB25:
LAB26:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1656);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(51, ng0);
    t8 = ((char*)((ng1)));
    t21 = (t0 + 1564);
    t22 = (t0 + 1564);
    t28 = (t22 + 44U);
    t29 = *((char **)t28);
    t32 = (t0 + 1564);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t0 + 1656);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t29, t34, 2, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t14 = *((unsigned int *)t38);
    t39 = (!(t14));
    t40 = (t31 + 4);
    t15 = *((unsigned int *)t40);
    t41 = (!(t15));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB17:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, *((unsigned int *)t31), t44, 0LL);
    goto LAB18;

LAB22:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(54, ng0);

LAB27:    xsi_set_current_line(55, ng0);
    t21 = (t0 + 1152U);
    t22 = *((char **)t21);

LAB28:    t21 = ((char*)((ng4)));
    t39 = xsi_vlog_unsigned_case_compare(t22, 2, t21, 2);
    if (t39 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng6)));
    t39 = xsi_vlog_unsigned_case_compare(t22, 2, t2, 2);
    if (t39 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng10)));
    t39 = xsi_vlog_unsigned_case_compare(t22, 2, t2, 2);
    if (t39 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB26;

LAB29:    xsi_set_current_line(56, ng0);

LAB36:    xsi_set_current_line(57, ng0);
    t28 = (t0 + 784U);
    t29 = *((char **)t28);
    t28 = (t0 + 1564);
    t32 = (t0 + 1564);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 1564);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = (t0 + 968U);
    t40 = *((char **)t38);
    memset(t45, 0, 8);
    t38 = (t45 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t40);
    t48 = (t47 >> 2);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 2);
    *((unsigned int *)t38) = t50;
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t51 & 4095U);
    t52 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t52 & 4095U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t45, 12, 2);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t53);
    t41 = (!(t54));
    t55 = (t31 + 4);
    t56 = *((unsigned int *)t55);
    t42 = (!(t56));
    t43 = (t41 && t42);
    if (t43 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(58, ng0);
    t2 = xsi_vlog_time(t60, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = (t0 + 968U);
    t5 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t60, 64, (char)118, t4, 32, (char)118, t5, 32, (char)118, t7, 32);
    goto LAB35;

LAB31:    xsi_set_current_line(60, ng0);

LAB39:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t3) = t14;
    t7 = (t6 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(65, ng0);

LAB46:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t5 = (t0 + 1564);
    t7 = (t0 + 1564);
    t8 = (t7 + 44U);
    t21 = *((char **)t8);
    t28 = (t0 + 1564);
    t29 = (t28 + 40U);
    t32 = *((char **)t29);
    t33 = (t0 + 968U);
    t34 = *((char **)t33);
    memset(t45, 0, 8);
    t33 = (t45 + 4);
    t35 = (t34 + 4);
    t15 = *((unsigned int *)t34);
    t16 = (t15 >> 2);
    *((unsigned int *)t45) = t16;
    t17 = *((unsigned int *)t35);
    t18 = (t17 >> 2);
    *((unsigned int *)t33) = t18;
    t19 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t19 & 4095U);
    t20 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t20 & 4095U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t21, t32, 2, 1, t45, 12, 2);
    t36 = (t0 + 1564);
    t37 = (t36 + 44U);
    t38 = *((char **)t37);
    t40 = ((char*)((ng9)));
    t46 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t61, t62, t63, ((int*)(t38)), 2, t40, 32, 1, t46, 32, 1);
    t53 = (t30 + 4);
    t23 = *((unsigned int *)t53);
    t39 = (!(t23));
    t55 = (t31 + 4);
    t24 = *((unsigned int *)t55);
    t41 = (!(t24));
    t42 = (t39 && t41);
    t65 = (t61 + 4);
    t25 = *((unsigned int *)t65);
    t43 = (!(t25));
    t44 = (t42 && t43);
    t66 = (t62 + 4);
    t26 = *((unsigned int *)t66);
    t59 = (!(t26));
    t72 = (t44 && t59);
    t67 = (t63 + 4);
    t27 = *((unsigned int *)t67);
    t73 = (!(t27));
    t76 = (t72 && t73);
    if (t76 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(67, ng0);
    t2 = xsi_vlog_time(t60, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 968U);
    t7 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t3, 2);
    t21 = (t0 + 1564);
    t28 = (t21 + 36U);
    t29 = *((char **)t28);
    t32 = (t0 + 1564);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 1564);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = (t0 + 968U);
    t40 = *((char **)t38);
    memset(t45, 0, 8);
    t38 = (t45 + 4);
    t46 = (t40 + 4);
    t15 = *((unsigned int *)t40);
    t16 = (t15 >> 2);
    *((unsigned int *)t45) = t16;
    t17 = *((unsigned int *)t46);
    t18 = (t17 >> 2);
    *((unsigned int *)t38) = t18;
    t19 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t19 & 4095U);
    t20 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t29, t34, t37, 2, 1, t45, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t60, 64, (char)118, t4, 32, (char)118, t6, 32, (char)118, t31, 32);

LAB42:    goto LAB35;

LAB33:    xsi_set_current_line(70, ng0);

LAB49:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 3U);

LAB50:    t7 = ((char*)((ng4)));
    t41 = xsi_vlog_unsigned_case_compare(t6, 32, t7, 32);
    if (t41 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng6)));
    t39 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t39 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng10)));
    t39 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t39 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng14)));
    t39 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t39 == 1)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(85, ng0);
    t2 = xsi_vlog_time(t60, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 968U);
    t7 = *((char **)t5);
    memset(t31, 0, 8);
    t5 = (t31 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t31, 30, t3, 2);
    t21 = (t0 + 1564);
    t28 = (t21 + 36U);
    t29 = *((char **)t28);
    t32 = (t0 + 1564);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 1564);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = (t0 + 968U);
    t40 = *((char **)t38);
    memset(t61, 0, 8);
    t38 = (t61 + 4);
    t46 = (t40 + 4);
    t15 = *((unsigned int *)t40);
    t16 = (t15 >> 2);
    *((unsigned int *)t61) = t16;
    t17 = *((unsigned int *)t46);
    t18 = (t17 >> 2);
    *((unsigned int *)t38) = t18;
    t19 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t19 & 4095U);
    t20 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t45, 32, t29, t34, t37, 2, 1, t61, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t60, 64, (char)118, t4, 32, (char)118, t30, 32, (char)118, t45, 32);
    goto LAB35;

LAB37:    t57 = *((unsigned int *)t30);
    t58 = *((unsigned int *)t31);
    t44 = (t57 - t58);
    t59 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, *((unsigned int *)t31), t59, 0LL);
    goto LAB38;

LAB40:    xsi_set_current_line(61, ng0);

LAB43:    xsi_set_current_line(62, ng0);
    t8 = (t0 + 784U);
    t21 = *((char **)t8);
    memset(t30, 0, 8);
    t8 = (t30 + 4);
    t28 = (t21 + 4);
    t20 = *((unsigned int *)t21);
    t23 = (t20 >> 0);
    *((unsigned int *)t30) = t23;
    t24 = *((unsigned int *)t28);
    t25 = (t24 >> 0);
    *((unsigned int *)t8) = t25;
    t26 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t26 & 65535U);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 65535U);
    t29 = (t0 + 1564);
    t32 = (t0 + 1564);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 1564);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = (t0 + 968U);
    t40 = *((char **)t38);
    memset(t61, 0, 8);
    t38 = (t61 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t40);
    t48 = (t47 >> 2);
    *((unsigned int *)t61) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 2);
    *((unsigned int *)t38) = t50;
    t51 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t51 & 4095U);
    t52 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t52 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t45, t34, t37, 2, 1, t61, 12, 2);
    t53 = (t0 + 1564);
    t55 = (t53 + 44U);
    t65 = *((char **)t55);
    t66 = ((char*)((ng7)));
    t67 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t62, t63, t64, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t31 + 4);
    t54 = *((unsigned int *)t68);
    t41 = (!(t54));
    t69 = (t45 + 4);
    t56 = *((unsigned int *)t69);
    t42 = (!(t56));
    t43 = (t41 && t42);
    t70 = (t62 + 4);
    t57 = *((unsigned int *)t70);
    t44 = (!(t57));
    t59 = (t43 && t44);
    t71 = (t63 + 4);
    t58 = *((unsigned int *)t71);
    t72 = (!(t58));
    t73 = (t59 && t72);
    t74 = (t64 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (!(t75));
    t77 = (t73 && t76);
    if (t77 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(63, ng0);
    t2 = xsi_vlog_time(t60, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1060U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 968U);
    t7 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t3, 2);
    t21 = (t0 + 1564);
    t28 = (t21 + 36U);
    t29 = *((char **)t28);
    t32 = (t0 + 1564);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 1564);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = (t0 + 968U);
    t40 = *((char **)t38);
    memset(t45, 0, 8);
    t38 = (t45 + 4);
    t46 = (t40 + 4);
    t15 = *((unsigned int *)t40);
    t16 = (t15 >> 2);
    *((unsigned int *)t45) = t16;
    t17 = *((unsigned int *)t46);
    t18 = (t17 >> 2);
    *((unsigned int *)t38) = t18;
    t19 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t19 & 4095U);
    t20 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t29, t34, t37, 2, 1, t45, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t60, 64, (char)118, t4, 32, (char)118, t6, 32, (char)118, t31, 32);
    goto LAB42;

LAB44:    t78 = *((unsigned int *)t64);
    t79 = (t78 + 0);
    t80 = *((unsigned int *)t45);
    t81 = *((unsigned int *)t63);
    t82 = (t80 + t81);
    t83 = *((unsigned int *)t62);
    t84 = *((unsigned int *)t63);
    t85 = (t83 - t84);
    t86 = (t85 + 1);
    xsi_vlogvar_wait_assign_value(t29, t30, t79, t82, t86, 0LL);
    goto LAB45;

LAB47:    t47 = *((unsigned int *)t63);
    t77 = (t47 + 0);
    t48 = *((unsigned int *)t31);
    t49 = *((unsigned int *)t62);
    t79 = (t48 + t49);
    t50 = *((unsigned int *)t61);
    t51 = *((unsigned int *)t62);
    t82 = (t50 - t51);
    t85 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t5, t6, t77, t79, t85, 0LL);
    goto LAB48;

LAB51:    xsi_set_current_line(72, ng0);

LAB60:    xsi_set_current_line(73, ng0);
    t8 = (t0 + 784U);
    t21 = *((char **)t8);
    memset(t30, 0, 8);
    t8 = (t30 + 4);
    t28 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 0);
    *((unsigned int *)t30) = t16;
    t17 = *((unsigned int *)t28);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t19 & 255U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 255U);
    t29 = (t0 + 1564);
    t32 = (t0 + 1564);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 1564);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = (t0 + 968U);
    t40 = *((char **)t38);
    memset(t61, 0, 8);
    t38 = (t61 + 4);
    t46 = (t40 + 4);
    t23 = *((unsigned int *)t40);
    t24 = (t23 >> 2);
    *((unsigned int *)t61) = t24;
    t25 = *((unsigned int *)t46);
    t26 = (t25 >> 2);
    *((unsigned int *)t38) = t26;
    t27 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t27 & 4095U);
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t47 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t45, t34, t37, 2, 1, t61, 12, 2);
    t53 = (t0 + 1564);
    t55 = (t53 + 44U);
    t65 = *((char **)t55);
    t66 = ((char*)((ng11)));
    t67 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t62, t63, t64, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t31 + 4);
    t48 = *((unsigned int *)t68);
    t42 = (!(t48));
    t69 = (t45 + 4);
    t49 = *((unsigned int *)t69);
    t43 = (!(t49));
    t44 = (t42 && t43);
    t70 = (t62 + 4);
    t50 = *((unsigned int *)t70);
    t59 = (!(t50));
    t72 = (t44 && t59);
    t71 = (t63 + 4);
    t51 = *((unsigned int *)t71);
    t73 = (!(t51));
    t76 = (t72 && t73);
    t74 = (t64 + 4);
    t52 = *((unsigned int *)t74);
    t77 = (!(t52));
    t79 = (t76 && t77);
    if (t79 == 1)
        goto LAB61;

LAB62:    goto LAB59;

LAB53:    xsi_set_current_line(75, ng0);

LAB63:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 1564);
    t8 = (t0 + 1564);
    t21 = (t8 + 44U);
    t28 = *((char **)t21);
    t29 = (t0 + 1564);
    t32 = (t29 + 40U);
    t33 = *((char **)t32);
    t34 = (t0 + 968U);
    t35 = *((char **)t34);
    memset(t61, 0, 8);
    t34 = (t61 + 4);
    t36 = (t35 + 4);
    t15 = *((unsigned int *)t35);
    t16 = (t15 >> 2);
    *((unsigned int *)t61) = t16;
    t17 = *((unsigned int *)t36);
    t18 = (t17 >> 2);
    *((unsigned int *)t34) = t18;
    t19 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t19 & 4095U);
    t20 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t20 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t45, t28, t33, 2, 1, t61, 12, 2);
    t37 = (t0 + 1564);
    t38 = (t37 + 44U);
    t40 = *((char **)t38);
    t46 = ((char*)((ng9)));
    t53 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t62, t63, t64, ((int*)(t40)), 2, t46, 32, 1, t53, 32, 1);
    t55 = (t31 + 4);
    t23 = *((unsigned int *)t55);
    t41 = (!(t23));
    t65 = (t45 + 4);
    t24 = *((unsigned int *)t65);
    t42 = (!(t24));
    t43 = (t41 && t42);
    t66 = (t62 + 4);
    t25 = *((unsigned int *)t66);
    t44 = (!(t25));
    t59 = (t43 && t44);
    t67 = (t63 + 4);
    t26 = *((unsigned int *)t67);
    t72 = (!(t26));
    t73 = (t59 && t72);
    t68 = (t64 + 4);
    t27 = *((unsigned int *)t68);
    t76 = (!(t27));
    t77 = (t73 && t76);
    if (t77 == 1)
        goto LAB64;

LAB65:    goto LAB59;

LAB55:    xsi_set_current_line(78, ng0);

LAB66:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 1564);
    t8 = (t0 + 1564);
    t21 = (t8 + 44U);
    t28 = *((char **)t21);
    t29 = (t0 + 1564);
    t32 = (t29 + 40U);
    t33 = *((char **)t32);
    t34 = (t0 + 968U);
    t35 = *((char **)t34);
    memset(t61, 0, 8);
    t34 = (t61 + 4);
    t36 = (t35 + 4);
    t15 = *((unsigned int *)t35);
    t16 = (t15 >> 2);
    *((unsigned int *)t61) = t16;
    t17 = *((unsigned int *)t36);
    t18 = (t17 >> 2);
    *((unsigned int *)t34) = t18;
    t19 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t19 & 4095U);
    t20 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t20 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t45, t28, t33, 2, 1, t61, 12, 2);
    t37 = (t0 + 1564);
    t38 = (t37 + 44U);
    t40 = *((char **)t38);
    t46 = ((char*)((ng13)));
    t53 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t62, t63, t64, ((int*)(t40)), 2, t46, 32, 1, t53, 32, 1);
    t55 = (t31 + 4);
    t23 = *((unsigned int *)t55);
    t41 = (!(t23));
    t65 = (t45 + 4);
    t24 = *((unsigned int *)t65);
    t42 = (!(t24));
    t43 = (t41 && t42);
    t66 = (t62 + 4);
    t25 = *((unsigned int *)t66);
    t44 = (!(t25));
    t59 = (t43 && t44);
    t67 = (t63 + 4);
    t26 = *((unsigned int *)t67);
    t72 = (!(t26));
    t73 = (t59 && t72);
    t68 = (t64 + 4);
    t27 = *((unsigned int *)t68);
    t76 = (!(t27));
    t77 = (t73 && t76);
    if (t77 == 1)
        goto LAB67;

LAB68:    goto LAB59;

LAB57:    xsi_set_current_line(81, ng0);

LAB69:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 1564);
    t8 = (t0 + 1564);
    t21 = (t8 + 44U);
    t28 = *((char **)t21);
    t29 = (t0 + 1564);
    t32 = (t29 + 40U);
    t33 = *((char **)t32);
    t34 = (t0 + 968U);
    t35 = *((char **)t34);
    memset(t61, 0, 8);
    t34 = (t61 + 4);
    t36 = (t35 + 4);
    t15 = *((unsigned int *)t35);
    t16 = (t15 >> 2);
    *((unsigned int *)t61) = t16;
    t17 = *((unsigned int *)t36);
    t18 = (t17 >> 2);
    *((unsigned int *)t34) = t18;
    t19 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t19 & 4095U);
    t20 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t20 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t45, t28, t33, 2, 1, t61, 12, 2);
    t37 = (t0 + 1564);
    t38 = (t37 + 44U);
    t40 = *((char **)t38);
    t46 = ((char*)((ng7)));
    t53 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t62, t63, t64, ((int*)(t40)), 2, t46, 32, 1, t53, 32, 1);
    t55 = (t31 + 4);
    t23 = *((unsigned int *)t55);
    t41 = (!(t23));
    t65 = (t45 + 4);
    t24 = *((unsigned int *)t65);
    t42 = (!(t24));
    t43 = (t41 && t42);
    t66 = (t62 + 4);
    t25 = *((unsigned int *)t66);
    t44 = (!(t25));
    t59 = (t43 && t44);
    t67 = (t63 + 4);
    t26 = *((unsigned int *)t67);
    t72 = (!(t26));
    t73 = (t59 && t72);
    t68 = (t64 + 4);
    t27 = *((unsigned int *)t68);
    t76 = (!(t27));
    t77 = (t73 && t76);
    if (t77 == 1)
        goto LAB70;

LAB71:    goto LAB59;

LAB61:    t54 = *((unsigned int *)t64);
    t82 = (t54 + 0);
    t56 = *((unsigned int *)t45);
    t57 = *((unsigned int *)t63);
    t85 = (t56 + t57);
    t58 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t63);
    t86 = (t58 - t75);
    t87 = (t86 + 1);
    xsi_vlogvar_wait_assign_value(t29, t30, t82, t85, t87, 0LL);
    goto LAB62;

LAB64:    t47 = *((unsigned int *)t64);
    t79 = (t47 + 0);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t63);
    t82 = (t48 + t49);
    t50 = *((unsigned int *)t62);
    t51 = *((unsigned int *)t63);
    t85 = (t50 - t51);
    t86 = (t85 + 1);
    xsi_vlogvar_wait_assign_value(t7, t30, t79, t82, t86, 0LL);
    goto LAB65;

LAB67:    t47 = *((unsigned int *)t64);
    t79 = (t47 + 0);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t63);
    t82 = (t48 + t49);
    t50 = *((unsigned int *)t62);
    t51 = *((unsigned int *)t63);
    t85 = (t50 - t51);
    t86 = (t85 + 1);
    xsi_vlogvar_wait_assign_value(t7, t30, t79, t82, t86, 0LL);
    goto LAB68;

LAB70:    t47 = *((unsigned int *)t64);
    t79 = (t47 + 0);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t63);
    t82 = (t48 + t49);
    t50 = *((unsigned int *)t62);
    t51 = *((unsigned int *)t63);
    t85 = (t50 - t51);
    t86 = (t85 + 1);
    xsi_vlogvar_wait_assign_value(t7, t30, t79, t82, t86, 0LL);
    goto LAB71;

}

static void Always_92_2(char *t0)
{
    char t10[8];
    char t17[8];
    char t29[8];
    char t33[8];
    char t43[8];
    char t44[8];
    char t45[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    int t53;
    char *t54;
    unsigned int t55;
    int t56;
    int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2672);
    *((int *)t2) = 1;
    t3 = (t0 + 2496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng4)));
    t7 = (t0 + 1472);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 32);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(94, ng0);

LAB16:    xsi_set_current_line(95, ng0);
    t7 = (t0 + 1564);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    t11 = (t0 + 1564);
    t12 = (t11 + 44U);
    t13 = *((char **)t12);
    t14 = (t0 + 1564);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    t18 = (t0 + 968U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 2);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 2);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 4095U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t13, t16, 2, 1, t17, 12, 2);
    t27 = (t0 + 1472);
    xsi_vlogvar_assign_value(t27, t10, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(97, ng0);

LAB17:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    t3 = (t0 + 944U);
    t7 = (t3 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t4, t8, 2, t9, 32, 1);

LAB18:    t11 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t10, 32, t11, 32);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 32, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);

LAB28:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB15;

LAB11:    xsi_set_current_line(107, ng0);

LAB38:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 968U);
    t7 = *((char **)t4);
    memset(t17, 0, 8);
    t4 = (t17 + 4);
    t8 = (t7 + 4);
    t21 = *((unsigned int *)t7);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t8);
    t24 = (t23 >> 0);
    *((unsigned int *)t4) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 3U);
    t26 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t26 & 3U);

LAB39:    t9 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t17, 32, t9, 32);
    if (t28 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 32, t2, 32);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 32, t2, 32);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 32, t2, 32);
    if (t6 == 1)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1244U);
    t4 = *((char **)t2);

LAB57:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 32);
    if (t6 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 32);
    if (t6 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB15;

LAB19:    xsi_set_current_line(99, ng0);
    t12 = (t0 + 1564);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = (t0 + 1564);
    t16 = (t15 + 44U);
    t18 = *((char **)t16);
    t19 = (t0 + 1564);
    t20 = (t19 + 40U);
    t27 = *((char **)t20);
    t30 = (t0 + 968U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t21 = *((unsigned int *)t31);
    t22 = (t21 >> 2);
    *((unsigned int *)t29) = t22;
    t23 = *((unsigned int *)t32);
    t24 = (t23 >> 2);
    *((unsigned int *)t30) = t24;
    t25 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t25 & 4095U);
    t26 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t17, 32, t14, t18, t27, 2, 1, t29, 12, 2);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t35 = (t17 + 4);
    t36 = *((unsigned int *)t17);
    t37 = (t36 >> 0);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 65535U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 65535U);
    t42 = (t0 + 1472);
    t46 = (t0 + 1472);
    t47 = (t46 + 44U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng9)));
    t50 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t43, t44, t45, ((int*)(t48)), 2, t49, 32, 1, t50, 32, 1);
    t51 = (t43 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t44 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (!(t55));
    t57 = (t53 && t56);
    t58 = (t45 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB24;

LAB25:    goto LAB23;

LAB21:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 1564);
    t4 = (t3 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1564);
    t9 = (t8 + 44U);
    t11 = *((char **)t9);
    t12 = (t0 + 1564);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    t15 = (t0 + 968U);
    t16 = *((char **)t15);
    memset(t29, 0, 8);
    t15 = (t29 + 4);
    t18 = (t16 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (t21 >> 2);
    *((unsigned int *)t29) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 2);
    *((unsigned int *)t15) = t24;
    t25 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t25 & 4095U);
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t17, 32, t7, t11, t14, 2, 1, t29, 12, 2);
    memset(t33, 0, 8);
    t19 = (t33 + 4);
    t20 = (t17 + 4);
    t36 = *((unsigned int *)t17);
    t37 = (t36 >> 16);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t20);
    t39 = (t38 >> 16);
    *((unsigned int *)t19) = t39;
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 65535U);
    t41 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t41 & 65535U);
    t27 = (t0 + 1472);
    t30 = (t0 + 1472);
    t31 = (t30 + 44U);
    t32 = *((char **)t31);
    t34 = ((char*)((ng9)));
    t35 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t43, t44, t45, ((int*)(t32)), 2, t34, 32, 1, t35, 32, 1);
    t42 = (t43 + 4);
    t52 = *((unsigned int *)t42);
    t28 = (!(t52));
    t46 = (t44 + 4);
    t55 = *((unsigned int *)t46);
    t53 = (!(t55));
    t56 = (t28 && t53);
    t47 = (t45 + 4);
    t59 = *((unsigned int *)t47);
    t57 = (!(t59));
    t60 = (t56 && t57);
    if (t60 == 1)
        goto LAB26;

LAB27:    goto LAB23;

LAB24:    t62 = *((unsigned int *)t45);
    t63 = (t62 + 0);
    t64 = *((unsigned int *)t43);
    t65 = *((unsigned int *)t44);
    t66 = (t64 - t65);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t42, t33, t63, *((unsigned int *)t44), t67);
    goto LAB25;

LAB26:    t62 = *((unsigned int *)t45);
    t61 = (t62 + 0);
    t64 = *((unsigned int *)t43);
    t65 = *((unsigned int *)t44);
    t63 = (t64 - t65);
    t66 = (t63 + 1);
    xsi_vlogvar_assign_value(t27, t33, t61, *((unsigned int *)t44), t66);
    goto LAB27;

LAB29:    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 1472);
    t8 = (t0 + 1472);
    t9 = (t8 + 44U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng7)));
    t13 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t17, t29, t33, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t17 + 4);
    t21 = *((unsigned int *)t14);
    t28 = (!(t21));
    t15 = (t29 + 4);
    t22 = *((unsigned int *)t15);
    t53 = (!(t22));
    t56 = (t28 && t53);
    t16 = (t33 + 4);
    t23 = *((unsigned int *)t16);
    t57 = (!(t23));
    t60 = (t56 && t57);
    if (t60 == 1)
        goto LAB34;

LAB35:    goto LAB33;

LAB31:    xsi_set_current_line(104, ng0);
    t4 = ((char*)((ng8)));
    t7 = (t0 + 1472);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t29, 0, 8);
    t11 = (t29 + 4);
    t12 = (t9 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (t21 >> 15);
    t23 = (t22 & 1);
    *((unsigned int *)t29) = t23;
    t24 = *((unsigned int *)t12);
    t25 = (t24 >> 15);
    t26 = (t25 & 1);
    *((unsigned int *)t11) = t26;
    xsi_vlog_mul_concat(t17, 16, 1, t4, 1U, t29, 1);
    t13 = (t0 + 1472);
    t14 = (t0 + 1472);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng7)));
    t19 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t33, t43, t44, ((int*)(t16)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t33 + 4);
    t36 = *((unsigned int *)t20);
    t28 = (!(t36));
    t27 = (t43 + 4);
    t37 = *((unsigned int *)t27);
    t53 = (!(t37));
    t56 = (t28 && t53);
    t30 = (t44 + 4);
    t38 = *((unsigned int *)t30);
    t57 = (!(t38));
    t60 = (t56 && t57);
    if (t60 == 1)
        goto LAB36;

LAB37:    goto LAB33;

LAB34:    t24 = *((unsigned int *)t33);
    t61 = (t24 + 0);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t29);
    t63 = (t25 - t26);
    t66 = (t63 + 1);
    xsi_vlogvar_assign_value(t7, t4, t61, *((unsigned int *)t29), t66);
    goto LAB35;

LAB36:    t39 = *((unsigned int *)t44);
    t61 = (t39 + 0);
    t40 = *((unsigned int *)t33);
    t41 = *((unsigned int *)t43);
    t63 = (t40 - t41);
    t66 = (t63 + 1);
    xsi_vlogvar_assign_value(t13, t17, t61, *((unsigned int *)t43), t66);
    goto LAB37;

LAB40:    xsi_set_current_line(109, ng0);
    t11 = (t0 + 1564);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 1564);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t18 = (t0 + 1564);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t27 = (t0 + 968U);
    t30 = *((char **)t27);
    memset(t33, 0, 8);
    t27 = (t33 + 4);
    t31 = (t30 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 2);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t31);
    t39 = (t38 >> 2);
    *((unsigned int *)t27) = t39;
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 4095U);
    t41 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t41 & 4095U);
    xsi_vlog_generic_get_array_select_value(t29, 32, t13, t16, t20, 2, 1, t33, 12, 2);
    memset(t43, 0, 8);
    t32 = (t43 + 4);
    t34 = (t29 + 4);
    t52 = *((unsigned int *)t29);
    t55 = (t52 >> 0);
    *((unsigned int *)t43) = t55;
    t59 = *((unsigned int *)t34);
    t62 = (t59 >> 0);
    *((unsigned int *)t32) = t62;
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & 255U);
    t65 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t65 & 255U);
    t35 = (t0 + 1472);
    t42 = (t0 + 1472);
    t46 = (t42 + 44U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng11)));
    t49 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t44, t45, t68, ((int*)(t47)), 2, t48, 32, 1, t49, 32, 1);
    t50 = (t44 + 4);
    t69 = *((unsigned int *)t50);
    t53 = (!(t69));
    t51 = (t45 + 4);
    t70 = *((unsigned int *)t51);
    t56 = (!(t70));
    t57 = (t53 && t56);
    t54 = (t68 + 4);
    t71 = *((unsigned int *)t54);
    t60 = (!(t71));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB49;

LAB50:    goto LAB48;

LAB42:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 1564);
    t7 = (t4 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564);
    t11 = (t9 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1564);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = (t0 + 968U);
    t18 = *((char **)t16);
    memset(t33, 0, 8);
    t16 = (t33 + 4);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 2);
    *((unsigned int *)t33) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 2);
    *((unsigned int *)t16) = t24;
    t25 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t25 & 4095U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t29, 32, t8, t12, t15, 2, 1, t33, 12, 2);
    memset(t43, 0, 8);
    t20 = (t43 + 4);
    t27 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 8);
    *((unsigned int *)t43) = t37;
    t38 = *((unsigned int *)t27);
    t39 = (t38 >> 8);
    *((unsigned int *)t20) = t39;
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & 255U);
    t41 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t41 & 255U);
    t30 = (t0 + 1472);
    t31 = (t0 + 1472);
    t32 = (t31 + 44U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng11)));
    t42 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t44, t45, t68, ((int*)(t34)), 2, t35, 32, 1, t42, 32, 1);
    t46 = (t44 + 4);
    t52 = *((unsigned int *)t46);
    t28 = (!(t52));
    t47 = (t45 + 4);
    t55 = *((unsigned int *)t47);
    t53 = (!(t55));
    t56 = (t28 && t53);
    t48 = (t68 + 4);
    t59 = *((unsigned int *)t48);
    t57 = (!(t59));
    t60 = (t56 && t57);
    if (t60 == 1)
        goto LAB51;

LAB52:    goto LAB48;

LAB44:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 1564);
    t7 = (t4 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564);
    t11 = (t9 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1564);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = (t0 + 968U);
    t18 = *((char **)t16);
    memset(t33, 0, 8);
    t16 = (t33 + 4);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 2);
    *((unsigned int *)t33) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 2);
    *((unsigned int *)t16) = t24;
    t25 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t25 & 4095U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t29, 32, t8, t12, t15, 2, 1, t33, 12, 2);
    memset(t43, 0, 8);
    t20 = (t43 + 4);
    t27 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 16);
    *((unsigned int *)t43) = t37;
    t38 = *((unsigned int *)t27);
    t39 = (t38 >> 16);
    *((unsigned int *)t20) = t39;
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & 255U);
    t41 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t41 & 255U);
    t30 = (t0 + 1472);
    t31 = (t0 + 1472);
    t32 = (t31 + 44U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng11)));
    t42 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t44, t45, t68, ((int*)(t34)), 2, t35, 32, 1, t42, 32, 1);
    t46 = (t44 + 4);
    t52 = *((unsigned int *)t46);
    t28 = (!(t52));
    t47 = (t45 + 4);
    t55 = *((unsigned int *)t47);
    t53 = (!(t55));
    t56 = (t28 && t53);
    t48 = (t68 + 4);
    t59 = *((unsigned int *)t48);
    t57 = (!(t59));
    t60 = (t56 && t57);
    if (t60 == 1)
        goto LAB53;

LAB54:    goto LAB48;

LAB46:    xsi_set_current_line(112, ng0);
    t4 = (t0 + 1564);
    t7 = (t4 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564);
    t11 = (t9 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1564);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = (t0 + 968U);
    t18 = *((char **)t16);
    memset(t33, 0, 8);
    t16 = (t33 + 4);
    t19 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 2);
    *((unsigned int *)t33) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 2);
    *((unsigned int *)t16) = t24;
    t25 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t25 & 4095U);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 4095U);
    xsi_vlog_generic_get_array_select_value(t29, 32, t8, t12, t15, 2, 1, t33, 12, 2);
    memset(t43, 0, 8);
    t20 = (t43 + 4);
    t27 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 24);
    *((unsigned int *)t43) = t37;
    t38 = *((unsigned int *)t27);
    t39 = (t38 >> 24);
    *((unsigned int *)t20) = t39;
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & 255U);
    t41 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t41 & 255U);
    t30 = (t0 + 1472);
    t31 = (t0 + 1472);
    t32 = (t31 + 44U);
    t34 = *((char **)t32);
    t35 = ((char*)((ng11)));
    t42 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t44, t45, t68, ((int*)(t34)), 2, t35, 32, 1, t42, 32, 1);
    t46 = (t44 + 4);
    t52 = *((unsigned int *)t46);
    t28 = (!(t52));
    t47 = (t45 + 4);
    t55 = *((unsigned int *)t47);
    t53 = (!(t55));
    t56 = (t28 && t53);
    t48 = (t68 + 4);
    t59 = *((unsigned int *)t48);
    t57 = (!(t59));
    t60 = (t56 && t57);
    if (t60 == 1)
        goto LAB55;

LAB56:    goto LAB48;

LAB49:    t72 = *((unsigned int *)t68);
    t63 = (t72 + 0);
    t73 = *((unsigned int *)t44);
    t74 = *((unsigned int *)t45);
    t66 = (t73 - t74);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t35, t43, t63, *((unsigned int *)t45), t67);
    goto LAB50;

LAB51:    t62 = *((unsigned int *)t68);
    t61 = (t62 + 0);
    t64 = *((unsigned int *)t44);
    t65 = *((unsigned int *)t45);
    t63 = (t64 - t65);
    t66 = (t63 + 1);
    xsi_vlogvar_assign_value(t30, t43, t61, *((unsigned int *)t45), t66);
    goto LAB52;

LAB53:    t62 = *((unsigned int *)t68);
    t61 = (t62 + 0);
    t64 = *((unsigned int *)t44);
    t65 = *((unsigned int *)t45);
    t63 = (t64 - t65);
    t66 = (t63 + 1);
    xsi_vlogvar_assign_value(t30, t43, t61, *((unsigned int *)t45), t66);
    goto LAB54;

LAB55:    t62 = *((unsigned int *)t68);
    t61 = (t62 + 0);
    t64 = *((unsigned int *)t44);
    t65 = *((unsigned int *)t45);
    t63 = (t64 - t65);
    t66 = (t63 + 1);
    xsi_vlogvar_assign_value(t30, t43, t61, *((unsigned int *)t45), t66);
    goto LAB56;

LAB58:    xsi_set_current_line(115, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 1472);
    t9 = (t0 + 1472);
    t11 = (t9 + 44U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng7)));
    t14 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t29, t33, t43, ((int*)(t12)), 2, t13, 32, 1, t14, 32, 1);
    t15 = (t29 + 4);
    t21 = *((unsigned int *)t15);
    t28 = (!(t21));
    t16 = (t33 + 4);
    t22 = *((unsigned int *)t16);
    t53 = (!(t22));
    t56 = (t28 && t53);
    t18 = (t43 + 4);
    t23 = *((unsigned int *)t18);
    t57 = (!(t23));
    t60 = (t56 && t57);
    if (t60 == 1)
        goto LAB63;

LAB64:    goto LAB62;

LAB60:    xsi_set_current_line(116, ng0);
    t7 = ((char*)((ng15)));
    t8 = (t0 + 1472);
    t9 = (t8 + 36U);
    t11 = *((char **)t9);
    memset(t33, 0, 8);
    t12 = (t33 + 4);
    t13 = (t11 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (t21 >> 7);
    t23 = (t22 & 1);
    *((unsigned int *)t33) = t23;
    t24 = *((unsigned int *)t13);
    t25 = (t24 >> 7);
    t26 = (t25 & 1);
    *((unsigned int *)t12) = t26;
    xsi_vlog_mul_concat(t29, 24, 1, t7, 1U, t33, 1);
    t14 = (t0 + 1472);
    t15 = (t0 + 1472);
    t16 = (t15 + 44U);
    t18 = *((char **)t16);
    t19 = ((char*)((ng7)));
    t20 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t43, t44, t45, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t27 = (t43 + 4);
    t36 = *((unsigned int *)t27);
    t28 = (!(t36));
    t30 = (t44 + 4);
    t37 = *((unsigned int *)t30);
    t53 = (!(t37));
    t56 = (t28 && t53);
    t31 = (t45 + 4);
    t38 = *((unsigned int *)t31);
    t57 = (!(t38));
    t60 = (t56 && t57);
    if (t60 == 1)
        goto LAB65;

LAB66:    goto LAB62;

LAB63:    t24 = *((unsigned int *)t43);
    t61 = (t24 + 0);
    t25 = *((unsigned int *)t29);
    t26 = *((unsigned int *)t33);
    t63 = (t25 - t26);
    t66 = (t63 + 1);
    xsi_vlogvar_assign_value(t8, t7, t61, *((unsigned int *)t33), t66);
    goto LAB64;

LAB65:    t39 = *((unsigned int *)t45);
    t61 = (t39 + 0);
    t40 = *((unsigned int *)t43);
    t41 = *((unsigned int *)t44);
    t63 = (t40 - t41);
    t66 = (t63 + 1);
    xsi_vlogvar_assign_value(t14, t29, t61, *((unsigned int *)t44), t66);
    goto LAB66;

}


extern void work_m_00000000001269745201_2924402094_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_48_1,(void *)Always_92_2};
	xsi_register_didat("work_m_00000000001269745201_2924402094", "isim/tb_isim_beh.exe.sim/work/m_00000000001269745201_2924402094.didat");
	xsi_register_executes(pe);
}
