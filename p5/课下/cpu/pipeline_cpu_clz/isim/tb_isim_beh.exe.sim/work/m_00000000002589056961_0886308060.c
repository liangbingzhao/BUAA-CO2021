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
static const char *ng0 = "E:/Verilog_tool/p5plus/pipeline_cpu/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {31, 0};
static int ng9[] = {1, 0};



static void Always_36_0(char *t0)
{
    char t10[8];
    char t40[8];
    char t41[8];
    char t48[8];
    char t52[8];
    char t56[8];
    char t96[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    unsigned int t54;
    char *t55;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1916);
    *((int *)t2) = 1;
    t3 = (t0 + 1748);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(66, ng0);

LAB56:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);

LAB22:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = (t0 + 784U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB21;

LAB9:    xsi_set_current_line(41, ng0);

LAB23:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB21;

LAB11:    xsi_set_current_line(44, ng0);

LAB24:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB25;

LAB26:
LAB27:    t39 = (t0 + 1012);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB21;

LAB13:    xsi_set_current_line(47, ng0);

LAB28:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB29;

LAB30:
LAB31:    t39 = (t0 + 1012);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(50, ng0);

LAB32:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 784U);
    t7 = *((char **)t4);
    memset(t40, 0, 8);
    t4 = (t40 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t40) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t15 & 65535U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 65535U);
    xsi_vlogtype_concat(t10, 32, 32, 2U, t40, 16, t3, 16);
    t9 = (t0 + 1012);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(53, ng0);

LAB33:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(56, ng0);

LAB34:    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_greatereq(t10, 32, t4, 32, t7, 32);
    memset(t40, 0, 8);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t8) != 0)
        goto LAB37;

LAB38:    t21 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t21);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB39;

LAB40:    memcpy(t56, t40, 8);

LAB41:    t86 = (t56 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t56);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB21;

LAB25:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB27;

LAB29:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB31;

LAB35:    *((unsigned int *)t40) = 1;
    goto LAB38;

LAB37:    t9 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB38;

LAB39:    t22 = (t0 + 692U);
    t39 = *((char **)t22);
    t22 = (t0 + 668U);
    t42 = (t22 + 44U);
    t43 = *((char **)t42);
    t44 = (t0 + 1104);
    t45 = (t44 + 36U);
    t46 = *((char **)t45);
    xsi_vlog_generic_get_index_select_value(t41, 32, t39, t43, 2, t46, 32, 1);
    t47 = ((char*)((ng7)));
    memset(t48, 0, 8);
    t49 = (t41 + 4);
    t50 = (t47 + 4);
    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t47);
    t23 = (t19 ^ t20);
    t24 = *((unsigned int *)t49);
    t25 = *((unsigned int *)t50);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t49);
    t29 = *((unsigned int *)t50);
    t30 = (t28 | t29);
    t33 = (~(t30));
    t34 = (t27 & t33);
    if (t34 != 0)
        goto LAB45;

LAB42:    if (t30 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t48) = 1;

LAB45:    memset(t52, 0, 8);
    t53 = (t48 + 4);
    t35 = *((unsigned int *)t53);
    t36 = (~(t35));
    t37 = *((unsigned int *)t48);
    t38 = (t37 & t36);
    t54 = (t38 & 1U);
    if (t54 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t53) != 0)
        goto LAB48;

LAB49:    t57 = *((unsigned int *)t40);
    t58 = *((unsigned int *)t52);
    t59 = (t57 & t58);
    *((unsigned int *)t56) = t59;
    t60 = (t40 + 4);
    t61 = (t52 + 4);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t60);
    t64 = *((unsigned int *)t61);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB44:    t51 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t52) = 1;
    goto LAB49;

LAB48:    t55 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB49;

LAB50:    t68 = *((unsigned int *)t56);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t56) = (t68 | t69);
    t70 = (t40 + 4);
    t71 = (t52 + 4);
    t72 = *((unsigned int *)t40);
    t73 = (~(t72));
    t74 = *((unsigned int *)t70);
    t75 = (~(t74));
    t76 = *((unsigned int *)t52);
    t77 = (~(t76));
    t78 = *((unsigned int *)t71);
    t79 = (~(t78));
    t6 = (t73 & t75);
    t31 = (t77 & t79);
    t80 = (~(t6));
    t81 = (~(t31));
    t82 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t82 & t80);
    t83 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t83 & t81);
    t84 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t84 & t80);
    t85 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t85 & t81);
    goto LAB52;

LAB53:    xsi_set_current_line(56, ng0);

LAB55:    xsi_set_current_line(57, ng0);
    t92 = (t0 + 1196);
    t93 = (t92 + 36U);
    t94 = *((char **)t93);
    t95 = ((char*)((ng9)));
    memset(t96, 0, 8);
    xsi_vlog_unsigned_add(t96, 32, t94, 32, t95, 32);
    t97 = (t0 + 1196);
    xsi_vlogvar_assign_value(t97, t96, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng9)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 1104);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB34;

}


extern void work_m_00000000002589056961_0886308060_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000002589056961_0886308060", "isim/tb_isim_beh.exe.sim/work/m_00000000002589056961_0886308060.didat");
	xsi_register_executes(pe);
}
