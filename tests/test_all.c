#include "test.h"

int main(int argc, char* argv[MUNIT_ARRAY_PARAM(argc + 1)]) {
    MunitSuite suite = {
        "/blas/level1",
        (MunitTest[]){
            {"/test_sasum_0", test_sasum_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sasum_12345", test_sasum_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sasum_stride", test_sasum_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_saxpy_0", test_saxpy_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_saxpy_sum", test_saxpy_sum, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_saxpy_stride", test_saxpy_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_saxpy_neg_stride", test_saxpy_neg_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_scopy_all", test_scopy_all, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_scopy_stride", test_scopy_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sdot_0", test_sdot_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sdot_12345", test_sdot_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sdot_stride", test_sdot_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sdot_neg_stride", test_sdot_neg_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_snrm2_0", test_snrm2_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_snrm2_12345", test_snrm2_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_snrm2_stride", test_snrm2_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sscal_0", test_sscal_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sscal_12345", test_sscal_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sscal_stride", test_sscal_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sswap_two", test_sswap_two, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sswap_stride", test_sswap_two, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_isamax_0", test_isamax_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_isamax_12345", test_isamax_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_isamax_stride", test_isamax_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_isamax_13542", test_isamax_13542, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            
            {"/test_dasum_0", test_dasum_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dasum_12345", test_dasum_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dasum_stride", test_dasum_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_daxpy_0", test_daxpy_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_daxpy_sum", test_daxpy_sum, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_daxpy_stride", test_daxpy_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_daxpy_neg_stride", test_daxpy_neg_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dcopy_all", test_dcopy_all, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dcopy_stride", test_dcopy_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_ddot_0", test_ddot_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_ddot_12345", test_ddot_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_ddot_stride", test_ddot_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_ddot_neg_stride", test_ddot_neg_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dnrm2_0", test_dnrm2_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dnrm2_12345", test_dnrm2_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dnrm2_stride", test_dnrm2_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dscal_0", test_dscal_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dscal_12345", test_dscal_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dscal_stride", test_dscal_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dswap_two", test_dswap_two, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dswap_stride", test_dswap_two, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_idamax_0", test_isamax_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_idamax_12345", test_isamax_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_idamax_stride", test_isamax_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_idamax_13542", test_isamax_13542, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            
            {"/test_hasum_0", test_hasum_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hasum_12345", test_hasum_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hasum_stride", test_hasum_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_haxpy_0", test_haxpy_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_haxpy_sum", test_haxpy_sum, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_haxpy_stride", test_haxpy_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_haxpy_neg_stride", test_haxpy_neg_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hcopy_all", test_hcopy_all, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hcopy_stride", test_hcopy_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hdot_0", test_hdot_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hdot_12345", test_hdot_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hdot_stride", test_hdot_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hdot_neg_stride", test_hdot_neg_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hnrm2_0", test_hnrm2_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hnrm2_12345", test_hnrm2_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hnrm2_stride", test_hnrm2_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hscal_0", test_hscal_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hscal_12345", test_hscal_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hscal_stride", test_hscal_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hswap_two", test_hswap_two, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hswap_stride", test_hswap_two, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_ihamax_0", test_isamax_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_ihamax_12345", test_isamax_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_ihamax_stride", test_isamax_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_ihamax_13542", test_isamax_13542, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            
            {"/test_qasum_0", test_qasum_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qasum_12345", test_qasum_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qasum_stride", test_qasum_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qaxpy_0", test_qaxpy_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qaxpy_sum", test_qaxpy_sum, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qaxpy_stride", test_qaxpy_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qaxpy_neg_stride", test_qaxpy_neg_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qcopy_all", test_qcopy_all, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qcopy_stride", test_qcopy_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qdot_0", test_qdot_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qdot_12345", test_qdot_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qdot_stride", test_qdot_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qdot_neg_stride", test_qdot_neg_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qnrm2_0", test_qnrm2_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qnrm2_12345", test_qnrm2_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qnrm2_stride", test_qnrm2_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qscal_0", test_qscal_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qscal_12345", test_qscal_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qscal_stride", test_qscal_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qswap_two", test_qswap_two, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qswap_stride", test_qswap_two, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_iqamax_0", test_isamax_0, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_iqamax_12345", test_isamax_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_iqamax_stride", test_isamax_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_iqamax_13542", test_isamax_13542, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            
            {"/test_sgemv_0_row", test_sgemv_0_row, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sgemv_0_col", test_sgemv_0_col, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sgemv_12345", test_sgemv_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_sgemv_stride", test_sgemv_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},

            {"/test_dgemv_0_row", test_dgemv_0_row, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dgemv_0_col", test_dgemv_0_col, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dgemv_12345", test_dgemv_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_dgemv_stride", test_dgemv_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},

            {"/test_hgemv_0_row", test_hgemv_0_row, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hgemv_0_col", test_hgemv_0_col, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hgemv_12345", test_hgemv_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_hgemv_stride", test_hgemv_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},

            {"/test_qgemv_0_row", test_qgemv_0_row, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qgemv_0_col", test_qgemv_0_col, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qgemv_12345", test_qgemv_12345, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
            {"/test_qgemv_stride", test_qgemv_stride, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},

            {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}
        },
        NULL,
        1,
        MUNIT_SUITE_OPTION_NONE
    };

    return munit_suite_main(&suite, NULL, argc, argv);
}
