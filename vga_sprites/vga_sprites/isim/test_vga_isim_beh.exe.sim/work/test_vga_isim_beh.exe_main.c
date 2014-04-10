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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003844835856_1106866723_init();
    work_m_00000000001415364637_1499793281_init();
    xilinxcorelib_ver_m_00000000001358910285_0394563633_init();
    xilinxcorelib_ver_m_00000000001687936702_1829707417_init();
    xilinxcorelib_ver_m_00000000000277421008_1675498702_init();
    xilinxcorelib_ver_m_00000000002171091130_1078753509_init();
    work_m_00000000002489990758_0596556147_init();
    work_m_00000000003512646549_1345247661_init();
    work_m_00000000000056827950_1888385349_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000056827950_1888385349");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
