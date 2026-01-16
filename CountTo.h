#ifndef MPT_COUNT_TO_H
#define MPT_COUNT_TO_H

#include "./Miscellaneous.h"

#define MPT_COUNT_TO(num, prefix, suffix) \
    INTERNAL_MPT_COMPOSE25 \
    ( \
        INTERNAL_MPT_COMPOSE26 \
        ( \
            INTERNAL_MPT_SELECT10, \
            ( MPT_COUNT_TO, num ) \
        ), \
        (prefix, suffix) \
    )

#define MPT_COUNT_TO_MINUS_1(num, prefix, suffix) \
    INTERNAL_MPT_COMPOSE27 \
    ( \
        INTERNAL_MPT_COMPOSE28 \
        ( \
            INTERNAL_MPT_SELECT11, \
            ( INTERNAL_MPT_COUNT_TO_MINUS_1, num ) \
        ), \
        (prefix, suffix) \
    )

#define MPT_COUNT_TO_0(prefix, suffix)
#define MPT_COUNT_TO_0_(prefix, suffix)

#define MPT_REPEAT(num, delimiter, ...) \
    INTERNAL_MPT_COMPOSE29 \
    ( \
        INTERNAL_MPT_COMPOSE30 \
        ( \
            INTERNAL_MPT_SELECT12, \
            ( INTERNAL_MPT_EVAL, num ) \
        ), \
        (delimiter, __VA_ARGS__) \
    )

#define MPT_REPEAT_WITH_COMMA(num, ...) \
    INTERNAL_MPT_COMPOSE31 \
    ( \
        INTERNAL_MPT_COMPOSE32 \
        ( \
            INTERNAL_MPT_SELECT13, \
            ( INTERNAL_MPT_EVAL_WITH_COMMA, num ) \
        ), \
        (__VA_ARGS__) \
    )

#define MPT_COUNT_TO_1_(prefix, suffix) \
    prefix ## 1 ## suffix

#define MPT_COUNT_TO_1(prefix, suffix) \
    MPT_COUNT_TO_1_(prefix, suffix) \

#define MPT_COUNT_TO_1_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_0_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_1(prefix, suffix) \
    MPT_COUNT_TO_0_(prefix, suffix)

#define INTERNAL_MPT_EVAL_1(delimiter, ...) __VA_ARGS__
#define INTERNAL_MPT_EVAL_WITH_COMMA_1(...) __VA_ARGS__

#define MPT_COUNT_TO_2_(prefix, suffix) \
    MPT_COUNT_TO_1_(prefix, suffix), prefix ## 2 ## suffix

#define MPT_COUNT_TO_2(prefix, suffix) \
    MPT_COUNT_TO_2_(prefix, suffix) 

#define MPT_COUNT_TO_2_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_1_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_2(prefix, suffix) \
    MPT_COUNT_TO_1_(prefix, suffix)

#define INTERNAL_MPT_EVAL_2(delimiter, ...) \
    INTERNAL_MPT_EVAL_1(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_2(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_1(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_3_(prefix, suffix) \
    MPT_COUNT_TO_2_(prefix, suffix), prefix ## 3 ## suffix

#define MPT_COUNT_TO_3(prefix, suffix) \
    MPT_COUNT_TO_3_(prefix, suffix) 

#define MPT_COUNT_TO_3_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_2_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_3(prefix, suffix) \
    MPT_COUNT_TO_2_(prefix, suffix)

#define INTERNAL_MPT_EVAL_3(delimiter, ...) \
    INTERNAL_MPT_EVAL_2(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_3(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_2(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_4_(prefix, suffix) \
    MPT_COUNT_TO_3_(prefix, suffix), prefix ## 4 ## suffix

#define MPT_COUNT_TO_4(prefix, suffix) \
    MPT_COUNT_TO_4_(prefix, suffix) 

#define MPT_COUNT_TO_4_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_3_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_4(prefix, suffix) \
    MPT_COUNT_TO_3_(prefix, suffix)

#define INTERNAL_MPT_EVAL_4(delimiter, ...) \
    INTERNAL_MPT_EVAL_3(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_4(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_3(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_5_(prefix, suffix) \
    MPT_COUNT_TO_4_(prefix, suffix), prefix ## 5 ## suffix

#define MPT_COUNT_TO_5(prefix, suffix) \
    MPT_COUNT_TO_5_(prefix, suffix) 

#define MPT_COUNT_TO_5_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_4_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_5(prefix, suffix) \
    MPT_COUNT_TO_4_(prefix, suffix)

#define INTERNAL_MPT_EVAL_5(delimiter, ...) \
    INTERNAL_MPT_EVAL_4(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_5(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_4(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_6_(prefix, suffix) \
    MPT_COUNT_TO_5_(prefix, suffix), prefix ## 6 ## suffix

#define MPT_COUNT_TO_6(prefix, suffix) \
    MPT_COUNT_TO_6_(prefix, suffix) 

#define MPT_COUNT_TO_6_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_5_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_6(prefix, suffix) \
    MPT_COUNT_TO_5_(prefix, suffix)

#define INTERNAL_MPT_EVAL_6(delimiter, ...) \
    INTERNAL_MPT_EVAL_5(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_6(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_5(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_7_(prefix, suffix) \
    MPT_COUNT_TO_6_(prefix, suffix), prefix ## 7 ## suffix

#define MPT_COUNT_TO_7(prefix, suffix) \
    MPT_COUNT_TO_7_(prefix, suffix) 

#define MPT_COUNT_TO_7_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_6_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_7(prefix, suffix) \
    MPT_COUNT_TO_6_(prefix, suffix)

#define INTERNAL_MPT_EVAL_7(delimiter, ...) \
    INTERNAL_MPT_EVAL_6(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_7(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_6(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_8_(prefix, suffix) \
    MPT_COUNT_TO_7_(prefix, suffix), prefix ## 8 ## suffix

#define MPT_COUNT_TO_8(prefix, suffix) \
    MPT_COUNT_TO_8_(prefix, suffix) 

#define MPT_COUNT_TO_8_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_7_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_8(prefix, suffix) \
    MPT_COUNT_TO_7_(prefix, suffix)

#define INTERNAL_MPT_EVAL_8(delimiter, ...) \
    INTERNAL_MPT_EVAL_7(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_8(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_7(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_9_(prefix, suffix) \
    MPT_COUNT_TO_8_(prefix, suffix), prefix ## 9 ## suffix

#define MPT_COUNT_TO_9(prefix, suffix) \
    MPT_COUNT_TO_9_(prefix, suffix) 

#define MPT_COUNT_TO_9_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_8_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_9(prefix, suffix) \
    MPT_COUNT_TO_8_(prefix, suffix)

#define INTERNAL_MPT_EVAL_9(delimiter, ...) \
    INTERNAL_MPT_EVAL_8(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_9(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_8(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_10_(prefix, suffix) \
    MPT_COUNT_TO_9_(prefix, suffix), prefix ## 10 ## suffix

#define MPT_COUNT_TO_10(prefix, suffix) \
    MPT_COUNT_TO_10_(prefix, suffix) 

#define MPT_COUNT_TO_10_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_9_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_10(prefix, suffix) \
    MPT_COUNT_TO_9_(prefix, suffix)

#define INTERNAL_MPT_EVAL_10(delimiter, ...) \
    INTERNAL_MPT_EVAL_9(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_10(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_9(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_11_(prefix, suffix) \
    MPT_COUNT_TO_10_(prefix, suffix), prefix ## 11 ## suffix

#define MPT_COUNT_TO_11(prefix, suffix) \
    MPT_COUNT_TO_11_(prefix, suffix) 

#define MPT_COUNT_TO_11_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_10_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_11(prefix, suffix) \
    MPT_COUNT_TO_10_(prefix, suffix)

#define INTERNAL_MPT_EVAL_11(delimiter, ...) \
    INTERNAL_MPT_EVAL_10(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_11(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_10(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_12_(prefix, suffix) \
    MPT_COUNT_TO_11_(prefix, suffix), prefix ## 12 ## suffix

#define MPT_COUNT_TO_12(prefix, suffix) \
    MPT_COUNT_TO_12_(prefix, suffix) 

#define MPT_COUNT_TO_12_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_11_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_12(prefix, suffix) \
    MPT_COUNT_TO_11_(prefix, suffix)

#define INTERNAL_MPT_EVAL_12(delimiter, ...) \
    INTERNAL_MPT_EVAL_11(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_12(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_11(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_13_(prefix, suffix) \
    MPT_COUNT_TO_12_(prefix, suffix), prefix ## 13 ## suffix

#define MPT_COUNT_TO_13(prefix, suffix) \
    MPT_COUNT_TO_13_(prefix, suffix) 

#define MPT_COUNT_TO_13_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_12_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_13(prefix, suffix) \
    MPT_COUNT_TO_12_(prefix, suffix)

#define INTERNAL_MPT_EVAL_13(delimiter, ...) \
    INTERNAL_MPT_EVAL_12(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_13(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_12(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_14_(prefix, suffix) \
    MPT_COUNT_TO_13_(prefix, suffix), prefix ## 14 ## suffix

#define MPT_COUNT_TO_14(prefix, suffix) \
    MPT_COUNT_TO_14_(prefix, suffix) 

#define MPT_COUNT_TO_14_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_13_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_14(prefix, suffix) \
    MPT_COUNT_TO_13_(prefix, suffix)

#define INTERNAL_MPT_EVAL_14(delimiter, ...) \
    INTERNAL_MPT_EVAL_13(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_14(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_13(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_15_(prefix, suffix) \
    MPT_COUNT_TO_14_(prefix, suffix), prefix ## 15 ## suffix

#define MPT_COUNT_TO_15(prefix, suffix) \
    MPT_COUNT_TO_15_(prefix, suffix) 

#define MPT_COUNT_TO_15_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_14_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_15(prefix, suffix) \
    MPT_COUNT_TO_14_(prefix, suffix)

#define INTERNAL_MPT_EVAL_15(delimiter, ...) \
    INTERNAL_MPT_EVAL_14(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_15(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_14(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_16_(prefix, suffix) \
    MPT_COUNT_TO_15_(prefix, suffix), prefix ## 16 ## suffix

#define MPT_COUNT_TO_16(prefix, suffix) \
    MPT_COUNT_TO_16_(prefix, suffix) 

#define MPT_COUNT_TO_16_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_15_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_16(prefix, suffix) \
    MPT_COUNT_TO_15_(prefix, suffix)

#define INTERNAL_MPT_EVAL_16(delimiter, ...) \
    INTERNAL_MPT_EVAL_15(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_16(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_15(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_17_(prefix, suffix) \
    MPT_COUNT_TO_16_(prefix, suffix), prefix ## 17 ## suffix

#define MPT_COUNT_TO_17(prefix, suffix) \
    MPT_COUNT_TO_17_(prefix, suffix) 

#define MPT_COUNT_TO_17_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_16_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_17(prefix, suffix) \
    MPT_COUNT_TO_16_(prefix, suffix)

#define INTERNAL_MPT_EVAL_17(delimiter, ...) \
    INTERNAL_MPT_EVAL_16(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_17(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_16(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_18_(prefix, suffix) \
    MPT_COUNT_TO_17_(prefix, suffix), prefix ## 18 ## suffix

#define MPT_COUNT_TO_18(prefix, suffix) \
    MPT_COUNT_TO_18_(prefix, suffix) 

#define MPT_COUNT_TO_18_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_17_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_18(prefix, suffix) \
    MPT_COUNT_TO_17_(prefix, suffix)

#define INTERNAL_MPT_EVAL_18(delimiter, ...) \
    INTERNAL_MPT_EVAL_17(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_18(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_17(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_19_(prefix, suffix) \
    MPT_COUNT_TO_18_(prefix, suffix), prefix ## 19 ## suffix

#define MPT_COUNT_TO_19(prefix, suffix) \
    MPT_COUNT_TO_19_(prefix, suffix) 

#define MPT_COUNT_TO_19_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_18_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_19(prefix, suffix) \
    MPT_COUNT_TO_18_(prefix, suffix)

#define INTERNAL_MPT_EVAL_19(delimiter, ...) \
    INTERNAL_MPT_EVAL_18(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_19(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_18(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_20_(prefix, suffix) \
    MPT_COUNT_TO_19_(prefix, suffix), prefix ## 20 ## suffix

#define MPT_COUNT_TO_20(prefix, suffix) \
    MPT_COUNT_TO_20_(prefix, suffix) 

#define MPT_COUNT_TO_20_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_19_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_20(prefix, suffix) \
    MPT_COUNT_TO_19_(prefix, suffix)

#define INTERNAL_MPT_EVAL_20(delimiter, ...) \
    INTERNAL_MPT_EVAL_19(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_20(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_19(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_21_(prefix, suffix) \
    MPT_COUNT_TO_20_(prefix, suffix), prefix ## 21 ## suffix

#define MPT_COUNT_TO_21(prefix, suffix) \
    MPT_COUNT_TO_21_(prefix, suffix) 

#define MPT_COUNT_TO_21_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_20_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_21(prefix, suffix) \
    MPT_COUNT_TO_20_(prefix, suffix)

#define INTERNAL_MPT_EVAL_21(delimiter, ...) \
    INTERNAL_MPT_EVAL_20(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_21(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_20(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_22_(prefix, suffix) \
    MPT_COUNT_TO_21_(prefix, suffix), prefix ## 22 ## suffix

#define MPT_COUNT_TO_22(prefix, suffix) \
    MPT_COUNT_TO_22_(prefix, suffix) 

#define MPT_COUNT_TO_22_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_21_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_22(prefix, suffix) \
    MPT_COUNT_TO_21_(prefix, suffix)

#define INTERNAL_MPT_EVAL_22(delimiter, ...) \
    INTERNAL_MPT_EVAL_21(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_22(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_21(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_23_(prefix, suffix) \
    MPT_COUNT_TO_22_(prefix, suffix), prefix ## 23 ## suffix

#define MPT_COUNT_TO_23(prefix, suffix) \
    MPT_COUNT_TO_23_(prefix, suffix) 

#define MPT_COUNT_TO_23_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_22_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_23(prefix, suffix) \
    MPT_COUNT_TO_22_(prefix, suffix)

#define INTERNAL_MPT_EVAL_23(delimiter, ...) \
    INTERNAL_MPT_EVAL_22(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_23(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_22(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_24_(prefix, suffix) \
    MPT_COUNT_TO_23_(prefix, suffix), prefix ## 24 ## suffix

#define MPT_COUNT_TO_24(prefix, suffix) \
    MPT_COUNT_TO_24_(prefix, suffix) 

#define MPT_COUNT_TO_24_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_23_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_24(prefix, suffix) \
    MPT_COUNT_TO_23_(prefix, suffix)

#define INTERNAL_MPT_EVAL_24(delimiter, ...) \
    INTERNAL_MPT_EVAL_23(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_24(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_23(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_25_(prefix, suffix) \
    MPT_COUNT_TO_24_(prefix, suffix), prefix ## 25 ## suffix

#define MPT_COUNT_TO_25(prefix, suffix) \
    MPT_COUNT_TO_25_(prefix, suffix) 

#define MPT_COUNT_TO_25_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_24_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_25(prefix, suffix) \
    MPT_COUNT_TO_24_(prefix, suffix)

#define INTERNAL_MPT_EVAL_25(delimiter, ...) \
    INTERNAL_MPT_EVAL_24(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_25(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_24(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_26_(prefix, suffix) \
    MPT_COUNT_TO_25_(prefix, suffix), prefix ## 26 ## suffix

#define MPT_COUNT_TO_26(prefix, suffix) \
    MPT_COUNT_TO_26_(prefix, suffix) 

#define MPT_COUNT_TO_26_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_25_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_26(prefix, suffix) \
    MPT_COUNT_TO_25_(prefix, suffix)

#define INTERNAL_MPT_EVAL_26(delimiter, ...) \
    INTERNAL_MPT_EVAL_25(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_26(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_25(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_27_(prefix, suffix) \
    MPT_COUNT_TO_26_(prefix, suffix), prefix ## 27 ## suffix

#define MPT_COUNT_TO_27(prefix, suffix) \
    MPT_COUNT_TO_27_(prefix, suffix) 

#define MPT_COUNT_TO_27_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_26_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_27(prefix, suffix) \
    MPT_COUNT_TO_26_(prefix, suffix)

#define INTERNAL_MPT_EVAL_27(delimiter, ...) \
    INTERNAL_MPT_EVAL_26(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_27(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_26(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_28_(prefix, suffix) \
    MPT_COUNT_TO_27_(prefix, suffix), prefix ## 28 ## suffix

#define MPT_COUNT_TO_28(prefix, suffix) \
    MPT_COUNT_TO_28_(prefix, suffix) 

#define MPT_COUNT_TO_28_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_27_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_28(prefix, suffix) \
    MPT_COUNT_TO_27_(prefix, suffix)

#define INTERNAL_MPT_EVAL_28(delimiter, ...) \
    INTERNAL_MPT_EVAL_27(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_28(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_27(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_29_(prefix, suffix) \
    MPT_COUNT_TO_28_(prefix, suffix), prefix ## 29 ## suffix

#define MPT_COUNT_TO_29(prefix, suffix) \
    MPT_COUNT_TO_29_(prefix, suffix) 

#define MPT_COUNT_TO_29_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_28_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_29(prefix, suffix) \
    MPT_COUNT_TO_28_(prefix, suffix)

#define INTERNAL_MPT_EVAL_29(delimiter, ...) \
    INTERNAL_MPT_EVAL_28(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_29(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_28(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_30_(prefix, suffix) \
    MPT_COUNT_TO_29_(prefix, suffix), prefix ## 30 ## suffix

#define MPT_COUNT_TO_30(prefix, suffix) \
    MPT_COUNT_TO_30_(prefix, suffix) 

#define MPT_COUNT_TO_30_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_29_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_30(prefix, suffix) \
    MPT_COUNT_TO_29_(prefix, suffix)

#define INTERNAL_MPT_EVAL_30(delimiter, ...) \
    INTERNAL_MPT_EVAL_29(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_30(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_29(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_31_(prefix, suffix) \
    MPT_COUNT_TO_30_(prefix, suffix), prefix ## 31 ## suffix

#define MPT_COUNT_TO_31(prefix, suffix) \
    MPT_COUNT_TO_31_(prefix, suffix) 

#define MPT_COUNT_TO_31_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_30_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_31(prefix, suffix) \
    MPT_COUNT_TO_30_(prefix, suffix)

#define INTERNAL_MPT_EVAL_31(delimiter, ...) \
    INTERNAL_MPT_EVAL_30(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_31(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_30(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_32_(prefix, suffix) \
    MPT_COUNT_TO_31_(prefix, suffix), prefix ## 32 ## suffix

#define MPT_COUNT_TO_32(prefix, suffix) \
    MPT_COUNT_TO_32_(prefix, suffix) 

#define MPT_COUNT_TO_32_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_31_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_32(prefix, suffix) \
    MPT_COUNT_TO_31_(prefix, suffix)

#define INTERNAL_MPT_EVAL_32(delimiter, ...) \
    INTERNAL_MPT_EVAL_31(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_32(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_31(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_33_(prefix, suffix) \
    MPT_COUNT_TO_32_(prefix, suffix), prefix ## 33 ## suffix

#define MPT_COUNT_TO_33(prefix, suffix) \
    MPT_COUNT_TO_33_(prefix, suffix) 

#define MPT_COUNT_TO_33_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_32_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_33(prefix, suffix) \
    MPT_COUNT_TO_32_(prefix, suffix)

#define INTERNAL_MPT_EVAL_33(delimiter, ...) \
    INTERNAL_MPT_EVAL_32(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_33(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_32(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_34_(prefix, suffix) \
    MPT_COUNT_TO_33_(prefix, suffix), prefix ## 34 ## suffix

#define MPT_COUNT_TO_34(prefix, suffix) \
    MPT_COUNT_TO_34_(prefix, suffix) 

#define MPT_COUNT_TO_34_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_33_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_34(prefix, suffix) \
    MPT_COUNT_TO_33_(prefix, suffix)

#define INTERNAL_MPT_EVAL_34(delimiter, ...) \
    INTERNAL_MPT_EVAL_33(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_34(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_33(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_35_(prefix, suffix) \
    MPT_COUNT_TO_34_(prefix, suffix), prefix ## 35 ## suffix

#define MPT_COUNT_TO_35(prefix, suffix) \
    MPT_COUNT_TO_35_(prefix, suffix) 

#define MPT_COUNT_TO_35_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_34_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_35(prefix, suffix) \
    MPT_COUNT_TO_34_(prefix, suffix)

#define INTERNAL_MPT_EVAL_35(delimiter, ...) \
    INTERNAL_MPT_EVAL_34(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_35(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_34(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_36_(prefix, suffix) \
    MPT_COUNT_TO_35_(prefix, suffix), prefix ## 36 ## suffix

#define MPT_COUNT_TO_36(prefix, suffix) \
    MPT_COUNT_TO_36_(prefix, suffix) 

#define MPT_COUNT_TO_36_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_35_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_36(prefix, suffix) \
    MPT_COUNT_TO_35_(prefix, suffix)

#define INTERNAL_MPT_EVAL_36(delimiter, ...) \
    INTERNAL_MPT_EVAL_35(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_36(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_35(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_37_(prefix, suffix) \
    MPT_COUNT_TO_36_(prefix, suffix), prefix ## 37 ## suffix

#define MPT_COUNT_TO_37(prefix, suffix) \
    MPT_COUNT_TO_37_(prefix, suffix) 

#define MPT_COUNT_TO_37_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_36_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_37(prefix, suffix) \
    MPT_COUNT_TO_36_(prefix, suffix)

#define INTERNAL_MPT_EVAL_37(delimiter, ...) \
    INTERNAL_MPT_EVAL_36(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_37(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_36(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_38_(prefix, suffix) \
    MPT_COUNT_TO_37_(prefix, suffix), prefix ## 38 ## suffix

#define MPT_COUNT_TO_38(prefix, suffix) \
    MPT_COUNT_TO_38_(prefix, suffix) 

#define MPT_COUNT_TO_38_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_37_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_38(prefix, suffix) \
    MPT_COUNT_TO_37_(prefix, suffix)

#define INTERNAL_MPT_EVAL_38(delimiter, ...) \
    INTERNAL_MPT_EVAL_37(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_38(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_37(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_39_(prefix, suffix) \
    MPT_COUNT_TO_38_(prefix, suffix), prefix ## 39 ## suffix

#define MPT_COUNT_TO_39(prefix, suffix) \
    MPT_COUNT_TO_39_(prefix, suffix) 

#define MPT_COUNT_TO_39_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_38_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_39(prefix, suffix) \
    MPT_COUNT_TO_38_(prefix, suffix)

#define INTERNAL_MPT_EVAL_39(delimiter, ...) \
    INTERNAL_MPT_EVAL_38(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_39(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_38(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_40_(prefix, suffix) \
    MPT_COUNT_TO_39_(prefix, suffix), prefix ## 40 ## suffix

#define MPT_COUNT_TO_40(prefix, suffix) \
    MPT_COUNT_TO_40_(prefix, suffix) 

#define MPT_COUNT_TO_40_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_39_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_40(prefix, suffix) \
    MPT_COUNT_TO_39_(prefix, suffix)

#define INTERNAL_MPT_EVAL_40(delimiter, ...) \
    INTERNAL_MPT_EVAL_39(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_40(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_39(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_41_(prefix, suffix) \
    MPT_COUNT_TO_40_(prefix, suffix), prefix ## 41 ## suffix

#define MPT_COUNT_TO_41(prefix, suffix) \
    MPT_COUNT_TO_41_(prefix, suffix) 

#define MPT_COUNT_TO_41_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_40_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_41(prefix, suffix) \
    MPT_COUNT_TO_40_(prefix, suffix)

#define INTERNAL_MPT_EVAL_41(delimiter, ...) \
    INTERNAL_MPT_EVAL_40(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_41(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_40(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_42_(prefix, suffix) \
    MPT_COUNT_TO_41_(prefix, suffix), prefix ## 42 ## suffix

#define MPT_COUNT_TO_42(prefix, suffix) \
    MPT_COUNT_TO_42_(prefix, suffix) 

#define MPT_COUNT_TO_42_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_41_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_42(prefix, suffix) \
    MPT_COUNT_TO_41_(prefix, suffix)

#define INTERNAL_MPT_EVAL_42(delimiter, ...) \
    INTERNAL_MPT_EVAL_41(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_42(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_41(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_43_(prefix, suffix) \
    MPT_COUNT_TO_42_(prefix, suffix), prefix ## 43 ## suffix

#define MPT_COUNT_TO_43(prefix, suffix) \
    MPT_COUNT_TO_43_(prefix, suffix) 

#define MPT_COUNT_TO_43_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_42_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_43(prefix, suffix) \
    MPT_COUNT_TO_42_(prefix, suffix)

#define INTERNAL_MPT_EVAL_43(delimiter, ...) \
    INTERNAL_MPT_EVAL_42(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_43(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_42(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_44_(prefix, suffix) \
    MPT_COUNT_TO_43_(prefix, suffix), prefix ## 44 ## suffix

#define MPT_COUNT_TO_44(prefix, suffix) \
    MPT_COUNT_TO_44_(prefix, suffix) 

#define MPT_COUNT_TO_44_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_43_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_44(prefix, suffix) \
    MPT_COUNT_TO_43_(prefix, suffix)

#define INTERNAL_MPT_EVAL_44(delimiter, ...) \
    INTERNAL_MPT_EVAL_43(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_44(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_43(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_45_(prefix, suffix) \
    MPT_COUNT_TO_44_(prefix, suffix), prefix ## 45 ## suffix

#define MPT_COUNT_TO_45(prefix, suffix) \
    MPT_COUNT_TO_45_(prefix, suffix) 

#define MPT_COUNT_TO_45_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_44_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_45(prefix, suffix) \
    MPT_COUNT_TO_44_(prefix, suffix)

#define INTERNAL_MPT_EVAL_45(delimiter, ...) \
    INTERNAL_MPT_EVAL_44(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_45(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_44(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_46_(prefix, suffix) \
    MPT_COUNT_TO_45_(prefix, suffix), prefix ## 46 ## suffix

#define MPT_COUNT_TO_46(prefix, suffix) \
    MPT_COUNT_TO_46_(prefix, suffix) 

#define MPT_COUNT_TO_46_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_45_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_46(prefix, suffix) \
    MPT_COUNT_TO_45_(prefix, suffix)

#define INTERNAL_MPT_EVAL_46(delimiter, ...) \
    INTERNAL_MPT_EVAL_45(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_46(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_45(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_47_(prefix, suffix) \
    MPT_COUNT_TO_46_(prefix, suffix), prefix ## 47 ## suffix

#define MPT_COUNT_TO_47(prefix, suffix) \
    MPT_COUNT_TO_47_(prefix, suffix) 

#define MPT_COUNT_TO_47_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_46_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_47(prefix, suffix) \
    MPT_COUNT_TO_46_(prefix, suffix)

#define INTERNAL_MPT_EVAL_47(delimiter, ...) \
    INTERNAL_MPT_EVAL_46(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_47(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_46(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_48_(prefix, suffix) \
    MPT_COUNT_TO_47_(prefix, suffix), prefix ## 48 ## suffix

#define MPT_COUNT_TO_48(prefix, suffix) \
    MPT_COUNT_TO_48_(prefix, suffix) 

#define MPT_COUNT_TO_48_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_47_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_48(prefix, suffix) \
    MPT_COUNT_TO_47_(prefix, suffix)

#define INTERNAL_MPT_EVAL_48(delimiter, ...) \
    INTERNAL_MPT_EVAL_47(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_48(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_47(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_49_(prefix, suffix) \
    MPT_COUNT_TO_48_(prefix, suffix), prefix ## 49 ## suffix

#define MPT_COUNT_TO_49(prefix, suffix) \
    MPT_COUNT_TO_49_(prefix, suffix) 

#define MPT_COUNT_TO_49_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_48_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_49(prefix, suffix) \
    MPT_COUNT_TO_48_(prefix, suffix)

#define INTERNAL_MPT_EVAL_49(delimiter, ...) \
    INTERNAL_MPT_EVAL_48(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_49(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_48(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_50_(prefix, suffix) \
    MPT_COUNT_TO_49_(prefix, suffix), prefix ## 50 ## suffix

#define MPT_COUNT_TO_50(prefix, suffix) \
    MPT_COUNT_TO_50_(prefix, suffix) 

#define MPT_COUNT_TO_50_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_49_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_50(prefix, suffix) \
    MPT_COUNT_TO_49_(prefix, suffix)

#define INTERNAL_MPT_EVAL_50(delimiter, ...) \
    INTERNAL_MPT_EVAL_49(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_50(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_49(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_51_(prefix, suffix) \
    MPT_COUNT_TO_50_(prefix, suffix), prefix ## 51 ## suffix

#define MPT_COUNT_TO_51(prefix, suffix) \
    MPT_COUNT_TO_51_(prefix, suffix) 

#define MPT_COUNT_TO_51_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_50_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_51(prefix, suffix) \
    MPT_COUNT_TO_50_(prefix, suffix)

#define INTERNAL_MPT_EVAL_51(delimiter, ...) \
    INTERNAL_MPT_EVAL_50(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_51(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_50(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_52_(prefix, suffix) \
    MPT_COUNT_TO_51_(prefix, suffix), prefix ## 52 ## suffix

#define MPT_COUNT_TO_52(prefix, suffix) \
    MPT_COUNT_TO_52_(prefix, suffix) 

#define MPT_COUNT_TO_52_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_51_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_52(prefix, suffix) \
    MPT_COUNT_TO_51_(prefix, suffix)

#define INTERNAL_MPT_EVAL_52(delimiter, ...) \
    INTERNAL_MPT_EVAL_51(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_52(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_51(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_53_(prefix, suffix) \
    MPT_COUNT_TO_52_(prefix, suffix), prefix ## 53 ## suffix

#define MPT_COUNT_TO_53(prefix, suffix) \
    MPT_COUNT_TO_53_(prefix, suffix) 

#define MPT_COUNT_TO_53_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_52_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_53(prefix, suffix) \
    MPT_COUNT_TO_52_(prefix, suffix)

#define INTERNAL_MPT_EVAL_53(delimiter, ...) \
    INTERNAL_MPT_EVAL_52(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_53(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_52(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_54_(prefix, suffix) \
    MPT_COUNT_TO_53_(prefix, suffix), prefix ## 54 ## suffix

#define MPT_COUNT_TO_54(prefix, suffix) \
    MPT_COUNT_TO_54_(prefix, suffix) 

#define MPT_COUNT_TO_54_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_53_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_54(prefix, suffix) \
    MPT_COUNT_TO_53_(prefix, suffix)

#define INTERNAL_MPT_EVAL_54(delimiter, ...) \
    INTERNAL_MPT_EVAL_53(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_54(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_53(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_55_(prefix, suffix) \
    MPT_COUNT_TO_54_(prefix, suffix), prefix ## 55 ## suffix

#define MPT_COUNT_TO_55(prefix, suffix) \
    MPT_COUNT_TO_55_(prefix, suffix) 

#define MPT_COUNT_TO_55_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_54_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_55(prefix, suffix) \
    MPT_COUNT_TO_54_(prefix, suffix)

#define INTERNAL_MPT_EVAL_55(delimiter, ...) \
    INTERNAL_MPT_EVAL_54(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_55(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_54(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_56_(prefix, suffix) \
    MPT_COUNT_TO_55_(prefix, suffix), prefix ## 56 ## suffix

#define MPT_COUNT_TO_56(prefix, suffix) \
    MPT_COUNT_TO_56_(prefix, suffix) 

#define MPT_COUNT_TO_56_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_55_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_56(prefix, suffix) \
    MPT_COUNT_TO_55_(prefix, suffix)

#define INTERNAL_MPT_EVAL_56(delimiter, ...) \
    INTERNAL_MPT_EVAL_55(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_56(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_55(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_57_(prefix, suffix) \
    MPT_COUNT_TO_56_(prefix, suffix), prefix ## 57 ## suffix

#define MPT_COUNT_TO_57(prefix, suffix) \
    MPT_COUNT_TO_57_(prefix, suffix) 

#define MPT_COUNT_TO_57_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_56_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_57(prefix, suffix) \
    MPT_COUNT_TO_56_(prefix, suffix)

#define INTERNAL_MPT_EVAL_57(delimiter, ...) \
    INTERNAL_MPT_EVAL_56(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_57(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_56(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_58_(prefix, suffix) \
    MPT_COUNT_TO_57_(prefix, suffix), prefix ## 58 ## suffix

#define MPT_COUNT_TO_58(prefix, suffix) \
    MPT_COUNT_TO_58_(prefix, suffix) 

#define MPT_COUNT_TO_58_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_57_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_58(prefix, suffix) \
    MPT_COUNT_TO_57_(prefix, suffix)

#define INTERNAL_MPT_EVAL_58(delimiter, ...) \
    INTERNAL_MPT_EVAL_57(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_58(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_57(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_59_(prefix, suffix) \
    MPT_COUNT_TO_58_(prefix, suffix), prefix ## 59 ## suffix

#define MPT_COUNT_TO_59(prefix, suffix) \
    MPT_COUNT_TO_59_(prefix, suffix) 

#define MPT_COUNT_TO_59_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_58_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_59(prefix, suffix) \
    MPT_COUNT_TO_58_(prefix, suffix)

#define INTERNAL_MPT_EVAL_59(delimiter, ...) \
    INTERNAL_MPT_EVAL_58(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_59(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_58(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_60_(prefix, suffix) \
    MPT_COUNT_TO_59_(prefix, suffix), prefix ## 60 ## suffix

#define MPT_COUNT_TO_60(prefix, suffix) \
    MPT_COUNT_TO_60_(prefix, suffix) 

#define MPT_COUNT_TO_60_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_59_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_60(prefix, suffix) \
    MPT_COUNT_TO_59_(prefix, suffix)

#define INTERNAL_MPT_EVAL_60(delimiter, ...) \
    INTERNAL_MPT_EVAL_59(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_60(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_59(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_61_(prefix, suffix) \
    MPT_COUNT_TO_60_(prefix, suffix), prefix ## 61 ## suffix

#define MPT_COUNT_TO_61(prefix, suffix) \
    MPT_COUNT_TO_61_(prefix, suffix) 

#define MPT_COUNT_TO_61_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_60_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_61(prefix, suffix) \
    MPT_COUNT_TO_60_(prefix, suffix)

#define INTERNAL_MPT_EVAL_61(delimiter, ...) \
    INTERNAL_MPT_EVAL_60(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_61(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_60(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_62_(prefix, suffix) \
    MPT_COUNT_TO_61_(prefix, suffix), prefix ## 62 ## suffix

#define MPT_COUNT_TO_62(prefix, suffix) \
    MPT_COUNT_TO_62_(prefix, suffix) 

#define MPT_COUNT_TO_62_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_61_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_62(prefix, suffix) \
    MPT_COUNT_TO_61_(prefix, suffix)

#define INTERNAL_MPT_EVAL_62(delimiter, ...) \
    INTERNAL_MPT_EVAL_61(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_62(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_61(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_63_(prefix, suffix) \
    MPT_COUNT_TO_62_(prefix, suffix), prefix ## 63 ## suffix

#define MPT_COUNT_TO_63(prefix, suffix) \
    MPT_COUNT_TO_63_(prefix, suffix) 

#define MPT_COUNT_TO_63_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_62_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_63(prefix, suffix) \
    MPT_COUNT_TO_62_(prefix, suffix)

#define INTERNAL_MPT_EVAL_63(delimiter, ...) \
    INTERNAL_MPT_EVAL_62(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_63(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_62(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_64_(prefix, suffix) \
    MPT_COUNT_TO_63_(prefix, suffix), prefix ## 64 ## suffix

#define MPT_COUNT_TO_64(prefix, suffix) \
    MPT_COUNT_TO_64_(prefix, suffix) 

#define MPT_COUNT_TO_64_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_63_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_64(prefix, suffix) \
    MPT_COUNT_TO_63_(prefix, suffix)

#define INTERNAL_MPT_EVAL_64(delimiter, ...) \
    INTERNAL_MPT_EVAL_63(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_64(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_63(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_65_(prefix, suffix) \
    MPT_COUNT_TO_64_(prefix, suffix), prefix ## 65 ## suffix

#define MPT_COUNT_TO_65(prefix, suffix) \
    MPT_COUNT_TO_65_(prefix, suffix) 

#define MPT_COUNT_TO_65_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_64_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_65(prefix, suffix) \
    MPT_COUNT_TO_64_(prefix, suffix)

#define INTERNAL_MPT_EVAL_65(delimiter, ...) \
    INTERNAL_MPT_EVAL_64(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_65(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_64(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_66_(prefix, suffix) \
    MPT_COUNT_TO_65_(prefix, suffix), prefix ## 66 ## suffix

#define MPT_COUNT_TO_66(prefix, suffix) \
    MPT_COUNT_TO_66_(prefix, suffix) 

#define MPT_COUNT_TO_66_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_65_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_66(prefix, suffix) \
    MPT_COUNT_TO_65_(prefix, suffix)

#define INTERNAL_MPT_EVAL_66(delimiter, ...) \
    INTERNAL_MPT_EVAL_65(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_66(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_65(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_67_(prefix, suffix) \
    MPT_COUNT_TO_66_(prefix, suffix), prefix ## 67 ## suffix

#define MPT_COUNT_TO_67(prefix, suffix) \
    MPT_COUNT_TO_67_(prefix, suffix) 

#define MPT_COUNT_TO_67_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_66_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_67(prefix, suffix) \
    MPT_COUNT_TO_66_(prefix, suffix)

#define INTERNAL_MPT_EVAL_67(delimiter, ...) \
    INTERNAL_MPT_EVAL_66(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_67(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_66(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_68_(prefix, suffix) \
    MPT_COUNT_TO_67_(prefix, suffix), prefix ## 68 ## suffix

#define MPT_COUNT_TO_68(prefix, suffix) \
    MPT_COUNT_TO_68_(prefix, suffix) 

#define MPT_COUNT_TO_68_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_67_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_68(prefix, suffix) \
    MPT_COUNT_TO_67_(prefix, suffix)

#define INTERNAL_MPT_EVAL_68(delimiter, ...) \
    INTERNAL_MPT_EVAL_67(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_68(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_67(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_69_(prefix, suffix) \
    MPT_COUNT_TO_68_(prefix, suffix), prefix ## 69 ## suffix

#define MPT_COUNT_TO_69(prefix, suffix) \
    MPT_COUNT_TO_69_(prefix, suffix) 

#define MPT_COUNT_TO_69_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_68_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_69(prefix, suffix) \
    MPT_COUNT_TO_68_(prefix, suffix)

#define INTERNAL_MPT_EVAL_69(delimiter, ...) \
    INTERNAL_MPT_EVAL_68(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_69(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_68(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_70_(prefix, suffix) \
    MPT_COUNT_TO_69_(prefix, suffix), prefix ## 70 ## suffix

#define MPT_COUNT_TO_70(prefix, suffix) \
    MPT_COUNT_TO_70_(prefix, suffix) 

#define MPT_COUNT_TO_70_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_69_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_70(prefix, suffix) \
    MPT_COUNT_TO_69_(prefix, suffix)

#define INTERNAL_MPT_EVAL_70(delimiter, ...) \
    INTERNAL_MPT_EVAL_69(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_70(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_69(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_71_(prefix, suffix) \
    MPT_COUNT_TO_70_(prefix, suffix), prefix ## 71 ## suffix

#define MPT_COUNT_TO_71(prefix, suffix) \
    MPT_COUNT_TO_71_(prefix, suffix) 

#define MPT_COUNT_TO_71_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_70_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_71(prefix, suffix) \
    MPT_COUNT_TO_70_(prefix, suffix)

#define INTERNAL_MPT_EVAL_71(delimiter, ...) \
    INTERNAL_MPT_EVAL_70(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_71(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_70(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_72_(prefix, suffix) \
    MPT_COUNT_TO_71_(prefix, suffix), prefix ## 72 ## suffix

#define MPT_COUNT_TO_72(prefix, suffix) \
    MPT_COUNT_TO_72_(prefix, suffix) 

#define MPT_COUNT_TO_72_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_71_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_72(prefix, suffix) \
    MPT_COUNT_TO_71_(prefix, suffix)

#define INTERNAL_MPT_EVAL_72(delimiter, ...) \
    INTERNAL_MPT_EVAL_71(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_72(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_71(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_73_(prefix, suffix) \
    MPT_COUNT_TO_72_(prefix, suffix), prefix ## 73 ## suffix

#define MPT_COUNT_TO_73(prefix, suffix) \
    MPT_COUNT_TO_73_(prefix, suffix) 

#define MPT_COUNT_TO_73_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_72_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_73(prefix, suffix) \
    MPT_COUNT_TO_72_(prefix, suffix)

#define INTERNAL_MPT_EVAL_73(delimiter, ...) \
    INTERNAL_MPT_EVAL_72(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_73(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_72(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_74_(prefix, suffix) \
    MPT_COUNT_TO_73_(prefix, suffix), prefix ## 74 ## suffix

#define MPT_COUNT_TO_74(prefix, suffix) \
    MPT_COUNT_TO_74_(prefix, suffix) 

#define MPT_COUNT_TO_74_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_73_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_74(prefix, suffix) \
    MPT_COUNT_TO_73_(prefix, suffix)

#define INTERNAL_MPT_EVAL_74(delimiter, ...) \
    INTERNAL_MPT_EVAL_73(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_74(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_73(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_75_(prefix, suffix) \
    MPT_COUNT_TO_74_(prefix, suffix), prefix ## 75 ## suffix

#define MPT_COUNT_TO_75(prefix, suffix) \
    MPT_COUNT_TO_75_(prefix, suffix) 

#define MPT_COUNT_TO_75_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_74_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_75(prefix, suffix) \
    MPT_COUNT_TO_74_(prefix, suffix)

#define INTERNAL_MPT_EVAL_75(delimiter, ...) \
    INTERNAL_MPT_EVAL_74(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_75(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_74(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_76_(prefix, suffix) \
    MPT_COUNT_TO_75_(prefix, suffix), prefix ## 76 ## suffix

#define MPT_COUNT_TO_76(prefix, suffix) \
    MPT_COUNT_TO_76_(prefix, suffix) 

#define MPT_COUNT_TO_76_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_75_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_76(prefix, suffix) \
    MPT_COUNT_TO_75_(prefix, suffix)

#define INTERNAL_MPT_EVAL_76(delimiter, ...) \
    INTERNAL_MPT_EVAL_75(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_76(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_75(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_77_(prefix, suffix) \
    MPT_COUNT_TO_76_(prefix, suffix), prefix ## 77 ## suffix

#define MPT_COUNT_TO_77(prefix, suffix) \
    MPT_COUNT_TO_77_(prefix, suffix) 

#define MPT_COUNT_TO_77_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_76_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_77(prefix, suffix) \
    MPT_COUNT_TO_76_(prefix, suffix)

#define INTERNAL_MPT_EVAL_77(delimiter, ...) \
    INTERNAL_MPT_EVAL_76(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_77(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_76(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_78_(prefix, suffix) \
    MPT_COUNT_TO_77_(prefix, suffix), prefix ## 78 ## suffix

#define MPT_COUNT_TO_78(prefix, suffix) \
    MPT_COUNT_TO_78_(prefix, suffix) 

#define MPT_COUNT_TO_78_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_77_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_78(prefix, suffix) \
    MPT_COUNT_TO_77_(prefix, suffix)

#define INTERNAL_MPT_EVAL_78(delimiter, ...) \
    INTERNAL_MPT_EVAL_77(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_78(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_77(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_79_(prefix, suffix) \
    MPT_COUNT_TO_78_(prefix, suffix), prefix ## 79 ## suffix

#define MPT_COUNT_TO_79(prefix, suffix) \
    MPT_COUNT_TO_79_(prefix, suffix) 

#define MPT_COUNT_TO_79_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_78_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_79(prefix, suffix) \
    MPT_COUNT_TO_78_(prefix, suffix)

#define INTERNAL_MPT_EVAL_79(delimiter, ...) \
    INTERNAL_MPT_EVAL_78(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_79(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_78(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_80_(prefix, suffix) \
    MPT_COUNT_TO_79_(prefix, suffix), prefix ## 80 ## suffix

#define MPT_COUNT_TO_80(prefix, suffix) \
    MPT_COUNT_TO_80_(prefix, suffix) 

#define MPT_COUNT_TO_80_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_79_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_80(prefix, suffix) \
    MPT_COUNT_TO_79_(prefix, suffix)

#define INTERNAL_MPT_EVAL_80(delimiter, ...) \
    INTERNAL_MPT_EVAL_79(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_80(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_79(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_81_(prefix, suffix) \
    MPT_COUNT_TO_80_(prefix, suffix), prefix ## 81 ## suffix

#define MPT_COUNT_TO_81(prefix, suffix) \
    MPT_COUNT_TO_81_(prefix, suffix) 

#define MPT_COUNT_TO_81_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_80_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_81(prefix, suffix) \
    MPT_COUNT_TO_80_(prefix, suffix)

#define INTERNAL_MPT_EVAL_81(delimiter, ...) \
    INTERNAL_MPT_EVAL_80(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_81(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_80(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_82_(prefix, suffix) \
    MPT_COUNT_TO_81_(prefix, suffix), prefix ## 82 ## suffix

#define MPT_COUNT_TO_82(prefix, suffix) \
    MPT_COUNT_TO_82_(prefix, suffix) 

#define MPT_COUNT_TO_82_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_81_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_82(prefix, suffix) \
    MPT_COUNT_TO_81_(prefix, suffix)

#define INTERNAL_MPT_EVAL_82(delimiter, ...) \
    INTERNAL_MPT_EVAL_81(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_82(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_81(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_83_(prefix, suffix) \
    MPT_COUNT_TO_82_(prefix, suffix), prefix ## 83 ## suffix

#define MPT_COUNT_TO_83(prefix, suffix) \
    MPT_COUNT_TO_83_(prefix, suffix) 

#define MPT_COUNT_TO_83_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_82_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_83(prefix, suffix) \
    MPT_COUNT_TO_82_(prefix, suffix)

#define INTERNAL_MPT_EVAL_83(delimiter, ...) \
    INTERNAL_MPT_EVAL_82(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_83(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_82(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_84_(prefix, suffix) \
    MPT_COUNT_TO_83_(prefix, suffix), prefix ## 84 ## suffix

#define MPT_COUNT_TO_84(prefix, suffix) \
    MPT_COUNT_TO_84_(prefix, suffix) 

#define MPT_COUNT_TO_84_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_83_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_84(prefix, suffix) \
    MPT_COUNT_TO_83_(prefix, suffix)

#define INTERNAL_MPT_EVAL_84(delimiter, ...) \
    INTERNAL_MPT_EVAL_83(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_84(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_83(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_85_(prefix, suffix) \
    MPT_COUNT_TO_84_(prefix, suffix), prefix ## 85 ## suffix

#define MPT_COUNT_TO_85(prefix, suffix) \
    MPT_COUNT_TO_85_(prefix, suffix) 

#define MPT_COUNT_TO_85_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_84_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_85(prefix, suffix) \
    MPT_COUNT_TO_84_(prefix, suffix)

#define INTERNAL_MPT_EVAL_85(delimiter, ...) \
    INTERNAL_MPT_EVAL_84(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_85(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_84(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_86_(prefix, suffix) \
    MPT_COUNT_TO_85_(prefix, suffix), prefix ## 86 ## suffix

#define MPT_COUNT_TO_86(prefix, suffix) \
    MPT_COUNT_TO_86_(prefix, suffix) 

#define MPT_COUNT_TO_86_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_85_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_86(prefix, suffix) \
    MPT_COUNT_TO_85_(prefix, suffix)

#define INTERNAL_MPT_EVAL_86(delimiter, ...) \
    INTERNAL_MPT_EVAL_85(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_86(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_85(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_87_(prefix, suffix) \
    MPT_COUNT_TO_86_(prefix, suffix), prefix ## 87 ## suffix

#define MPT_COUNT_TO_87(prefix, suffix) \
    MPT_COUNT_TO_87_(prefix, suffix) 

#define MPT_COUNT_TO_87_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_86_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_87(prefix, suffix) \
    MPT_COUNT_TO_86_(prefix, suffix)

#define INTERNAL_MPT_EVAL_87(delimiter, ...) \
    INTERNAL_MPT_EVAL_86(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_87(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_86(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_88_(prefix, suffix) \
    MPT_COUNT_TO_87_(prefix, suffix), prefix ## 88 ## suffix

#define MPT_COUNT_TO_88(prefix, suffix) \
    MPT_COUNT_TO_88_(prefix, suffix) 

#define MPT_COUNT_TO_88_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_87_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_88(prefix, suffix) \
    MPT_COUNT_TO_87_(prefix, suffix)

#define INTERNAL_MPT_EVAL_88(delimiter, ...) \
    INTERNAL_MPT_EVAL_87(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_88(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_87(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_89_(prefix, suffix) \
    MPT_COUNT_TO_88_(prefix, suffix), prefix ## 89 ## suffix

#define MPT_COUNT_TO_89(prefix, suffix) \
    MPT_COUNT_TO_89_(prefix, suffix) 

#define MPT_COUNT_TO_89_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_88_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_89(prefix, suffix) \
    MPT_COUNT_TO_88_(prefix, suffix)

#define INTERNAL_MPT_EVAL_89(delimiter, ...) \
    INTERNAL_MPT_EVAL_88(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_89(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_88(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_90_(prefix, suffix) \
    MPT_COUNT_TO_89_(prefix, suffix), prefix ## 90 ## suffix

#define MPT_COUNT_TO_90(prefix, suffix) \
    MPT_COUNT_TO_90_(prefix, suffix) 

#define MPT_COUNT_TO_90_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_89_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_90(prefix, suffix) \
    MPT_COUNT_TO_89_(prefix, suffix)

#define INTERNAL_MPT_EVAL_90(delimiter, ...) \
    INTERNAL_MPT_EVAL_89(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_90(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_89(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_91_(prefix, suffix) \
    MPT_COUNT_TO_90_(prefix, suffix), prefix ## 91 ## suffix

#define MPT_COUNT_TO_91(prefix, suffix) \
    MPT_COUNT_TO_91_(prefix, suffix) 

#define MPT_COUNT_TO_91_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_90_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_91(prefix, suffix) \
    MPT_COUNT_TO_90_(prefix, suffix)

#define INTERNAL_MPT_EVAL_91(delimiter, ...) \
    INTERNAL_MPT_EVAL_90(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_91(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_90(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_92_(prefix, suffix) \
    MPT_COUNT_TO_91_(prefix, suffix), prefix ## 92 ## suffix

#define MPT_COUNT_TO_92(prefix, suffix) \
    MPT_COUNT_TO_92_(prefix, suffix) 

#define MPT_COUNT_TO_92_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_91_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_92(prefix, suffix) \
    MPT_COUNT_TO_91_(prefix, suffix)

#define INTERNAL_MPT_EVAL_92(delimiter, ...) \
    INTERNAL_MPT_EVAL_91(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_92(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_91(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_93_(prefix, suffix) \
    MPT_COUNT_TO_92_(prefix, suffix), prefix ## 93 ## suffix

#define MPT_COUNT_TO_93(prefix, suffix) \
    MPT_COUNT_TO_93_(prefix, suffix) 

#define MPT_COUNT_TO_93_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_92_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_93(prefix, suffix) \
    MPT_COUNT_TO_92_(prefix, suffix)

#define INTERNAL_MPT_EVAL_93(delimiter, ...) \
    INTERNAL_MPT_EVAL_92(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_93(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_92(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_94_(prefix, suffix) \
    MPT_COUNT_TO_93_(prefix, suffix), prefix ## 94 ## suffix

#define MPT_COUNT_TO_94(prefix, suffix) \
    MPT_COUNT_TO_94_(prefix, suffix) 

#define MPT_COUNT_TO_94_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_93_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_94(prefix, suffix) \
    MPT_COUNT_TO_93_(prefix, suffix)

#define INTERNAL_MPT_EVAL_94(delimiter, ...) \
    INTERNAL_MPT_EVAL_93(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_94(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_93(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_95_(prefix, suffix) \
    MPT_COUNT_TO_94_(prefix, suffix), prefix ## 95 ## suffix

#define MPT_COUNT_TO_95(prefix, suffix) \
    MPT_COUNT_TO_95_(prefix, suffix) 

#define MPT_COUNT_TO_95_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_94_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_95(prefix, suffix) \
    MPT_COUNT_TO_94_(prefix, suffix)

#define INTERNAL_MPT_EVAL_95(delimiter, ...) \
    INTERNAL_MPT_EVAL_94(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_95(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_94(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_96_(prefix, suffix) \
    MPT_COUNT_TO_95_(prefix, suffix), prefix ## 96 ## suffix

#define MPT_COUNT_TO_96(prefix, suffix) \
    MPT_COUNT_TO_96_(prefix, suffix) 

#define MPT_COUNT_TO_96_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_95_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_96(prefix, suffix) \
    MPT_COUNT_TO_95_(prefix, suffix)

#define INTERNAL_MPT_EVAL_96(delimiter, ...) \
    INTERNAL_MPT_EVAL_95(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_96(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_95(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_97_(prefix, suffix) \
    MPT_COUNT_TO_96_(prefix, suffix), prefix ## 97 ## suffix

#define MPT_COUNT_TO_97(prefix, suffix) \
    MPT_COUNT_TO_97_(prefix, suffix) 

#define MPT_COUNT_TO_97_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_96_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_97(prefix, suffix) \
    MPT_COUNT_TO_96_(prefix, suffix)

#define INTERNAL_MPT_EVAL_97(delimiter, ...) \
    INTERNAL_MPT_EVAL_96(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_97(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_96(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_98_(prefix, suffix) \
    MPT_COUNT_TO_97_(prefix, suffix), prefix ## 98 ## suffix

#define MPT_COUNT_TO_98(prefix, suffix) \
    MPT_COUNT_TO_98_(prefix, suffix) 

#define MPT_COUNT_TO_98_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_97_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_98(prefix, suffix) \
    MPT_COUNT_TO_97_(prefix, suffix)

#define INTERNAL_MPT_EVAL_98(delimiter, ...) \
    INTERNAL_MPT_EVAL_97(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_98(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_97(__VA_ARGS__), __VA_ARGS__

#define MPT_COUNT_TO_99_(prefix, suffix) \
    MPT_COUNT_TO_98_(prefix, suffix), prefix ## 99 ## suffix

#define MPT_COUNT_TO_99(prefix, suffix) \
    MPT_COUNT_TO_99_(prefix, suffix) 

#define MPT_COUNT_TO_99_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_98_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_99(prefix, suffix) \
    MPT_COUNT_TO_98_(prefix, suffix)

#define INTERNAL_MPT_EVAL_99(delimiter, ...) \
    INTERNAL_MPT_EVAL_98(delimiter, __VA_ARGS__) delimiter __VA_ARGS__

#define INTERNAL_MPT_EVAL_WITH_COMMA_99(...) \
    INTERNAL_MPT_EVAL_WITH_COMMA_98(__VA_ARGS__), __VA_ARGS__


#endif
