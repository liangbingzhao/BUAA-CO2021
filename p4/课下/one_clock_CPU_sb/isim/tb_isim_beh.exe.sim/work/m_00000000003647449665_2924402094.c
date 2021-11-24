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
static const char *ng0 = "E:/Verilog_tool/p4plus/one_clock_CPU/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {1024, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {7, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {15, 0};
static int ng8[] = {8, 0};
static unsigned int ng9[] = {2U, 0U};
static int ng10[] = {23, 0};
static int ng11[] = {16, 0};
static unsigned int ng12[] = {3U, 0U};
static int ng13[] = {31, 0};
static int ng14[] = {24, 0};
static const char *ng15 = "@%h: *%h <= %h";



static void Initial_37_0(char *t0)
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

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
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
LAB4:    xsi_set_current_line(39, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
    t23 = (t22 + 56U);
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

LAB7:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Cont_42_1(char *t0)
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

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1848U);
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
    t22 = (t0 + 4720);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 4624);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_44_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t68[8];
    char t69[8];
    char t76[8];
    char t86[8];
    char t87[8];
    char t88[8];
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
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    int t100;
    char *t101;
    unsigned int t102;
    int t103;
    int t104;
    char *t105;
    unsigned int t106;
    int t107;
    int t108;
    unsigned int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(49, ng0);

LAB19:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1528U);
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

LAB10:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2888);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
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

LAB15:    xsi_set_current_line(47, ng0);
    t8 = ((char*)((ng1)));
    t21 = (t0 + 2728);
    t22 = (t0 + 2728);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 2728);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 2888);
    t36 = (t35 + 56U);
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

LAB18:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB17:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t21, t8, 0, *((unsigned int *)t31), t44);
    goto LAB18;

LAB22:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(50, ng0);

LAB27:    xsi_set_current_line(51, ng0);
    t21 = (t0 + 2168U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t45 = *((unsigned int *)t22);
    t46 = *((unsigned int *)t21);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t29);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t28);
    t53 = *((unsigned int *)t29);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB31;

LAB28:    if (t54 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t30) = 1;

LAB31:    t33 = (t30 + 4);
    t57 = *((unsigned int *)t33);
    t58 = (~(t57));
    t59 = *((unsigned int *)t30);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(68, ng0);

LAB58:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2728);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    memset(t31, 0, 8);
    t28 = (t31 + 4);
    t32 = (t29 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (t9 >> 2);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t32);
    t12 = (t11 >> 2);
    *((unsigned int *)t28) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 1023U);
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 1023U);
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t31, 10, 2);
    t33 = (t6 + 4);
    t15 = *((unsigned int *)t33);
    t39 = (!(t15));
    t34 = (t30 + 4);
    t16 = *((unsigned int *)t34);
    t41 = (!(t16));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng15, 4, t0, (char)118, t3, 32, (char)118, t4, 32, (char)118, t5, 32);

LAB34:    goto LAB26;

LAB30:    t32 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(51, ng0);

LAB35:    xsi_set_current_line(52, ng0);
    t34 = (t0 + 2328U);
    t35 = *((char **)t34);

LAB36:    t34 = ((char*)((ng4)));
    t39 = xsi_vlog_unsigned_case_compare(t35, 2, t34, 32);
    if (t39 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng6)));
    t39 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 32);
    if (t39 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng9)));
    t39 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 32);
    if (t39 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng12)));
    t39 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 32);
    if (t39 == 1)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    memset(t30, 0, 8);
    t4 = (t30 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t2, 2);
    t8 = (t0 + 2728);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = (t0 + 2728);
    t29 = (t28 + 72U);
    t32 = *((char **)t29);
    t33 = (t0 + 2728);
    t34 = (t33 + 64U);
    t36 = *((char **)t34);
    t37 = (t0 + 1848U);
    t38 = *((char **)t37);
    memset(t68, 0, 8);
    t37 = (t68 + 4);
    t40 = (t38 + 4);
    t15 = *((unsigned int *)t38);
    t16 = (t15 >> 2);
    *((unsigned int *)t68) = t16;
    t17 = *((unsigned int *)t40);
    t18 = (t17 >> 2);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t19 & 1023U);
    t20 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t20 & 1023U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t22, t32, t36, 2, 1, t68, 10, 2);
    xsi_vlogfile_write(1, 0, 0, ng15, 4, t0, (char)118, t3, 32, (char)118, t6, 32, (char)118, t31, 32);
    goto LAB34;

LAB37:    xsi_set_current_line(53, ng0);

LAB46:    xsi_set_current_line(54, ng0);
    t36 = (t0 + 1368U);
    t37 = *((char **)t36);
    memset(t31, 0, 8);
    t36 = (t31 + 4);
    t38 = (t37 + 4);
    t62 = *((unsigned int *)t37);
    t63 = (t62 >> 0);
    *((unsigned int *)t31) = t63;
    t64 = *((unsigned int *)t38);
    t65 = (t64 >> 0);
    *((unsigned int *)t36) = t65;
    t66 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t66 & 255U);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & 255U);
    t40 = (t0 + 2728);
    t70 = (t0 + 2728);
    t71 = (t70 + 72U);
    t72 = *((char **)t71);
    t73 = (t0 + 2728);
    t74 = (t73 + 64U);
    t75 = *((char **)t74);
    t77 = (t0 + 1848U);
    t78 = *((char **)t77);
    memset(t76, 0, 8);
    t77 = (t76 + 4);
    t79 = (t78 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (t80 >> 2);
    *((unsigned int *)t76) = t81;
    t82 = *((unsigned int *)t79);
    t83 = (t82 >> 2);
    *((unsigned int *)t77) = t83;
    t84 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t84 & 1023U);
    t85 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t85 & 1023U);
    xsi_vlog_generic_convert_array_indices(t68, t69, t72, t75, 2, 1, t76, 10, 2);
    t89 = (t0 + 2728);
    t90 = (t89 + 72U);
    t91 = *((char **)t90);
    t92 = ((char*)((ng5)));
    t93 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t86, t87, t88, ((int*)(t91)), 2, t92, 32, 1, t93, 32, 1);
    t94 = (t68 + 4);
    t95 = *((unsigned int *)t94);
    t41 = (!(t95));
    t96 = (t69 + 4);
    t97 = *((unsigned int *)t96);
    t42 = (!(t97));
    t43 = (t41 && t42);
    t98 = (t86 + 4);
    t99 = *((unsigned int *)t98);
    t44 = (!(t99));
    t100 = (t43 && t44);
    t101 = (t87 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (!(t102));
    t104 = (t100 && t103);
    t105 = (t88 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (!(t106));
    t108 = (t104 && t107);
    if (t108 == 1)
        goto LAB47;

LAB48:    goto LAB45;

LAB39:    xsi_set_current_line(56, ng0);

LAB49:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1368U);
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
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 2728);
    t8 = (t0 + 2728);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t32 = *((char **)t29);
    t33 = (t0 + 1848U);
    t34 = *((char **)t33);
    memset(t68, 0, 8);
    t33 = (t68 + 4);
    t36 = (t34 + 4);
    t15 = *((unsigned int *)t34);
    t16 = (t15 >> 2);
    *((unsigned int *)t68) = t16;
    t17 = *((unsigned int *)t36);
    t18 = (t17 >> 2);
    *((unsigned int *)t33) = t18;
    t19 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t19 & 1023U);
    t20 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t20 & 1023U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t22, t32, 2, 1, t68, 10, 2);
    t37 = (t0 + 2728);
    t38 = (t37 + 72U);
    t40 = *((char **)t38);
    t70 = ((char*)((ng7)));
    t71 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t69, t76, t86, ((int*)(t40)), 2, t70, 32, 1, t71, 32, 1);
    t72 = (t30 + 4);
    t23 = *((unsigned int *)t72);
    t41 = (!(t23));
    t73 = (t31 + 4);
    t24 = *((unsigned int *)t73);
    t42 = (!(t24));
    t43 = (t41 && t42);
    t74 = (t69 + 4);
    t25 = *((unsigned int *)t74);
    t44 = (!(t25));
    t100 = (t43 && t44);
    t75 = (t76 + 4);
    t26 = *((unsigned int *)t75);
    t103 = (!(t26));
    t104 = (t100 && t103);
    t77 = (t86 + 4);
    t27 = *((unsigned int *)t77);
    t107 = (!(t27));
    t108 = (t104 && t107);
    if (t108 == 1)
        goto LAB50;

LAB51:    goto LAB45;

LAB41:    xsi_set_current_line(59, ng0);

LAB52:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1368U);
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
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 2728);
    t8 = (t0 + 2728);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t32 = *((char **)t29);
    t33 = (t0 + 1848U);
    t34 = *((char **)t33);
    memset(t68, 0, 8);
    t33 = (t68 + 4);
    t36 = (t34 + 4);
    t15 = *((unsigned int *)t34);
    t16 = (t15 >> 2);
    *((unsigned int *)t68) = t16;
    t17 = *((unsigned int *)t36);
    t18 = (t17 >> 2);
    *((unsigned int *)t33) = t18;
    t19 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t19 & 1023U);
    t20 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t20 & 1023U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t22, t32, 2, 1, t68, 10, 2);
    t37 = (t0 + 2728);
    t38 = (t37 + 72U);
    t40 = *((char **)t38);
    t70 = ((char*)((ng10)));
    t71 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t69, t76, t86, ((int*)(t40)), 2, t70, 32, 1, t71, 32, 1);
    t72 = (t30 + 4);
    t23 = *((unsigned int *)t72);
    t41 = (!(t23));
    t73 = (t31 + 4);
    t24 = *((unsigned int *)t73);
    t42 = (!(t24));
    t43 = (t41 && t42);
    t74 = (t69 + 4);
    t25 = *((unsigned int *)t74);
    t44 = (!(t25));
    t100 = (t43 && t44);
    t75 = (t76 + 4);
    t26 = *((unsigned int *)t75);
    t103 = (!(t26));
    t104 = (t100 && t103);
    t77 = (t86 + 4);
    t27 = *((unsigned int *)t77);
    t107 = (!(t27));
    t108 = (t104 && t107);
    if (t108 == 1)
        goto LAB53;

LAB54:    goto LAB45;

LAB43:    xsi_set_current_line(62, ng0);

LAB55:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1368U);
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
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = (t0 + 2728);
    t8 = (t0 + 2728);
    t21 = (t8 + 72U);
    t22 = *((char **)t21);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t32 = *((char **)t29);
    t33 = (t0 + 1848U);
    t34 = *((char **)t33);
    memset(t68, 0, 8);
    t33 = (t68 + 4);
    t36 = (t34 + 4);
    t15 = *((unsigned int *)t34);
    t16 = (t15 >> 2);
    *((unsigned int *)t68) = t16;
    t17 = *((unsigned int *)t36);
    t18 = (t17 >> 2);
    *((unsigned int *)t33) = t18;
    t19 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t19 & 1023U);
    t20 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t20 & 1023U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t22, t32, 2, 1, t68, 10, 2);
    t37 = (t0 + 2728);
    t38 = (t37 + 72U);
    t40 = *((char **)t38);
    t70 = ((char*)((ng13)));
    t71 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t69, t76, t86, ((int*)(t40)), 2, t70, 32, 1, t71, 32, 1);
    t72 = (t30 + 4);
    t23 = *((unsigned int *)t72);
    t41 = (!(t23));
    t73 = (t31 + 4);
    t24 = *((unsigned int *)t73);
    t42 = (!(t24));
    t43 = (t41 && t42);
    t74 = (t69 + 4);
    t25 = *((unsigned int *)t74);
    t44 = (!(t25));
    t100 = (t43 && t44);
    t75 = (t76 + 4);
    t26 = *((unsigned int *)t75);
    t103 = (!(t26));
    t104 = (t100 && t103);
    t77 = (t86 + 4);
    t27 = *((unsigned int *)t77);
    t107 = (!(t27));
    t108 = (t104 && t107);
    if (t108 == 1)
        goto LAB56;

LAB57:    goto LAB45;

LAB47:    t109 = *((unsigned int *)t88);
    t110 = (t109 + 0);
    t111 = *((unsigned int *)t69);
    t112 = *((unsigned int *)t87);
    t113 = (t111 + t112);
    t114 = *((unsigned int *)t86);
    t115 = *((unsigned int *)t87);
    t116 = (t114 - t115);
    t117 = (t116 + 1);
    xsi_vlogvar_assign_value(t40, t31, t110, t113, t117);
    goto LAB48;

LAB50:    t45 = *((unsigned int *)t86);
    t110 = (t45 + 0);
    t46 = *((unsigned int *)t31);
    t47 = *((unsigned int *)t76);
    t113 = (t46 + t47);
    t48 = *((unsigned int *)t69);
    t49 = *((unsigned int *)t76);
    t116 = (t48 - t49);
    t117 = (t116 + 1);
    xsi_vlogvar_assign_value(t7, t6, t110, t113, t117);
    goto LAB51;

LAB53:    t45 = *((unsigned int *)t86);
    t110 = (t45 + 0);
    t46 = *((unsigned int *)t31);
    t47 = *((unsigned int *)t76);
    t113 = (t46 + t47);
    t48 = *((unsigned int *)t69);
    t49 = *((unsigned int *)t76);
    t116 = (t48 - t49);
    t117 = (t116 + 1);
    xsi_vlogvar_assign_value(t7, t6, t110, t113, t117);
    goto LAB54;

LAB56:    t45 = *((unsigned int *)t86);
    t110 = (t45 + 0);
    t46 = *((unsigned int *)t31);
    t47 = *((unsigned int *)t76);
    t113 = (t46 + t47);
    t48 = *((unsigned int *)t69);
    t49 = *((unsigned int *)t76);
    t116 = (t48 - t49);
    t117 = (t116 + 1);
    xsi_vlogvar_assign_value(t7, t6, t110, t113, t117);
    goto LAB57;

LAB59:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t30);
    t43 = (t17 - t18);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t30), t44);
    goto LAB60;

}


extern void work_m_00000000003647449665_2924402094_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Cont_42_1,(void *)Always_44_2};
	xsi_register_didat("work_m_00000000003647449665_2924402094", "isim/tb_isim_beh.exe.sim/work/m_00000000003647449665_2924402094.didat");
	xsi_register_executes(pe);
}
