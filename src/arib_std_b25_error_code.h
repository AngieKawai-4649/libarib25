#ifndef ARIB_STD_B25_ERROR_CODE_H
#define ARIB_STD_B25_ERROR_CODE_H

#define ARIB_STD_B25_ERROR_INVALID_PARAM          -1
#define ARIB_STD_B25_ERROR_NO_ENOUGH_MEMORY       -2
#define ARIB_STD_B25_ERROR_NON_TS_INPUT_STREAM    -3
#define ARIB_STD_B25_ERROR_NO_PAT_IN_HEAD_16M     -4
#define ARIB_STD_B25_ERROR_NO_PMT_IN_HEAD_32M     -5
#define ARIB_STD_B25_ERROR_NO_ECM_IN_HEAD_32M     -6
#define ARIB_STD_B25_ERROR_EMPTY_B_CAS_CARD       -7
#define ARIB_STD_B25_ERROR_INVALID_B_CAS_STATUS   -8
#define ARIB_STD_B25_ERROR_ECM_PROC_FAILURE       -9
#define ARIB_STD_B25_ERROR_DECRYPT_FAILURE       -10
#define ARIB_STD_B25_ERROR_PAT_PARSE_FAILURE     -11
#define ARIB_STD_B25_ERROR_PMT_PARSE_FAILURE     -12
#define ARIB_STD_B25_ERROR_ECM_PARSE_FAILURE     -13
#define ARIB_STD_B25_ERROR_CAT_PARSE_FAILURE     -14
#define ARIB_STD_B25_ERROR_EMM_PARSE_FAILURE     -15
#define ARIB_STD_B25_ERROR_EMM_PROC_FAILURE      -16
/*****************************************************************************/
/* EMG 処理追加 2022/2/16                                                    */
/*****************************************************************************/
#define ARIB_STD_B25_ERROR_EMG_PROC_FAILURE      -17
/*****************************************************************************/


#define ARIB_STD_B25_WARN_UNPURCHASED_ECM          1
#define ARIB_STD_B25_WARN_TS_SECTION_ID_MISSMATCH  2
#define ARIB_STD_B25_WARN_BROKEN_TS_SECTION        3

#endif /* ARIB_STD_B25_ERROR_CODE_H */
