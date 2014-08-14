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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//ad/eng/users/z/a/zafar/EC551/image/vga_bsprite.v";
static int ng1[] = {0, 0};
static int ng2[] = {344, 0};
static unsigned int ng3[] = {255U, 0U};



static void Always_33_0(char *t0)
{
    char t7[8];
    char t13[8];
    char t16[8];
    char t57[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
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
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4608);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 1048U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB6:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;

LAB9:    t10 = (t0 + 1688U);
    t11 = *((char **)t10);
    t10 = (t0 + 1368U);
    t12 = *((char **)t10);
    memset(t13, 0, 8);
    t10 = (t11 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB12;

LAB11:    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t11) < *((unsigned int *)t12))
        goto LAB13;

LAB14:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t13);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t20 = (t7 + 4);
    t21 = (t13 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB16;

LAB17:
LAB18:    t48 = (t16 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t16);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);

LAB21:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB23;

LAB22:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB25;

LAB24:    *((unsigned int *)t7) = 1;

LAB25:    t8 = (t0 + 1848U);
    t9 = *((char **)t8);
    t8 = (t0 + 1528U);
    t10 = *((char **)t8);
    memset(t13, 0, 8);
    t8 = (t9 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB28;

LAB27:    t11 = (t10 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t9) < *((unsigned int *)t10))
        goto LAB29;

LAB30:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t13);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t14 = (t7 + 4);
    t15 = (t13 + 4);
    t20 = (t16 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t20);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB32;

LAB33:
LAB34:    t30 = (t16 + 4);
    t49 = *((unsigned int *)t30);
    t50 = (~(t49));
    t51 = *((unsigned int *)t16);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);

LAB37:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t4, 10, t5, 32);
    t6 = (t0 + 3208);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t7, 32, t9, 10);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t13, 0, 0, 15);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t7) = t18;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB39;

LAB38:    t26 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t26 & 1023U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1023U);
    t8 = (t0 + 3368);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t10 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    *((unsigned int *)t13) = t29;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB41;

LAB40:    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 1023U);
    t37 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t37 & 1023U);
    t38 = *((unsigned int *)t7);
    t39 = *((unsigned int *)t13);
    t42 = (t38 & t39);
    *((unsigned int *)t16) = t42;
    t14 = (t7 + 4);
    t15 = (t13 + 4);
    t20 = (t16 + 4);
    t43 = *((unsigned int *)t14);
    t44 = *((unsigned int *)t15);
    t45 = (t43 | t44);
    *((unsigned int *)t20) = t45;
    t46 = *((unsigned int *)t20);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB42;

LAB43:
LAB44:    t30 = (t16 + 4);
    t69 = *((unsigned int *)t30);
    t70 = (~(t69));
    t71 = *((unsigned int *)t16);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t3, 2, 0, 3);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t3, 5, 0, 3);

LAB47:    goto LAB2;

LAB7:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB12:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB16:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t7 + 4);
    t31 = (t13 + 4);
    t32 = *((unsigned int *)t7);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t13);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t44 & t42);
    t45 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t45 & t43);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    t47 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t47 & t43);
    goto LAB18;

LAB19:    xsi_set_current_line(35, ng0);
    t54 = (t0 + 1688U);
    t55 = *((char **)t54);
    t54 = (t0 + 1048U);
    t56 = *((char **)t54);
    memset(t57, 0, 8);
    xsi_vlog_unsigned_minus(t57, 11, t55, 11, t56, 11);
    t54 = (t0 + 3208);
    xsi_vlogvar_assign_value(t54, t57, 0, 0, 10);
    goto LAB21;

LAB23:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB25;

LAB28:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t13) = 1;
    goto LAB30;

LAB32:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t16) = (t28 | t29);
    t21 = (t7 + 4);
    t22 = (t13 + 4);
    t32 = *((unsigned int *)t7);
    t33 = (~(t32));
    t34 = *((unsigned int *)t21);
    t35 = (~(t34));
    t36 = *((unsigned int *)t13);
    t37 = (~(t36));
    t38 = *((unsigned int *)t22);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t44 & t42);
    t45 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t45 & t43);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    t47 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t47 & t43);
    goto LAB34;

LAB35:    xsi_set_current_line(40, ng0);
    t31 = (t0 + 1848U);
    t48 = *((char **)t31);
    t31 = (t0 + 1208U);
    t54 = *((char **)t31);
    memset(t57, 0, 8);
    xsi_vlog_unsigned_minus(t57, 11, t48, 11, t54, 11);
    t31 = (t0 + 3368);
    xsi_vlogvar_assign_value(t31, t57, 0, 0, 10);
    goto LAB37;

LAB39:    t19 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t19 | t23);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t24 | t25);
    goto LAB38;

LAB41:    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t13) = (t32 | t33);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t34 | t35);
    goto LAB40;

LAB42:    t49 = *((unsigned int *)t16);
    t50 = *((unsigned int *)t20);
    *((unsigned int *)t16) = (t49 | t50);
    t21 = (t7 + 4);
    t22 = (t13 + 4);
    t51 = *((unsigned int *)t7);
    t52 = (~(t51));
    t53 = *((unsigned int *)t21);
    t58 = (~(t53));
    t59 = *((unsigned int *)t13);
    t60 = (~(t59));
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t40 = (t52 & t58);
    t41 = (t60 & t62);
    t63 = (~(t40));
    t64 = (~(t41));
    t65 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t65 & t63);
    t66 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t66 & t64);
    t67 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t67 & t63);
    t68 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t68 & t64);
    goto LAB44;

LAB45:    xsi_set_current_line(47, ng0);
    t31 = ((char*)((ng3)));
    t48 = (t0 + 3048);
    xsi_vlogvar_assign_value(t48, t31, 0, 0, 2);
    t54 = (t0 + 2888);
    xsi_vlogvar_assign_value(t54, t31, 2, 0, 3);
    t55 = (t0 + 2728);
    xsi_vlogvar_assign_value(t55, t31, 5, 0, 3);
    goto LAB47;

}


extern void work_m_00000000001415364637_1499793281_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000001415364637_1499793281", "isim/test_vga_isim_beh.exe.sim/work/m_00000000001415364637_1499793281.didat");
	xsi_register_executes(pe);
}
