#ifndef MPT_COUNT_TO_H
#define MPT_COUNT_TO_H

#include "./Overload.h"

#define MPT_COUNT_TO_0(prefix, suffix)
#define MPT_COUNT_TO_0_(prefix, suffix)

#define MPT_COUNT_TO_1_(prefix, suffix) \
    prefix ## 1 ## suffix

#define MPT_COUNT_TO_1(prefix, suffix) \
    MPT_COUNT_TO_1_(prefix, suffix) \

#define MPT_COUNT_TO_1_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_0_(prefix, suffix)

#define MPT_COUNT_TO_2_(prefix, suffix) \
    MPT_COUNT_TO_1_(prefix, suffix), prefix ## 2 ## suffix

#define MPT_COUNT_TO_2(prefix, suffix) \
    MPT_COUNT_TO_2_(prefix, suffix) 

#define MPT_COUNT_TO_2_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_1_(prefix, suffix)

#define MPT_COUNT_TO_3_(prefix, suffix) \
    MPT_COUNT_TO_2_(prefix, suffix), prefix ## 3 ## suffix

#define MPT_COUNT_TO_3(prefix, suffix) \
    MPT_COUNT_TO_3_(prefix, suffix) 

#define MPT_COUNT_TO_3_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_2_(prefix, suffix)

#define MPT_COUNT_TO_4_(prefix, suffix) \
    MPT_COUNT_TO_3_(prefix, suffix), prefix ## 4 ## suffix

#define MPT_COUNT_TO_4(prefix, suffix) \
    MPT_COUNT_TO_4_(prefix, suffix) 

#define MPT_COUNT_TO_4_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_3_(prefix, suffix)

#define MPT_COUNT_TO_5_(prefix, suffix) \
    MPT_COUNT_TO_4_(prefix, suffix), prefix ## 5 ## suffix

#define MPT_COUNT_TO_5(prefix, suffix) \
    MPT_COUNT_TO_5_(prefix, suffix) 

#define MPT_COUNT_TO_5_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_4_(prefix, suffix)

#define MPT_COUNT_TO_6_(prefix, suffix) \
    MPT_COUNT_TO_5_(prefix, suffix), prefix ## 6 ## suffix

#define MPT_COUNT_TO_6(prefix, suffix) \
    MPT_COUNT_TO_6_(prefix, suffix) 

#define MPT_COUNT_TO_6_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_5_(prefix, suffix)

#define MPT_COUNT_TO_7_(prefix, suffix) \
    MPT_COUNT_TO_6_(prefix, suffix), prefix ## 7 ## suffix

#define MPT_COUNT_TO_7(prefix, suffix) \
    MPT_COUNT_TO_7_(prefix, suffix) 

#define MPT_COUNT_TO_7_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_6_(prefix, suffix)

#define MPT_COUNT_TO_8_(prefix, suffix) \
    MPT_COUNT_TO_7_(prefix, suffix), prefix ## 8 ## suffix

#define MPT_COUNT_TO_8(prefix, suffix) \
    MPT_COUNT_TO_8_(prefix, suffix) 

#define MPT_COUNT_TO_8_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_7_(prefix, suffix)

#define MPT_COUNT_TO_9_(prefix, suffix) \
    MPT_COUNT_TO_8_(prefix, suffix), prefix ## 9 ## suffix

#define MPT_COUNT_TO_9(prefix, suffix) \
    MPT_COUNT_TO_9_(prefix, suffix) 

#define MPT_COUNT_TO_9_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_8_(prefix, suffix)

#define MPT_COUNT_TO_10_(prefix, suffix) \
    MPT_COUNT_TO_9_(prefix, suffix), prefix ## 10 ## suffix

#define MPT_COUNT_TO_10(prefix, suffix) \
    MPT_COUNT_TO_10_(prefix, suffix) 

#define MPT_COUNT_TO_10_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_9_(prefix, suffix)

#define MPT_COUNT_TO_11_(prefix, suffix) \
    MPT_COUNT_TO_10_(prefix, suffix), prefix ## 11 ## suffix

#define MPT_COUNT_TO_11(prefix, suffix) \
    MPT_COUNT_TO_11_(prefix, suffix) 

#define MPT_COUNT_TO_11_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_10_(prefix, suffix)

#define MPT_COUNT_TO_12_(prefix, suffix) \
    MPT_COUNT_TO_11_(prefix, suffix), prefix ## 12 ## suffix

#define MPT_COUNT_TO_12(prefix, suffix) \
    MPT_COUNT_TO_12_(prefix, suffix) 

#define MPT_COUNT_TO_12_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_11_(prefix, suffix)

#define MPT_COUNT_TO_13_(prefix, suffix) \
    MPT_COUNT_TO_12_(prefix, suffix), prefix ## 13 ## suffix

#define MPT_COUNT_TO_13(prefix, suffix) \
    MPT_COUNT_TO_13_(prefix, suffix) 

#define MPT_COUNT_TO_13_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_12_(prefix, suffix)

#define MPT_COUNT_TO_14_(prefix, suffix) \
    MPT_COUNT_TO_13_(prefix, suffix), prefix ## 14 ## suffix

#define MPT_COUNT_TO_14(prefix, suffix) \
    MPT_COUNT_TO_14_(prefix, suffix) 

#define MPT_COUNT_TO_14_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_13_(prefix, suffix)

#define MPT_COUNT_TO_15_(prefix, suffix) \
    MPT_COUNT_TO_14_(prefix, suffix), prefix ## 15 ## suffix

#define MPT_COUNT_TO_15(prefix, suffix) \
    MPT_COUNT_TO_15_(prefix, suffix) 

#define MPT_COUNT_TO_15_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_14_(prefix, suffix)

#define MPT_COUNT_TO_16_(prefix, suffix) \
    MPT_COUNT_TO_15_(prefix, suffix), prefix ## 16 ## suffix

#define MPT_COUNT_TO_16(prefix, suffix) \
    MPT_COUNT_TO_16_(prefix, suffix) 

#define MPT_COUNT_TO_16_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_15_(prefix, suffix)

#define MPT_COUNT_TO_17_(prefix, suffix) \
    MPT_COUNT_TO_16_(prefix, suffix), prefix ## 17 ## suffix

#define MPT_COUNT_TO_17(prefix, suffix) \
    MPT_COUNT_TO_17_(prefix, suffix) 

#define MPT_COUNT_TO_17_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_16_(prefix, suffix)

#define MPT_COUNT_TO_18_(prefix, suffix) \
    MPT_COUNT_TO_17_(prefix, suffix), prefix ## 18 ## suffix

#define MPT_COUNT_TO_18(prefix, suffix) \
    MPT_COUNT_TO_18_(prefix, suffix) 

#define MPT_COUNT_TO_18_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_17_(prefix, suffix)

#define MPT_COUNT_TO_19_(prefix, suffix) \
    MPT_COUNT_TO_18_(prefix, suffix), prefix ## 19 ## suffix

#define MPT_COUNT_TO_19(prefix, suffix) \
    MPT_COUNT_TO_19_(prefix, suffix) 

#define MPT_COUNT_TO_19_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_18_(prefix, suffix)

#define MPT_COUNT_TO_20_(prefix, suffix) \
    MPT_COUNT_TO_19_(prefix, suffix), prefix ## 20 ## suffix

#define MPT_COUNT_TO_20(prefix, suffix) \
    MPT_COUNT_TO_20_(prefix, suffix) 

#define MPT_COUNT_TO_20_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_19_(prefix, suffix)

#define MPT_COUNT_TO_21_(prefix, suffix) \
    MPT_COUNT_TO_20_(prefix, suffix), prefix ## 21 ## suffix

#define MPT_COUNT_TO_21(prefix, suffix) \
    MPT_COUNT_TO_21_(prefix, suffix) 

#define MPT_COUNT_TO_21_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_20_(prefix, suffix)

#define MPT_COUNT_TO_22_(prefix, suffix) \
    MPT_COUNT_TO_21_(prefix, suffix), prefix ## 22 ## suffix

#define MPT_COUNT_TO_22(prefix, suffix) \
    MPT_COUNT_TO_22_(prefix, suffix) 

#define MPT_COUNT_TO_22_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_21_(prefix, suffix)

#define MPT_COUNT_TO_23_(prefix, suffix) \
    MPT_COUNT_TO_22_(prefix, suffix), prefix ## 23 ## suffix

#define MPT_COUNT_TO_23(prefix, suffix) \
    MPT_COUNT_TO_23_(prefix, suffix) 

#define MPT_COUNT_TO_23_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_22_(prefix, suffix)

#define MPT_COUNT_TO_24_(prefix, suffix) \
    MPT_COUNT_TO_23_(prefix, suffix), prefix ## 24 ## suffix

#define MPT_COUNT_TO_24(prefix, suffix) \
    MPT_COUNT_TO_24_(prefix, suffix) 

#define MPT_COUNT_TO_24_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_23_(prefix, suffix)

#define MPT_COUNT_TO_25_(prefix, suffix) \
    MPT_COUNT_TO_24_(prefix, suffix), prefix ## 25 ## suffix

#define MPT_COUNT_TO_25(prefix, suffix) \
    MPT_COUNT_TO_25_(prefix, suffix) 

#define MPT_COUNT_TO_25_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_24_(prefix, suffix)

#define MPT_COUNT_TO_26_(prefix, suffix) \
    MPT_COUNT_TO_25_(prefix, suffix), prefix ## 26 ## suffix

#define MPT_COUNT_TO_26(prefix, suffix) \
    MPT_COUNT_TO_26_(prefix, suffix) 

#define MPT_COUNT_TO_26_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_25_(prefix, suffix)

#define MPT_COUNT_TO_27_(prefix, suffix) \
    MPT_COUNT_TO_26_(prefix, suffix), prefix ## 27 ## suffix

#define MPT_COUNT_TO_27(prefix, suffix) \
    MPT_COUNT_TO_27_(prefix, suffix) 

#define MPT_COUNT_TO_27_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_26_(prefix, suffix)

#define MPT_COUNT_TO_28_(prefix, suffix) \
    MPT_COUNT_TO_27_(prefix, suffix), prefix ## 28 ## suffix

#define MPT_COUNT_TO_28(prefix, suffix) \
    MPT_COUNT_TO_28_(prefix, suffix) 

#define MPT_COUNT_TO_28_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_27_(prefix, suffix)

#define MPT_COUNT_TO_29_(prefix, suffix) \
    MPT_COUNT_TO_28_(prefix, suffix), prefix ## 29 ## suffix

#define MPT_COUNT_TO_29(prefix, suffix) \
    MPT_COUNT_TO_29_(prefix, suffix) 

#define MPT_COUNT_TO_29_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_28_(prefix, suffix)

#define MPT_COUNT_TO_30_(prefix, suffix) \
    MPT_COUNT_TO_29_(prefix, suffix), prefix ## 30 ## suffix

#define MPT_COUNT_TO_30(prefix, suffix) \
    MPT_COUNT_TO_30_(prefix, suffix) 

#define MPT_COUNT_TO_30_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_29_(prefix, suffix)

#define MPT_COUNT_TO_31_(prefix, suffix) \
    MPT_COUNT_TO_30_(prefix, suffix), prefix ## 31 ## suffix

#define MPT_COUNT_TO_31(prefix, suffix) \
    MPT_COUNT_TO_31_(prefix, suffix) 

#define MPT_COUNT_TO_31_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_30_(prefix, suffix)

#define MPT_COUNT_TO_32_(prefix, suffix) \
    MPT_COUNT_TO_31_(prefix, suffix), prefix ## 32 ## suffix

#define MPT_COUNT_TO_32(prefix, suffix) \
    MPT_COUNT_TO_32_(prefix, suffix) 

#define MPT_COUNT_TO_32_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_31_(prefix, suffix)

#define MPT_COUNT_TO_33_(prefix, suffix) \
    MPT_COUNT_TO_32_(prefix, suffix), prefix ## 33 ## suffix

#define MPT_COUNT_TO_33(prefix, suffix) \
    MPT_COUNT_TO_33_(prefix, suffix) 

#define MPT_COUNT_TO_33_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_32_(prefix, suffix)

#define MPT_COUNT_TO_34_(prefix, suffix) \
    MPT_COUNT_TO_33_(prefix, suffix), prefix ## 34 ## suffix

#define MPT_COUNT_TO_34(prefix, suffix) \
    MPT_COUNT_TO_34_(prefix, suffix) 

#define MPT_COUNT_TO_34_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_33_(prefix, suffix)

#define MPT_COUNT_TO_35_(prefix, suffix) \
    MPT_COUNT_TO_34_(prefix, suffix), prefix ## 35 ## suffix

#define MPT_COUNT_TO_35(prefix, suffix) \
    MPT_COUNT_TO_35_(prefix, suffix) 

#define MPT_COUNT_TO_35_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_34_(prefix, suffix)

#define MPT_COUNT_TO_36_(prefix, suffix) \
    MPT_COUNT_TO_35_(prefix, suffix), prefix ## 36 ## suffix

#define MPT_COUNT_TO_36(prefix, suffix) \
    MPT_COUNT_TO_36_(prefix, suffix) 

#define MPT_COUNT_TO_36_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_35_(prefix, suffix)

#define MPT_COUNT_TO_37_(prefix, suffix) \
    MPT_COUNT_TO_36_(prefix, suffix), prefix ## 37 ## suffix

#define MPT_COUNT_TO_37(prefix, suffix) \
    MPT_COUNT_TO_37_(prefix, suffix) 

#define MPT_COUNT_TO_37_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_36_(prefix, suffix)

#define MPT_COUNT_TO_38_(prefix, suffix) \
    MPT_COUNT_TO_37_(prefix, suffix), prefix ## 38 ## suffix

#define MPT_COUNT_TO_38(prefix, suffix) \
    MPT_COUNT_TO_38_(prefix, suffix) 

#define MPT_COUNT_TO_38_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_37_(prefix, suffix)

#define MPT_COUNT_TO_39_(prefix, suffix) \
    MPT_COUNT_TO_38_(prefix, suffix), prefix ## 39 ## suffix

#define MPT_COUNT_TO_39(prefix, suffix) \
    MPT_COUNT_TO_39_(prefix, suffix) 

#define MPT_COUNT_TO_39_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_38_(prefix, suffix)

#define MPT_COUNT_TO_40_(prefix, suffix) \
    MPT_COUNT_TO_39_(prefix, suffix), prefix ## 40 ## suffix

#define MPT_COUNT_TO_40(prefix, suffix) \
    MPT_COUNT_TO_40_(prefix, suffix) 

#define MPT_COUNT_TO_40_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_39_(prefix, suffix)

#define MPT_COUNT_TO_41_(prefix, suffix) \
    MPT_COUNT_TO_40_(prefix, suffix), prefix ## 41 ## suffix

#define MPT_COUNT_TO_41(prefix, suffix) \
    MPT_COUNT_TO_41_(prefix, suffix) 

#define MPT_COUNT_TO_41_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_40_(prefix, suffix)

#define MPT_COUNT_TO_42_(prefix, suffix) \
    MPT_COUNT_TO_41_(prefix, suffix), prefix ## 42 ## suffix

#define MPT_COUNT_TO_42(prefix, suffix) \
    MPT_COUNT_TO_42_(prefix, suffix) 

#define MPT_COUNT_TO_42_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_41_(prefix, suffix)

#define MPT_COUNT_TO_43_(prefix, suffix) \
    MPT_COUNT_TO_42_(prefix, suffix), prefix ## 43 ## suffix

#define MPT_COUNT_TO_43(prefix, suffix) \
    MPT_COUNT_TO_43_(prefix, suffix) 

#define MPT_COUNT_TO_43_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_42_(prefix, suffix)

#define MPT_COUNT_TO_44_(prefix, suffix) \
    MPT_COUNT_TO_43_(prefix, suffix), prefix ## 44 ## suffix

#define MPT_COUNT_TO_44(prefix, suffix) \
    MPT_COUNT_TO_44_(prefix, suffix) 

#define MPT_COUNT_TO_44_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_43_(prefix, suffix)

#define MPT_COUNT_TO_45_(prefix, suffix) \
    MPT_COUNT_TO_44_(prefix, suffix), prefix ## 45 ## suffix

#define MPT_COUNT_TO_45(prefix, suffix) \
    MPT_COUNT_TO_45_(prefix, suffix) 

#define MPT_COUNT_TO_45_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_44_(prefix, suffix)

#define MPT_COUNT_TO_46_(prefix, suffix) \
    MPT_COUNT_TO_45_(prefix, suffix), prefix ## 46 ## suffix

#define MPT_COUNT_TO_46(prefix, suffix) \
    MPT_COUNT_TO_46_(prefix, suffix) 

#define MPT_COUNT_TO_46_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_45_(prefix, suffix)

#define MPT_COUNT_TO_47_(prefix, suffix) \
    MPT_COUNT_TO_46_(prefix, suffix), prefix ## 47 ## suffix

#define MPT_COUNT_TO_47(prefix, suffix) \
    MPT_COUNT_TO_47_(prefix, suffix) 

#define MPT_COUNT_TO_47_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_46_(prefix, suffix)

#define MPT_COUNT_TO_48_(prefix, suffix) \
    MPT_COUNT_TO_47_(prefix, suffix), prefix ## 48 ## suffix

#define MPT_COUNT_TO_48(prefix, suffix) \
    MPT_COUNT_TO_48_(prefix, suffix) 

#define MPT_COUNT_TO_48_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_47_(prefix, suffix)

#define MPT_COUNT_TO_49_(prefix, suffix) \
    MPT_COUNT_TO_48_(prefix, suffix), prefix ## 49 ## suffix

#define MPT_COUNT_TO_49(prefix, suffix) \
    MPT_COUNT_TO_49_(prefix, suffix) 

#define MPT_COUNT_TO_49_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_48_(prefix, suffix)

#define MPT_COUNT_TO_50_(prefix, suffix) \
    MPT_COUNT_TO_49_(prefix, suffix), prefix ## 50 ## suffix

#define MPT_COUNT_TO_50(prefix, suffix) \
    MPT_COUNT_TO_50_(prefix, suffix) 

#define MPT_COUNT_TO_50_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_49_(prefix, suffix)

#define MPT_COUNT_TO_51_(prefix, suffix) \
    MPT_COUNT_TO_50_(prefix, suffix), prefix ## 51 ## suffix

#define MPT_COUNT_TO_51(prefix, suffix) \
    MPT_COUNT_TO_51_(prefix, suffix) 

#define MPT_COUNT_TO_51_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_50_(prefix, suffix)

#define MPT_COUNT_TO_52_(prefix, suffix) \
    MPT_COUNT_TO_51_(prefix, suffix), prefix ## 52 ## suffix

#define MPT_COUNT_TO_52(prefix, suffix) \
    MPT_COUNT_TO_52_(prefix, suffix) 

#define MPT_COUNT_TO_52_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_51_(prefix, suffix)

#define MPT_COUNT_TO_53_(prefix, suffix) \
    MPT_COUNT_TO_52_(prefix, suffix), prefix ## 53 ## suffix

#define MPT_COUNT_TO_53(prefix, suffix) \
    MPT_COUNT_TO_53_(prefix, suffix) 

#define MPT_COUNT_TO_53_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_52_(prefix, suffix)

#define MPT_COUNT_TO_54_(prefix, suffix) \
    MPT_COUNT_TO_53_(prefix, suffix), prefix ## 54 ## suffix

#define MPT_COUNT_TO_54(prefix, suffix) \
    MPT_COUNT_TO_54_(prefix, suffix) 

#define MPT_COUNT_TO_54_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_53_(prefix, suffix)

#define MPT_COUNT_TO_55_(prefix, suffix) \
    MPT_COUNT_TO_54_(prefix, suffix), prefix ## 55 ## suffix

#define MPT_COUNT_TO_55(prefix, suffix) \
    MPT_COUNT_TO_55_(prefix, suffix) 

#define MPT_COUNT_TO_55_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_54_(prefix, suffix)

#define MPT_COUNT_TO_56_(prefix, suffix) \
    MPT_COUNT_TO_55_(prefix, suffix), prefix ## 56 ## suffix

#define MPT_COUNT_TO_56(prefix, suffix) \
    MPT_COUNT_TO_56_(prefix, suffix) 

#define MPT_COUNT_TO_56_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_55_(prefix, suffix)

#define MPT_COUNT_TO_57_(prefix, suffix) \
    MPT_COUNT_TO_56_(prefix, suffix), prefix ## 57 ## suffix

#define MPT_COUNT_TO_57(prefix, suffix) \
    MPT_COUNT_TO_57_(prefix, suffix) 

#define MPT_COUNT_TO_57_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_56_(prefix, suffix)

#define MPT_COUNT_TO_58_(prefix, suffix) \
    MPT_COUNT_TO_57_(prefix, suffix), prefix ## 58 ## suffix

#define MPT_COUNT_TO_58(prefix, suffix) \
    MPT_COUNT_TO_58_(prefix, suffix) 

#define MPT_COUNT_TO_58_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_57_(prefix, suffix)

#define MPT_COUNT_TO_59_(prefix, suffix) \
    MPT_COUNT_TO_58_(prefix, suffix), prefix ## 59 ## suffix

#define MPT_COUNT_TO_59(prefix, suffix) \
    MPT_COUNT_TO_59_(prefix, suffix) 

#define MPT_COUNT_TO_59_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_58_(prefix, suffix)

#define MPT_COUNT_TO_60_(prefix, suffix) \
    MPT_COUNT_TO_59_(prefix, suffix), prefix ## 60 ## suffix

#define MPT_COUNT_TO_60(prefix, suffix) \
    MPT_COUNT_TO_60_(prefix, suffix) 

#define MPT_COUNT_TO_60_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_59_(prefix, suffix)

#define MPT_COUNT_TO_61_(prefix, suffix) \
    MPT_COUNT_TO_60_(prefix, suffix), prefix ## 61 ## suffix

#define MPT_COUNT_TO_61(prefix, suffix) \
    MPT_COUNT_TO_61_(prefix, suffix) 

#define MPT_COUNT_TO_61_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_60_(prefix, suffix)

#define MPT_COUNT_TO_62_(prefix, suffix) \
    MPT_COUNT_TO_61_(prefix, suffix), prefix ## 62 ## suffix

#define MPT_COUNT_TO_62(prefix, suffix) \
    MPT_COUNT_TO_62_(prefix, suffix) 

#define MPT_COUNT_TO_62_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_61_(prefix, suffix)

#define MPT_COUNT_TO_63_(prefix, suffix) \
    MPT_COUNT_TO_62_(prefix, suffix), prefix ## 63 ## suffix

#define MPT_COUNT_TO_63(prefix, suffix) \
    MPT_COUNT_TO_63_(prefix, suffix) 

#define MPT_COUNT_TO_63_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_62_(prefix, suffix)

#define MPT_COUNT_TO_64_(prefix, suffix) \
    MPT_COUNT_TO_63_(prefix, suffix), prefix ## 64 ## suffix

#define MPT_COUNT_TO_64(prefix, suffix) \
    MPT_COUNT_TO_64_(prefix, suffix) 

#define MPT_COUNT_TO_64_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_63_(prefix, suffix)

#define MPT_COUNT_TO_65_(prefix, suffix) \
    MPT_COUNT_TO_64_(prefix, suffix), prefix ## 65 ## suffix

#define MPT_COUNT_TO_65(prefix, suffix) \
    MPT_COUNT_TO_65_(prefix, suffix) 

#define MPT_COUNT_TO_65_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_64_(prefix, suffix)

#define MPT_COUNT_TO_66_(prefix, suffix) \
    MPT_COUNT_TO_65_(prefix, suffix), prefix ## 66 ## suffix

#define MPT_COUNT_TO_66(prefix, suffix) \
    MPT_COUNT_TO_66_(prefix, suffix) 

#define MPT_COUNT_TO_66_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_65_(prefix, suffix)

#define MPT_COUNT_TO_67_(prefix, suffix) \
    MPT_COUNT_TO_66_(prefix, suffix), prefix ## 67 ## suffix

#define MPT_COUNT_TO_67(prefix, suffix) \
    MPT_COUNT_TO_67_(prefix, suffix) 

#define MPT_COUNT_TO_67_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_66_(prefix, suffix)

#define MPT_COUNT_TO_68_(prefix, suffix) \
    MPT_COUNT_TO_67_(prefix, suffix), prefix ## 68 ## suffix

#define MPT_COUNT_TO_68(prefix, suffix) \
    MPT_COUNT_TO_68_(prefix, suffix) 

#define MPT_COUNT_TO_68_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_67_(prefix, suffix)

#define MPT_COUNT_TO_69_(prefix, suffix) \
    MPT_COUNT_TO_68_(prefix, suffix), prefix ## 69 ## suffix

#define MPT_COUNT_TO_69(prefix, suffix) \
    MPT_COUNT_TO_69_(prefix, suffix) 

#define MPT_COUNT_TO_69_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_68_(prefix, suffix)

#define MPT_COUNT_TO_70_(prefix, suffix) \
    MPT_COUNT_TO_69_(prefix, suffix), prefix ## 70 ## suffix

#define MPT_COUNT_TO_70(prefix, suffix) \
    MPT_COUNT_TO_70_(prefix, suffix) 

#define MPT_COUNT_TO_70_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_69_(prefix, suffix)

#define MPT_COUNT_TO_71_(prefix, suffix) \
    MPT_COUNT_TO_70_(prefix, suffix), prefix ## 71 ## suffix

#define MPT_COUNT_TO_71(prefix, suffix) \
    MPT_COUNT_TO_71_(prefix, suffix) 

#define MPT_COUNT_TO_71_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_70_(prefix, suffix)

#define MPT_COUNT_TO_72_(prefix, suffix) \
    MPT_COUNT_TO_71_(prefix, suffix), prefix ## 72 ## suffix

#define MPT_COUNT_TO_72(prefix, suffix) \
    MPT_COUNT_TO_72_(prefix, suffix) 

#define MPT_COUNT_TO_72_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_71_(prefix, suffix)

#define MPT_COUNT_TO_73_(prefix, suffix) \
    MPT_COUNT_TO_72_(prefix, suffix), prefix ## 73 ## suffix

#define MPT_COUNT_TO_73(prefix, suffix) \
    MPT_COUNT_TO_73_(prefix, suffix) 

#define MPT_COUNT_TO_73_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_72_(prefix, suffix)

#define MPT_COUNT_TO_74_(prefix, suffix) \
    MPT_COUNT_TO_73_(prefix, suffix), prefix ## 74 ## suffix

#define MPT_COUNT_TO_74(prefix, suffix) \
    MPT_COUNT_TO_74_(prefix, suffix) 

#define MPT_COUNT_TO_74_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_73_(prefix, suffix)

#define MPT_COUNT_TO_75_(prefix, suffix) \
    MPT_COUNT_TO_74_(prefix, suffix), prefix ## 75 ## suffix

#define MPT_COUNT_TO_75(prefix, suffix) \
    MPT_COUNT_TO_75_(prefix, suffix) 

#define MPT_COUNT_TO_75_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_74_(prefix, suffix)

#define MPT_COUNT_TO_76_(prefix, suffix) \
    MPT_COUNT_TO_75_(prefix, suffix), prefix ## 76 ## suffix

#define MPT_COUNT_TO_76(prefix, suffix) \
    MPT_COUNT_TO_76_(prefix, suffix) 

#define MPT_COUNT_TO_76_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_75_(prefix, suffix)

#define MPT_COUNT_TO_77_(prefix, suffix) \
    MPT_COUNT_TO_76_(prefix, suffix), prefix ## 77 ## suffix

#define MPT_COUNT_TO_77(prefix, suffix) \
    MPT_COUNT_TO_77_(prefix, suffix) 

#define MPT_COUNT_TO_77_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_76_(prefix, suffix)

#define MPT_COUNT_TO_78_(prefix, suffix) \
    MPT_COUNT_TO_77_(prefix, suffix), prefix ## 78 ## suffix

#define MPT_COUNT_TO_78(prefix, suffix) \
    MPT_COUNT_TO_78_(prefix, suffix) 

#define MPT_COUNT_TO_78_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_77_(prefix, suffix)

#define MPT_COUNT_TO_79_(prefix, suffix) \
    MPT_COUNT_TO_78_(prefix, suffix), prefix ## 79 ## suffix

#define MPT_COUNT_TO_79(prefix, suffix) \
    MPT_COUNT_TO_79_(prefix, suffix) 

#define MPT_COUNT_TO_79_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_78_(prefix, suffix)

#define MPT_COUNT_TO_80_(prefix, suffix) \
    MPT_COUNT_TO_79_(prefix, suffix), prefix ## 80 ## suffix

#define MPT_COUNT_TO_80(prefix, suffix) \
    MPT_COUNT_TO_80_(prefix, suffix) 

#define MPT_COUNT_TO_80_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_79_(prefix, suffix)

#define MPT_COUNT_TO_81_(prefix, suffix) \
    MPT_COUNT_TO_80_(prefix, suffix), prefix ## 81 ## suffix

#define MPT_COUNT_TO_81(prefix, suffix) \
    MPT_COUNT_TO_81_(prefix, suffix) 

#define MPT_COUNT_TO_81_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_80_(prefix, suffix)

#define MPT_COUNT_TO_82_(prefix, suffix) \
    MPT_COUNT_TO_81_(prefix, suffix), prefix ## 82 ## suffix

#define MPT_COUNT_TO_82(prefix, suffix) \
    MPT_COUNT_TO_82_(prefix, suffix) 

#define MPT_COUNT_TO_82_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_81_(prefix, suffix)

#define MPT_COUNT_TO_83_(prefix, suffix) \
    MPT_COUNT_TO_82_(prefix, suffix), prefix ## 83 ## suffix

#define MPT_COUNT_TO_83(prefix, suffix) \
    MPT_COUNT_TO_83_(prefix, suffix) 

#define MPT_COUNT_TO_83_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_82_(prefix, suffix)

#define MPT_COUNT_TO_84_(prefix, suffix) \
    MPT_COUNT_TO_83_(prefix, suffix), prefix ## 84 ## suffix

#define MPT_COUNT_TO_84(prefix, suffix) \
    MPT_COUNT_TO_84_(prefix, suffix) 

#define MPT_COUNT_TO_84_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_83_(prefix, suffix)

#define MPT_COUNT_TO_85_(prefix, suffix) \
    MPT_COUNT_TO_84_(prefix, suffix), prefix ## 85 ## suffix

#define MPT_COUNT_TO_85(prefix, suffix) \
    MPT_COUNT_TO_85_(prefix, suffix) 

#define MPT_COUNT_TO_85_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_84_(prefix, suffix)

#define MPT_COUNT_TO_86_(prefix, suffix) \
    MPT_COUNT_TO_85_(prefix, suffix), prefix ## 86 ## suffix

#define MPT_COUNT_TO_86(prefix, suffix) \
    MPT_COUNT_TO_86_(prefix, suffix) 

#define MPT_COUNT_TO_86_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_85_(prefix, suffix)

#define MPT_COUNT_TO_87_(prefix, suffix) \
    MPT_COUNT_TO_86_(prefix, suffix), prefix ## 87 ## suffix

#define MPT_COUNT_TO_87(prefix, suffix) \
    MPT_COUNT_TO_87_(prefix, suffix) 

#define MPT_COUNT_TO_87_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_86_(prefix, suffix)

#define MPT_COUNT_TO_88_(prefix, suffix) \
    MPT_COUNT_TO_87_(prefix, suffix), prefix ## 88 ## suffix

#define MPT_COUNT_TO_88(prefix, suffix) \
    MPT_COUNT_TO_88_(prefix, suffix) 

#define MPT_COUNT_TO_88_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_87_(prefix, suffix)

#define MPT_COUNT_TO_89_(prefix, suffix) \
    MPT_COUNT_TO_88_(prefix, suffix), prefix ## 89 ## suffix

#define MPT_COUNT_TO_89(prefix, suffix) \
    MPT_COUNT_TO_89_(prefix, suffix) 

#define MPT_COUNT_TO_89_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_88_(prefix, suffix)

#define MPT_COUNT_TO_90_(prefix, suffix) \
    MPT_COUNT_TO_89_(prefix, suffix), prefix ## 90 ## suffix

#define MPT_COUNT_TO_90(prefix, suffix) \
    MPT_COUNT_TO_90_(prefix, suffix) 

#define MPT_COUNT_TO_90_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_89_(prefix, suffix)

#define MPT_COUNT_TO_91_(prefix, suffix) \
    MPT_COUNT_TO_90_(prefix, suffix), prefix ## 91 ## suffix

#define MPT_COUNT_TO_91(prefix, suffix) \
    MPT_COUNT_TO_91_(prefix, suffix) 

#define MPT_COUNT_TO_91_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_90_(prefix, suffix)

#define MPT_COUNT_TO_92_(prefix, suffix) \
    MPT_COUNT_TO_91_(prefix, suffix), prefix ## 92 ## suffix

#define MPT_COUNT_TO_92(prefix, suffix) \
    MPT_COUNT_TO_92_(prefix, suffix) 

#define MPT_COUNT_TO_92_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_91_(prefix, suffix)

#define MPT_COUNT_TO_93_(prefix, suffix) \
    MPT_COUNT_TO_92_(prefix, suffix), prefix ## 93 ## suffix

#define MPT_COUNT_TO_93(prefix, suffix) \
    MPT_COUNT_TO_93_(prefix, suffix) 

#define MPT_COUNT_TO_93_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_92_(prefix, suffix)

#define MPT_COUNT_TO_94_(prefix, suffix) \
    MPT_COUNT_TO_93_(prefix, suffix), prefix ## 94 ## suffix

#define MPT_COUNT_TO_94(prefix, suffix) \
    MPT_COUNT_TO_94_(prefix, suffix) 

#define MPT_COUNT_TO_94_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_93_(prefix, suffix)

#define MPT_COUNT_TO_95_(prefix, suffix) \
    MPT_COUNT_TO_94_(prefix, suffix), prefix ## 95 ## suffix

#define MPT_COUNT_TO_95(prefix, suffix) \
    MPT_COUNT_TO_95_(prefix, suffix) 

#define MPT_COUNT_TO_95_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_94_(prefix, suffix)

#define MPT_COUNT_TO_96_(prefix, suffix) \
    MPT_COUNT_TO_95_(prefix, suffix), prefix ## 96 ## suffix

#define MPT_COUNT_TO_96(prefix, suffix) \
    MPT_COUNT_TO_96_(prefix, suffix) 

#define MPT_COUNT_TO_96_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_95_(prefix, suffix)

#define MPT_COUNT_TO_97_(prefix, suffix) \
    MPT_COUNT_TO_96_(prefix, suffix), prefix ## 97 ## suffix

#define MPT_COUNT_TO_97(prefix, suffix) \
    MPT_COUNT_TO_97_(prefix, suffix) 

#define MPT_COUNT_TO_97_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_96_(prefix, suffix)

#define MPT_COUNT_TO_98_(prefix, suffix) \
    MPT_COUNT_TO_97_(prefix, suffix), prefix ## 98 ## suffix

#define MPT_COUNT_TO_98(prefix, suffix) \
    MPT_COUNT_TO_98_(prefix, suffix) 

#define MPT_COUNT_TO_98_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_97_(prefix, suffix)

#define MPT_COUNT_TO_99_(prefix, suffix) \
    MPT_COUNT_TO_98_(prefix, suffix), prefix ## 99 ## suffix

#define MPT_COUNT_TO_99(prefix, suffix) \
    MPT_COUNT_TO_99_(prefix, suffix) 

#define MPT_COUNT_TO_99_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_98_(prefix, suffix)

#endif
