/* sixhi.c - Data for a 6x6 font with a decent upper case and a really
   horrible looking lower case.  What can I say.  Gary likes it.  He
   pays my bills. */

#include "jimk.h"
#include "gemfont.h"

UBYTE sixhi_data[] = {
0x0,0x82,0x4,0x21,0xcf,0xb6,0xd,0xe3,
0x4,0xe3,0x81,0x50,0xf9,0x87,0xbc,0xc3,
0xcc,0x3e,0x73,0xe0,0x38,0x1f,0x84,0x42,
0x0,0xcd,0x94,0x7b,0x26,0xc,0x31,0x84,
0x88,0x0,0x0,0x6,0x70,0x4f,0x3c,0x33,
0xc7,0x3e,0x71,0xc3,0xc,0x18,0x6,0x1c,
0x71,0xcf,0x1e,0xf3,0xef,0x9e,0x89,0xc0,
0x92,0x42,0x28,0x9c,0xf1,0xcf,0x1e,0xfa,
0x28,0xa2,0x8a,0x2f,0x9e,0xc1,0xe2,0x0,
0x60,0x8,0x0,0x8,0x1,0x80,0x80,0x1,
0x20,0x60,0x0,0x0,0x0,0x0,0x0,0x20,
0x0,0x0,0x0,0x0,0xe,0x31,0xc4,0x0,
0x79,0x41,0x8,0x51,0x2,0x0,0x21,0x44,
0x14,0x21,0x5,0x8,0x20,0x7,0x88,0x51,
0x2,0x10,0x51,0x45,0x4,0x1a,0x2f,0x6,
0x10,0x41,0x4,0xf1,0xe7,0x1c,0x60,0x0,
0x30,0xc0,0xc3,0x6c,0x69,0xa3,0x42,0x1,
0xe4,0x1a,0x69,0x41,0x8,0x69,0xe7,0xbd,
0x4b,0xa9,0xbc,0x7b,0xff,0x1c,0x7b,0xfc,
0x1e,0xf3,0xd,0x8e,0xf9,0xbf,0xb6,0xf9,
0xcd,0x5e,0x3b,0xe0,0x3e,0xd8,0xc0,0x0,
0x1,0xcf,0xc0,0xf8,0xe0,0x0,0x71,0xc7,
0xc,0x18,0x83,0x8c,0x78,0x86,0x6,0xc,
0xc2,0x1a,0x30,0xc0,0x0,0x71,0xc7,0x3e,
0x1,0xc2,0x6,0x62,0xaf,0x2a,0x1a,0x17,
0x86,0x82,0x1,0x50,0xc8,0x80,0x84,0xc2,
0xc,0x2,0x53,0x67,0x20,0x3f,0x42,0xf4,
0x0,0xcd,0xbe,0xa3,0x4d,0xc,0x60,0xc3,
0x8,0x0,0x0,0xc,0x98,0xc0,0x82,0x52,
0x8,0x2,0x8a,0x23,0xc,0x31,0xe3,0x26,
0x8a,0x28,0xa0,0x8a,0x8,0x20,0x88,0x80,
0x94,0x43,0x6c,0xa2,0x8a,0x28,0xa0,0x22,
0x28,0xa2,0x52,0x21,0x18,0x60,0x67,0x0,
0x61,0xcf,0x1c,0x79,0xc2,0x1e,0xb1,0x81,
0x24,0x21,0x4f,0x1c,0xf1,0xe7,0xe,0x72,
0x28,0xa2,0x4a,0x27,0x8c,0x30,0xce,0x88,
0x80,0x2,0x14,0x0,0x80,0x1e,0x50,0x2,
0x0,0x50,0x80,0x0,0xfb,0xca,0x14,0x0,
0x85,0x8,0x0,0x0,0xe,0x23,0x6d,0x88,
0x20,0x82,0x8,0x0,0x0,0xa2,0x0,0x0,
0x30,0xc0,0x6,0xf6,0xb2,0xc4,0x8c,0x72,
0xc2,0x2c,0xb0,0x2,0x1c,0xeb,0x38,0xd7,
0x1,0x2d,0x8c,0x8,0x61,0x8c,0x31,0xbd,
0x86,0x1b,0xe7,0xc6,0xd9,0xb9,0xb6,0x18,
0x6d,0x56,0x18,0x6f,0xe6,0xd8,0xa2,0x16,
0x6b,0x66,0xfe,0x61,0xc6,0xbe,0x73,0x6d,
0x9a,0x21,0xc4,0x12,0x3,0xe1,0x98,0x10,
0xc0,0x2c,0x49,0xe0,0x7,0x68,0x63,0x0,
0x3,0x62,0x3b,0xdf,0x6e,0x1c,0xb2,0x97,
0x84,0xde,0xe1,0x50,0xc8,0x8f,0xbe,0xc3,
0xef,0x8e,0x73,0x20,0xb7,0x60,0x62,0x94,
0x0,0xc9,0x14,0x70,0x86,0x18,0x60,0xc7,
0xbe,0x1,0xe0,0x18,0xa8,0x47,0x1c,0x93,
0xcf,0x4,0x71,0xe0,0x0,0x60,0x1,0x8c,
0xbb,0xef,0x20,0x8b,0xcf,0x26,0xf8,0x80,
0x98,0x42,0xaa,0xa2,0xf2,0x2f,0x1c,0x22,
0x28,0xaa,0x21,0x42,0x18,0x30,0x6d,0x80,
0x30,0x28,0xa0,0x8b,0xe7,0xa2,0xc8,0x81,
0x38,0x23,0xe8,0xa2,0x8a,0x24,0x98,0x22,
0x28,0xaa,0x32,0x21,0x18,0x30,0x6b,0x9c,
0x82,0x27,0x1c,0x71,0xc7,0x20,0x71,0xc7,
0x18,0x21,0x87,0x1c,0x80,0xef,0x9c,0x71,
0xc8,0xa2,0x89,0xc8,0x98,0x71,0xcf,0x1e,
0x71,0x87,0x22,0xf1,0x2f,0xa2,0x61,0xe7,
0xb6,0xcc,0xcd,0x9b,0x71,0xc5,0x96,0xba,
0xe7,0x1c,0x70,0x0,0x8,0xea,0xdb,0x55,
0x49,0x27,0xc,0x18,0x6d,0x8c,0x19,0xbd,
0x86,0x18,0x66,0x46,0xd9,0xbd,0x9c,0xd8,
0x6f,0x56,0x18,0x66,0xf6,0x71,0xc7,0x2d,
0xd3,0xc6,0x54,0x33,0x66,0x8c,0xab,0xed,
0x9c,0x72,0xa7,0x92,0x78,0x86,0x6,0x30,
0xcf,0x80,0x30,0xc3,0x4,0x68,0xc1,0x0,
0x0,0x8d,0x86,0x62,0xac,0xaa,0xe2,0xdf,
0xdc,0x93,0xa3,0x58,0xd9,0xcc,0x6,0xd8,
0x69,0x8c,0xdb,0xef,0xa4,0x40,0x21,0x68,
0x0,0xc0,0x3e,0x29,0x6e,0x80,0x60,0xc3,
0x8,0x30,0x3,0x30,0xc8,0x48,0x2,0xf8,
0x28,0x88,0x88,0x23,0xc,0x31,0xe3,0xc,
0xb2,0x28,0xa0,0x8a,0x8,0x22,0x88,0x88,
0x94,0x42,0x29,0xa2,0x82,0x2a,0x2,0x22,
0x25,0x36,0x50,0x84,0x18,0x18,0x60,0x0,
0x3,0xe8,0xa0,0x8a,0x2,0x1e,0x88,0x81,
0x24,0x22,0xa8,0xa2,0x8a,0x24,0x6,0x22,
0x25,0x2a,0x31,0xe2,0xc,0x30,0xc1,0x32,
0x82,0x2f,0x82,0x8,0x20,0xa0,0xfb,0xef,
0x88,0x20,0x88,0xa2,0xf3,0x8a,0x22,0x8a,
0x28,0xa2,0x7a,0x28,0x8e,0x20,0x8d,0x88,
0x8,0x88,0xa2,0x89,0xa7,0x9c,0x61,0x0,
0x8b,0x14,0xc6,0xf6,0xa,0x26,0x9a,0xa2,
0xc8,0xa2,0x88,0x0,0x8,0x6a,0xf8,0xc0,
0x4b,0xad,0x8c,0x38,0x6d,0x8c,0x19,0xbd,
0x80,0x18,0x66,0x46,0xd9,0xb1,0x8e,0xd0,
0x6c,0x56,0x18,0x66,0xc6,0x31,0xcd,0xad,
0xd3,0x66,0x14,0x63,0x66,0x8c,0xab,0x65,
0x36,0xaa,0xa4,0x12,0x0,0x0,0x0,0x30,
0xc0,0x1a,0x0,0x3,0x34,0x69,0xe7,0x0,
0x0,0x87,0x4,0x21,0xc9,0xb6,0x42,0x10,
0x3c,0x18,0xe7,0x5c,0xd9,0xcc,0x6,0xf8,
0x6d,0x8c,0xd8,0x67,0x3c,0x71,0xee,0xf0,
0x0,0x0,0x14,0xf2,0x6d,0x0,0x31,0x84,
0x88,0x30,0x3,0x20,0x70,0x4f,0xbc,0x13,
0xc7,0x8,0x71,0xc3,0x4,0x18,0x6,0x0,
0x82,0x2f,0x1e,0xf3,0xe8,0x1e,0x89,0xc7,
0x12,0x7a,0x28,0x9c,0x81,0xc9,0xbc,0x21,
0xe2,0x22,0x88,0x8f,0x9e,0x9,0xe0,0x0,
0x1,0xef,0x1c,0x79,0xc2,0x2,0x89,0xc1,
0x22,0x72,0x28,0x9c,0xf1,0xe4,0x1c,0x11,
0xe2,0x36,0x48,0x27,0x8e,0x31,0xc0,0x3e,
0x7a,0x28,0x3e,0xfb,0xef,0x9e,0x82,0x8,
0x8,0x20,0x8f,0xbe,0x81,0xeb,0xa2,0x8a,
0x28,0xa2,0xa,0x28,0x84,0x79,0xcf,0x8,
0xf8,0x88,0xa2,0x89,0x60,0x0,0xc9,0x0,
0x86,0x3c,0xc3,0x6c,0xfa,0x24,0x8c,0x79,
0xef,0xbe,0x88,0x0,0x8,0x2b,0x1a,0x40,
0x48,0x2c,0xbe,0x68,0x6d,0x8c,0x19,0xbf,
0x80,0xf1,0xe6,0xde,0x73,0xff,0xbe,0xc0,
0x6f,0xf6,0x18,0x67,0xc6,0x32,0x88,0x9a,
0x6b,0xc6,0x14,0xc1,0xc7,0xcc,0x71,0xcd,
0xb6,0x71,0xc3,0x92,0x7b,0xe7,0x9e,0x30,
0x82,0x2c,0x0,0x0,0x1c,0x0,0x0,0x0,
0x0,0x82,0x0,0x0,0x0,0x0,0x1,0xe3,
0x18,0x10,0xb6,0x4c,0xf9,0xcf,0xbe,0x1b,
0xef,0x8c,0xf8,0x60,0x7,0x58,0xac,0x0,
0x0,0xc0,0x0,0x20,0x6,0x80,0x0,0x0,
0x0,0x60,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x0,0x0,0xc,
0x78,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x60,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3e,
0x0,0x0,0x0,0x0,0x0,0x3c,0x0,0xe,
0x0,0x0,0x0,0x0,0x80,0x20,0x0,0x0,
0x0,0x0,0x3,0xc0,0x0,0x30,0x0,0x0,
0xc1,0xe7,0x1e,0x79,0xe7,0xb8,0x71,0xc7,
0x1c,0x71,0xc8,0xa2,0xf8,0x0,0x1c,0x71,
0xc7,0x9e,0xf1,0xc7,0x80,0x0,0x8c,0x30,
0x79,0xc7,0x1e,0x89,0x2f,0xbe,0x70,0x0,
0xf,0x4,0xc0,0x0,0x79,0xcb,0x10,0x0,
0x8,0xa2,0x70,0x0,0x0,0x29,0xe7,0x80,
0x10,0xc0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,
0x0,0x0,0x0,0x0,0x0,0x1,0x80,0x0,
0x3,0x6,0x0,0xf8,0xc,0x8,0x70,0x0,
0x1c,0xc0,0x80,0x0,0x0,0x0,0x0,0x33,
0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
};
sixhi_ch_ofst[257] = {
0,6,12,18,24,30,36,42,
48,54,60,66,72,78,84,90,
96,102,108,114,120,126,132,138,
144,150,156,162,168,174,180,186,
192,198,204,210,216,222,228,234,
240,246,252,258,264,270,276,282,
288,294,300,306,312,318,324,330,
336,342,348,354,360,366,372,378,
384,390,396,402,408,414,420,426,
432,438,444,450,456,462,468,474,
480,486,492,498,504,510,516,522,
528,534,540,546,552,558,564,570,
576,582,588,594,600,606,612,618,
624,630,636,642,648,654,660,666,
672,678,684,690,696,702,708,714,
720,726,732,738,744,750,756,762,
768,774,780,786,792,798,804,810,
816,822,828,834,840,846,852,858,
864,870,876,882,888,894,900,906,
912,918,924,930,936,942,948,954,
960,966,972,978,984,990,996,1002,
1008,1014,1020,1026,1032,1038,1044,1050,
1056,1062,1068,1074,1080,1086,1092,1098,
1104,1110,1116,1122,1128,1134,1140,1146,
1152,1158,1164,1170,1176,1182,1188,1194,
1200,1206,1212,1218,1224,1230,1236,1242,
1248,1254,1260,1266,1272,1278,1284,1290,
1296,1302,1308,1314,1320,1326,1332,1338,
1344,1350,1356,1362,1368,1374,1380,1386,
1392,1398,1404,1410,1416,1422,1428,1434,
1440,1446,1452,1458,1464,1470,1476,1482,
1488,1494,1500,1506,1512,1518,1524,1530,
1536,};

struct font_hdr sixhi_font = {
STPROP, 8, "", 0, 255,
4, 4, 3, 1, 1,
5, 6, 0, 3,
1, 1, 0x5555, 0xaaaa,
0xc, NULL, sixhi_ch_ofst, (WORD *)sixhi_data,
192, 6,
NULL,};
