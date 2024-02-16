
/*                                 ADVANTAGE 360 PRO KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────────────┬────────────────────────────╮ ╭────────────────────────────┬────────────────────────────╮
 │  0   1   2   3   4   5   6 │  7   8   9  10  11  12  13 │ │ LN5 LN4 LN3 LN2 LN1 LN0 -- │ --  RN0 RN1 RN2 RN3 RN4 RN5│
 │ 14  15  16  17  18  19  20 │ 21  22  23  24  25  26  27 │ │ LT5 LT4 LT3 LT2 LT1 LT0 -- │ --  RT0 RT1 RT2 RT3 RT4 RT5│
 │ 28  29  30  31  32  33  34 │ 39  40  41  42  43  44  45 │ │ LM5 LM4 LM3 LM2 LM1 LM0 -- │ --  RM0 RM1 RM2 RM3 RM4 RM5│
 │ 46  47  48  49  50  51 ╭───┴───╮ 54  55  56  57  58  59 │ │ LB5 LB4 LB3 LB2 LB1 LB0╭───┴───╮ RB0 RB1 RB2 RB3 RB4 RB5│
 │ 60  61  62  63  64╭────╯       ╰────╮71  72  73  74  75 │ │ --  --  --  --  --╭────╯       ╰────╮--  --  --  --  -- │
 ╰───────────────────┼────────┬────────┼───────────────────╯ ╰───────────────────┼────────┬────────┼───────────────────╯
                 ╭───╯ 35  36 │ 37  38 ╰───╮                                 ╭───╯LT4 LT5 │ RT5 RT4╰───╮
                 │         52 │ 53         │                                 │        LT3 │ RT3        │
                 │ 65  66  67 │ 68  69  70 │                                 │LT2 LT1 LT0 │ RT0 RT1 RT2│
                 ╰────────────┴────────────╯                                 ╰────────────┴────────────╯ 
                                        REFERENCE: repo @ assets/key-positions.md
*/

// Define keys by Row & Column inside to outside - probably overkill
#define POS_LH_R1C1  6
#define POS_LH_R1C2  5
#define POS_LH_R1C3  4
#define POS_LH_R1C4  3
#define POS_LH_R1C5  2
#define POS_LH_R1C6  1
#define POS_LH_R1C7  0
#define POS_LH_R2C1 20
#define POS_LH_R2C2 19
#define POS_LH_R2C3 18
#define POS_LH_R2C4 17
#define POS_LH_R2C5 16
#define POS_LH_R2C6 15
#define POS_LH_R2C7 14
#define POS_LH_R3C1 34
#define POS_LH_R3C2 33
#define POS_LH_R3C3 32
#define POS_LH_R3C4 31
#define POS_LH_R3C5 30
#define POS_LH_R3C6 29
#define POS_LH_R3C7 28
#define POS_LH_R4C2 51
#define POS_LH_R4C3 50
#define POS_LH_R4C4 49
#define POS_LH_R4C5 48
#define POS_LH_R4C6 47
#define POS_LH_R4C7 46
#define POS_LH_R5C3 64
#define POS_LH_R5C4 63
#define POS_LH_R5C5 62
#define POS_LH_R5C6 61
#define POS_LH_R5C7 60

#define POS_RH_R1C1  7
#define POS_RH_R1C2  8
#define POS_RH_R1C3  9
#define POS_RH_R1C4 10
#define POS_RH_R1C5 11
#define POS_RH_R1C6 12
#define POS_RH_R1C7 13
#define POS_RH_R2C1 21
#define POS_RH_R2C2 22
#define POS_RH_R2C3 23
#define POS_RH_R2C4 24
#define POS_RH_R2C5 25
#define POS_RH_R2C6 26
#define POS_RH_R2C7 27
#define POS_RH_R3C1 39
#define POS_RH_R3C2 40
#define POS_RH_R3C3 41
#define POS_RH_R3C4 42
#define POS_RH_R3C5 43
#define POS_RH_R3C6 44
#define POS_RH_R3C7 45
#define POS_RH_R4C2 54
#define POS_RH_R4C3 55
#define POS_RH_R4C4 56
#define POS_RH_R4C5 57
#define POS_RH_R4C6 58
#define POS_RH_R4C7 59
#define POS_RH_R5C3 71
#define POS_RH_R5C4 72
#define POS_RH_R5C5 73
#define POS_RH_R5C6 74
#define POS_RH_R5C7 75

#define POS_LH_T1C1 35
#define POS_LH_T1C2 36
#define POS_LH_T2C1 52
#define POS_LH_T3C1 67
#define POS_LH_T3C2 66
#define POS_LH_T3C3 65

#define POS_RH_T1C1 37
#define POS_RH_T1C2 38
#define POS_RH_T2C1 53
#define POS_RH_T3C1 68
#define POS_RH_T3C2 69
#define POS_RH_T3C3 70

// Define keys by Row - maybe a useful aggregate
#define POS_LH_R1   0  1  2  3  4  5  6
#define POS_LH_R2  14 15 16 17 18 19 20
#define POS_LH_R3  28 29 30 31 32 33 34
#define POS_LH_R4  46 47 48 49 50 51
#define POS_LH_R5  60 61 62 63 64

#define POS_RH_R1   7  8  9 10 11 12 13
#define POS_RH_R2  21 22 23 24 25 26 27
#define POS_RH_R3  39 40 41 42 43 44 45
#define POS_RH_R4     54 55 56 57 58 59
#define POS_RH_R5        71 72 73 74 75

#define POS_LH_R2_ALPHA  15 16 17 18 19
#define POS_LH_R3_ALPHA  29 30 31 32 33 
#define POS_LH_R4_ALPHA  47 48 49 50 51

#define POS_RH_R2_ALPHA  22 23 24 25 26
#define POS_RH_R3_ALPHA  40 41 42 43 44
#define POS_RH_R4_ALPHA  54 55 56 57 58

#define POS_TH_LH  35 36 52 65 66 67
#define POS_TH_RH  37 38 53 68 69 70

#define POS_LH_ALL    POS_LH_R1  POS_LH_R2  POS_LH_R3  POS_LH_R4  POS_LH_R5 
#define POS_RH_ALL    POS_RH_R1  POS_RH_R2  POS_RH_R3  POS_RH_R4  POS_RH_R5
#define POS_LH_ALPHA  POS_LH_R2_ALPHA  POS_LH_R3_ALPHA  POS_LH_R4_ALPHA
#define POS_RH_ALPHA  POS_RH_R2_ALPHA  POS_RH_R3_ALPHA  POS_RH_R4_ALPHA
#define POS_TH        POS_TH_LH  POS_TH_RH

