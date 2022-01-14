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
static const char *ng0 = "E:/Verilog_tool/p6plus/pipeline/MD.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {5, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {10, 0};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {1, 0};



static void Always_43_0(char *t0)
{
    char t15[16];
    char t17[16];
    char t18[16];
    char t19[8];
    char t20[8];
    char t21[8];
    char t22[16];
    char t25[16];
    char t27[16];
    char t28[16];
    char t59[8];
    char t67[8];
    char t98[8];
    char t113[8];
    char t121[8];
    char t163[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t16;
    char *t23;
    char *t24;
    char *t26;
    char *t29;
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
    unsigned int t43;
    unsigned int t44;
    char *t45;
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
    char *t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    int t145;
    int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    char *t164;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5104);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t4 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t11);
    t30 = (t9 ^ t10);
    t31 = (t8 | t30);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t11);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB43;

LAB40:    if (t34 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t19) = 1;

LAB43:    memset(t20, 0, 8);
    t14 = (t19 + 4);
    t37 = *((unsigned int *)t14);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t14) != 0)
        goto LAB46;

LAB47:    t23 = (t20 + 4);
    t42 = *((unsigned int *)t20);
    t43 = *((unsigned int *)t23);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB48;

LAB49:    memcpy(t67, t20, 8);

LAB50:    memset(t98, 0, 8);
    t99 = (t67 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t67);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t99) != 0)
        goto LAB64;

LAB65:    t106 = (t98 + 4);
    t107 = *((unsigned int *)t98);
    t108 = *((unsigned int *)t106);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB66;

LAB67:    memcpy(t121, t98, 8);

LAB68:    t153 = (t121 + 4);
    t154 = *((unsigned int *)t153);
    t155 = (~(t154));
    t156 = *((unsigned int *)t121);
    t157 = (t156 & t155);
    t158 = (t157 != 0);
    if (t158 > 0)
        goto LAB76;

LAB77:
LAB78:
LAB39:
LAB36:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(75, ng0);

LAB33:
LAB27:    goto LAB12;

LAB15:    xsi_set_current_line(53, ng0);

LAB28:    xsi_set_current_line(54, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = (t0 + 1688U);
    t14 = *((char **)t11);
    xsi_vlog_unsigned_multiply(t15, 64, t12, 32, t14, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 32, 0LL);
    t16 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t16, t15, 32, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB27;

LAB17:    xsi_set_current_line(57, ng0);

LAB29:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    xsi_vlogtype_sign_extend(t15, 64, t4, 32);
    t3 = (t0 + 1688U);
    t11 = *((char **)t3);
    xsi_vlogtype_sign_extend(t17, 64, t11, 32);
    xsi_vlog_signed_multiply(t18, 64, t15, 64, t17, 64);
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t18, 0, 0, 32, 0LL);
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t18, 32, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB27;

LAB19:    xsi_set_current_line(61, ng0);

LAB30:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t11 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_mod(t19, 32, t4, 32, t11, 32);
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_divide(t19, 32, t3, 32, t4, 32);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(66, ng0);

LAB31:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t11 = *((char **)t3);
    memset(t21, 0, 8);
    xsi_vlog_signed_mod(t21, 32, t4, 32, t11, 32);
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    memset(t21, 0, 8);
    xsi_vlog_signed_divide(t21, 32, t3, 32, t4, 32);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(71, ng0);

LAB32:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2888);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 2728);
    t14 = (t12 + 56U);
    t16 = *((char **)t14);
    xsi_vlogtype_concat(t18, 64, 64, 2U, t16, 32, t11, 32);
    t23 = (t0 + 1528U);
    t24 = *((char **)t23);
    xsi_vlogtype_sign_extend(t22, 64, t24, 32);
    t23 = (t0 + 1688U);
    t26 = *((char **)t23);
    xsi_vlogtype_sign_extend(t25, 64, t26, 32);
    xsi_vlog_signed_multiply(t27, 64, t22, 64, t25, 64);
    xsi_vlog_signed_minus(t28, 64, t18, 64, t27, 64);
    t23 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t23, t28, 0, 0, 32, 0LL);
    t29 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t29, t28, 32, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB27;

LAB34:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t11, 0, 0, 32, 0LL);
    goto LAB36;

LAB37:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1528U);
    t11 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t11, 0, 0, 32, 0LL);
    goto LAB39;

LAB42:    t12 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t20) = 1;
    goto LAB47;

LAB46:    t16 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB47;

LAB48:    t24 = (t0 + 1368U);
    t26 = *((char **)t24);
    t24 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t29 = (t26 + 4);
    t45 = (t24 + 4);
    t46 = *((unsigned int *)t26);
    t47 = *((unsigned int *)t24);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t29);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t29);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB54;

LAB51:    if (t55 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t21) = 1;

LAB54:    memset(t59, 0, 8);
    t60 = (t21 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t21);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t60) != 0)
        goto LAB57;

LAB58:    t68 = *((unsigned int *)t20);
    t69 = *((unsigned int *)t59);
    t70 = (t68 & t69);
    *((unsigned int *)t67) = t70;
    t71 = (t20 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t58 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t59) = 1;
    goto LAB58;

LAB57:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB58;

LAB59:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t20 + 4);
    t82 = (t59 + 4);
    t83 = *((unsigned int *)t20);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t59);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t13 = (t84 & t86);
    t91 = (t88 & t90);
    t92 = (~(t13));
    t93 = (~(t91));
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    t95 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t95 & t93);
    t96 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t96 & t92);
    t97 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t97 & t93);
    goto LAB61;

LAB62:    *((unsigned int *)t98) = 1;
    goto LAB65;

LAB64:    t105 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB65;

LAB66:    t110 = (t0 + 3048);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memset(t113, 0, 8);
    t114 = (t112 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t112);
    t118 = (t117 & t116);
    t119 = (t118 & 31U);
    if (t119 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t114) != 0)
        goto LAB71;

LAB72:    t122 = *((unsigned int *)t98);
    t123 = *((unsigned int *)t113);
    t124 = (t122 & t123);
    *((unsigned int *)t121) = t124;
    t125 = (t98 + 4);
    t126 = (t113 + 4);
    t127 = (t121 + 4);
    t128 = *((unsigned int *)t125);
    t129 = *((unsigned int *)t126);
    t130 = (t128 | t129);
    *((unsigned int *)t127) = t130;
    t131 = *((unsigned int *)t127);
    t132 = (t131 != 0);
    if (t132 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB68;

LAB69:    *((unsigned int *)t113) = 1;
    goto LAB72;

LAB71:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB72;

LAB73:    t133 = *((unsigned int *)t121);
    t134 = *((unsigned int *)t127);
    *((unsigned int *)t121) = (t133 | t134);
    t135 = (t98 + 4);
    t136 = (t113 + 4);
    t137 = *((unsigned int *)t98);
    t138 = (~(t137));
    t139 = *((unsigned int *)t135);
    t140 = (~(t139));
    t141 = *((unsigned int *)t113);
    t142 = (~(t141));
    t143 = *((unsigned int *)t136);
    t144 = (~(t143));
    t145 = (t138 & t140);
    t146 = (t142 & t144);
    t147 = (~(t145));
    t148 = (~(t146));
    t149 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t149 & t147);
    t150 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t150 & t148);
    t151 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t151 & t147);
    t152 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t152 & t148);
    goto LAB75;

LAB76:    xsi_set_current_line(81, ng0);
    t159 = (t0 + 3048);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    t162 = ((char*)((ng9)));
    memset(t163, 0, 8);
    xsi_vlog_unsigned_minus(t163, 32, t161, 5, t162, 32);
    t164 = (t0 + 3048);
    xsi_vlogvar_assign_value(t164, t163, 0, 0, 5);
    goto LAB78;

}

static void Cont_84_1(char *t0)
{
    char t6[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 5216);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 5120);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_85_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5136);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000003547859446_0105961027_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Cont_84_1,(void *)Always_85_2};
	xsi_register_didat("work_m_00000000003547859446_0105961027", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003547859446_0105961027.didat");
	xsi_register_executes(pe);
}
