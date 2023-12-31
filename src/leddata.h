#include <Arduino.h>


const uint8_t brightness[][4] PROGMEM = {
        // duration, red, green, blue
	{  1,   1,   1,   1},
	{ 11,   2,   2,   2},
	{  7,   3,   3,   3},
	{  4,   4,   4,   4},
	{  1,   5,   4,   4},
	{  1,   5,   5,   5},
	{  1,   6,   5,   5},
	{  1,   6,   6,   6},
	{  1,   7,   7,   7},
	{  1,   8,   7,   7},
	{  1,   8,   8,   8},
	{  1,   9,   8,   8},
	{  1,  11,   9,   9},
	{  1,  13,  11,  11},
	{  1,  13,  11,  13},
	{  1,  16,  13,  13},
	{  1,  19,  16,  16},
	{  1,  23,  19,  19},
	{  2,  27,  23,  23},
	{  1,  32,  27,  27},
	{  1,  38,  32,  32},
	{  1,  45,  32,  38},
	{  1,  54,  38,  38},
	{  1,  64,  45,  45},
	{  1,  64,  54,  54},
	{  1,  76,  64,  64},
	{  1,  90,  64,  76},
	{  1, 107,  76,  76},
	{  1, 128,  90,  90},
	{  1, 152, 107, 107},
	{  1, 180, 128, 128},
	{ 20, 152, 128, 128},
	{  3, 152, 107, 128},
	{  1, 152, 107, 107},
	{ 21, 128, 107, 107},
	{  1, 128, 107,  90},
	{  6, 128,  90,  90},
	{  6, 107,  90,  90},
	{  4, 107,  90,  76},
	{  8,  90,  76,  76},
	{  4,  90,  76,  64},
	{  9,  76,  76,  64},
	{  1,  76,  76,  54},
	{  5,  76,  64,  54},
	{  7,  64,  64,  45},
	{ 11,  64,  64,  38},
	{  6,  54,  54,  38},
	{  7,  54,  54,  32},
	{ 10,  45,  54,  32},
	{  6,  45,  54,  27},
	{  1,  45,  54,  32},
	{  1,  45,  54,  27},
	{ 30,  45,  54,  23},
	{  1,  45,  54,  27},
	{  1,  45,  54,  23},
	{  1,  45,  54,  27},
	{  1,  45,  54,  23},
	{ 11,  54,  54,  23},
	{  1,  45,  54,  23},
	{  1,  54,  54,  23},
	{ 22,  54,  64,  23},
	{ 28,  27,  23,   8},
	{ 93,  45,  38,  54},
	{  9,  38,  38,  64},
	{  4,  38,  38,  54},
	{ 17,  45,  38,  54},
	{ 12,  38,  38,  54},
	{ 15,  45,  38,  54},
	{ 18,  45,  38,  64},
	{  1,  45,  38,  54},
	{  3,  45,  38,  64},
	{  1,  45,  38,  54},
	{  1,  45,  38,  64},
	{  1,  45,  38,  54},
	{  1,  45,  38,  64},
	{  3,  45,  38,  54},
	{  1,  45,  38,  64},
	{  4,  45,  38,  54},
	{  4,  45,  38,  64},
	{  1,  45,  38,  54},
	{  2,  38,  38,  54},
	{ 15,  45,  38,  54},
	{  9,  45,  45,  64},
	{  1,  54,  54,  76},
	{ 52,  11,  13,   6},
	{  8,  11,  16,   6},
	{  1,  11,  13,   6},
	{  1,  11,  16,   6},
	{ 13,  11,  13,   6},
	{  1,  11,  16,   6},
	{ 28,  13,  16,   6},
	{  2,  13,  16,   7},
	{  5,  13,  19,   7},
	{  7,  16,  19,   7},
	{  2,  16,  19,   8},
	{ 71,  16,  19,   7},
	{  2,  13,  19,   7},
	{  9,  13,  16,   7},
	{  5,  13,  16,   6},
	{  4,  11,  16,   6},
	{  8,  11,  13,   6},
	{  6,  11,  13,   5},
	{  1,  11,  13,   6},
	{  1,  11,  13,   5},
	{  1,  11,  13,   6},
	{  1,  11,  13,   5},
	{  1,  11,  13,   6},
	{  1,  11,  13,   5},
	{ 20,   9,  13,   5},
	{ 12,   9,  11,   5},
	{  8,   8,  11,   5},
	{ 32,   8,   9,   5},
	{  2,   8,   9,   4},
	{  1,   8,   9,   5},
	{  1,   8,   9,   4},
	{  1,   8,   9,   5},
	{  1,   8,   9,   4},
	{  1,   8,   9,   5},
	{  1,   8,   9,   4},
	{  1,   8,   9,   5},
	{  1,   8,   9,   4},
	{ 20,   7,   9,   4},
	{  1,   8,   9,   4},
	{  1,   7,   9,   4},
	{ 36,   7,   8,   4},
	{ 16,   6,   8,   4},
	{ 50,   6,   7,   4},
	{  1,   6,   8,   4},
	{  1,   6,   7,   4},
	{  6,   5,   7,   4},
	{  1,   6,   7,   4},
	{  1,   5,   7,   4},
	{ 58,   5,   7,   3},
	{  1,   5,   7,   4},
	{  1,   5,   7,   3},
	{  3,   5,   7,   4},
	{  1,   5,   7,   3},
	{  1,   5,   7,   4},
	{  1,   5,   7,   3},
	{  1,   5,   7,   4},
	{  1,   5,   7,   3},
	{  1,   5,   7,   4},
	{  1,   5,   7,   3},
	{ 30,   4,   7,   3},
	{  1,   5,   7,   3},
	{  1,   4,   7,   3},
	{  1,   5,   7,   3},
	{  1,   4,   7,   3},
	{  1,   5,   7,   3},
	{  4,   5,   7,   4},
	{ 88,  16,  23,   8},
	{  4,  16,  23,   9},
	{  2,  19,  23,   9},
	{ 23,  16,  23,   9},
	{  7,  19,  23,  11},
	{ 67,  16,  23,  11},
	{  1,  19,  23,  11},
	{ 21,  16,  23,  11},
	{  3,  16,  19,  11},
	{  4,  16,  23,  11},
	{ 24,  16,  19,  11},
	{ 19,  16,  16,  11},
	{  2,  13,  16,  11},
	{  4,  13,  16,   9},
	{  1,  13,  16,  11},
	{  1,  13,  16,   9},
	{  3,  16,  16,   9},
	{  5,  13,  16,   9},
	{ 10,  38,  54, 128},
	{ 48,  38,  64, 128},
	{  8,  38,  64, 107},
	{  8,  38,  64, 128},
	{ 46,  45,  64,  90},
	{ 75,  19,  27,  32},
	{ 47,  19,  32,  32},
	{  4,  19,  32,  38},
	{  2,  19,  32,  32},
	{  3,  19,  32,  38},
	{  2,  23,  32,  38},
	{  3,  23,  38,  38},
	{  3,  23,  32,  38},
	{  5,  23,  32,  32},
	{  1,  27,  38,  38},
	{  1,  32,  38,  38},
	{  6,  27,  38,  32},
	{  1,  27,  32,  32},
	{  2,  23,  27,  27},
	{  1,  19,  27,  27},
	{  1,  19,  23,  27},
	{  2,  16,  23,  23},
	{  1,  16,  19,  23},
	{  1,  16,  19,  27},
	{  1,  16,  23,  27},
	{  2,  13,  19,  27},
	{  1,  16,  23,  27},
	{  1,  13,  19,  27},
	{  1,  16,  19,  27},
	{  1,  13,  19,  27},
	{  1,  16,  19,  27},
	{  1,  13,  19,  27},
	{  5,  13,  23,  27},
	{  1,  16,  23,  27},
	{ 15,  13,  19,  27},
	{  5,  13,  19,  23},
	{  5,  11,  19,  23},
	{  1,  11,  16,  19},
	{  6,  11,  19,  19},
	{  2,  32,  45,  38},
	{ 45,   8,   9,   5},
	{ 52,  11,  19,  23},
	{ 14,  13,  19,  23},
	{  1,  11,  19,  23},
	{  1,  13,  19,  23},
	{  3,  11,  19,  23},
	{  8,  11,  19,  19},
	{  1,  11,  19,  23},
	{  3,  13,  19,  23},
	{  3,  13,  19,  27},
	{  2,  13,  23,  27},
	{  1,  16,  23,  27},
	{  4,  13,  23,  27},
	{  3,  13,  19,  27},
	{  6,   9,  13,   9},
	{  1,   9,  13,  11},
	{  1,  11,  13,  11},
	{  1,  11,  16,  11},
	{  1,  13,  16,  13},
	{  4,  11,  13,  11},
	{  3,   9,  13,  11},
	{  1,  11,  13,  11},
	{  1,   9,  13,  11},
	{  1,  11,  13,  11},
	{  4,  11,  16,  11},
	{  2,  11,  16,  13},
	{  2,  13,  16,  13},
	{  1,  11,  16,  11},
	{  1,  11,  13,  11},
	{  4,   9,  13,  11},
	{  1,   9,  13,   9},
	{  1,  11,  13,  11},
	{  8,  13,  16,  13},
	{  7,  11,  13,  11},
	{ 10,  11,  16,  11},
	{  1,  13,  16,  11},
	{  7,  11,  13,  11},
	{  3,  11,  13,   9},
	{  7,  11,  13,  11},
	{  1,  13,  16,  11},
	{  2,  13,  16,  13},
	{  1,  16,  16,  13},
	{  4,  13,  16,  11},
	{  3,  11,  16,  11},
	{  3,  13,  16,  11},
	{  4,  16,  19,  13},
	{  8,  13,  16,  13},
	{  1,  13,  16,  11},
	{  3,  11,  16,  11},
	{  3,  32,  64,  64},
	{  9,  27,  64,  64},
	{  4,  27,  54,  64},
	{  1,  27,  64,  64},
	{  1,  27,  54,  64},
	{  8,  27,  54,  54},
	{212,  19,  27,  23},
	{ 17,  19,  27,  27},
	{ 23,  27,  54,  54},
	{121,  23,  54,  54},
	{  3,  23,  54,  45},
	{ 17,  23,  54,  54},
	{ 59,   9,  11,   6},
	{ 14,   8,  11,   6},
	{  1,   9,  11,   6},
	{  1,   8,  11,   6},
	{  1,   9,  11,   6},
	{  1,   8,  11,   6},
	{ 27,   9,  11,   6},
	{  2,   8,  11,   6},
	{  1,   9,  13,   6},
	{  1,  11,  16,   7},
	{  1,  11,  19,   7},
	{  1,  13,  23,   8},
	{  1,  16,  27,   8},
	{  2,  16,  32,   8},
	{ 46, 107,  90,  64},
	{  2, 107,  90,  54},
	{  5, 107,  90,  64},
	{ 10,  90,  90,  64},
	{  2,  90,  76,  64},
	{ 13,  90,  76,  54},
	{  2,  90,  76,  64},
	{  8,  90,  76,  54},
	{ 15,  90,  76,  64},
	{  3,  90,  76,  54},
	{  1,  90,  76,  64},
	{ 31,  90,  76,  54},
	{  7,  90,  76,  64},
	{  1,  90,  76,  54},
	{  2,  90,  76,  64},
	{  3,  90,  76,  54},
	{  2,  90,  76,  64},
	{  1,  90,  76,  54},
	{  1,  90,  76,  64},
	{  1,  90,  76,  54},
	{  3,  90,  76,  64},
	{  3,  90,  76,  54},
	{  2,  90,  76,  64},
	{  3,  90,  76,  54},
	{  2,  90,  76,  64},
	{  3,  90,  76,  54},
	{  2,  90,  76,  64},
	{  3,  90,  76,  54},
	{  2,  90,  76,  64},
	{  3,  90,  76,  54},
	{  2,  90,  76,  64},
	{  3,  90,  76,  54},
	{  2,  90,  76,  64},
	{  2,  90,  76,  54},
	{ 34,  90,  76,  64},
	{ 18,  76,  64,  64},
	{  1,  76,  64,  54},
	{  6,  90,  76,  54},
	{  5,  90,  76,  45},
	{  1,  45,  54,  19},
	{  1,  54,  54,  19},
	{  2,  45,  54,  19},
	{  5,  45,  64,  19},
	{  1,  54,  64,  19},
	{  1,  54,  64,  23},
	{  9,  54,  64,  19},
	{  9,  54,  64,  23},
	{  6,  54,  64,  19},
	{  3,  54,  64,  23},
	{ 33,  45,  54,  23},
	{  1,  45,  54,  19},
	{  2,  38,  45,  19},
	{ 15,  38,  38,  19},
	{  2,  32,  38,  19},
	{  4,  38,  38,  19},
	{  4,  32,  38,  19},
	{ 29,  38,  38,  23},
	{  7,  38,  38,  19},
	{  4,  38,  32,  19},
	{  9,  38,  32,  23},
	{  9,  38,  32,  19},
	{ 13,  38,  32,  23},
	{  1,  38,  32,  19},
	{  1,  38,  32,  23},
	{  1,  38,  32,  19},
	{  1,  38,  32,  23},
	{ 24,  32,  32,  16},
	{  4,  32,  27,  16},
	{  8,  32,  32,  16},
	{  6,  32,  32,  13},
	{ 30,  27,  27,  13},
	{ 14,  32,  32,  13},
	{ 30,  32,  27,  13},
	{  1,  32,  32,  13},
	{  2,  32,  27,  13},
	{ 14,  32,  27,  11},
	{  4,  27,  27,  11},
	{ 31,  38,  38,  16},
	{108,  38,  32,  16},
	{  2,  38,  38,  16},
	{ 10,  38,  32,  16},
	{  3,  32,  32,  13},
	{189,  38,  32,  16},
	{  2,  32,  32,  16},
	{  2,  38,  32,  16},
	{  3,  32,  32,  16},
	{  1,  38,  32,  16},
	{  4,  32,  32,  16},
	{  1,  38,  32,  16},
	{  2,  38,  38,  16},
	{  2,  38,  32,  16},
	{  6,  38,  32,  13},
	{  1,  38,  32,  16},
	{  1,  38,  32,  13},
	{  5,  38,  38,  16},
	{ 39,  32,  32,  16},
	{  2,  38,  38,  16},
	{  8,  38,  32,  16},
	{  2,  32,  32,  16},
	{  2,  32,  27,  13},
	{  3,  27,  27,  13},
	{  4,  27,  23,  13},
	{  6,  32,  27,  16},
	{  2,  32,  32,  16},
	{  1,  32,  32,  13},
	{ 57,  19,  23,   3},
	{ 65,  38,  38,  11},
	{ 31,  38,  32,  11},
	{  3,  38,  38,  11},
	{  8,  38,  32,  11},
	{  3,  38,  38,  11},
	{ 18,  38,  32,  11},
	{  4,  32,  32,  11},
	{  1,  38,  32,  11},
	{  1,  32,  32,  11},
	{  1,  32,  27,   9},
	{  1,  32,  27,  11},
	{  1,  32,  27,   9},
	{ 15,  32,  32,   9},
	{  7,  32,  27,   9},
	{  4,  32,  27,  11},
	{  8,  32,  32,  11},
	{  2,  32,  27,  11},
	{  1,  32,  32,  11},
	{  3,  32,  27,  11},
	{  2,  32,  32,  11},
	{  2,  32,  27,  11},
	{ 16,  32,  32,  11},
	{  6,  32,  27,  11},
	{  2,  32,  27,   9},
	{  7,  32,  27,  11},
	{ 19,  76,  64,  16},
	{116,  32,  27,   9},
	{ 35, 107,  76,  54},
	{ 10,  90,  76,  54},
	{  2, 107,  76,  54},
	{ 12,  32,  27,   9},
	{ 70, 107,  76,  54},
	{ 43,  32,  27,   9},
	{ 25,  27,  27,   9},
	{  5,  32,  27,   9},
	{  1,  27,  27,   9},
	{  3,  32,  27,   9},
	{  3, 107,  76,  54},
	{ 11, 107,  90,  54},
	{  1, 107,  90,  45},
	{  1, 128,  90,  45},
	{  1, 128,  90,  54},
	{  1, 128, 107,  54},
	{ 29, 128,  90,  54},
	{ 32, 107,  90,  54},
	{ 19, 107,  76,  54},
	{  4,  90,  76,  54},
	{ 13, 107,  76,  54},
	{  7,  90,  76,  54},
	{ 13, 107,  76,  54},
	{  3,  90,  76,  45},
	{  2,  90,  76,  54},
	{  1,  90,  76,  45},
	{  1, 107,  76,  54},
	{  7,  90,  76,  54},
	{  1, 107,  76,  54},
	{  2,  90,  76,  54},
	{  7, 107,  76,  54},
	{  2,  27,  27,   9},
	{  1,  32,  27,   9},
	{  1,  27,  23,   9},
	{  1,  32,  27,   9},
	{  8,  27,  27,   9},
	{  2,  32,  27,   9},
	{ 10,  27,  27,   9},
	{  1,  27,  23,   9},
	{  2,  27,  27,   9},
	{  1,  32,  27,   9},
	{  8,  27,  27,   9},
	{  1,  32,  27,   9},
	{  1,  27,  27,   9},
	{  1,  32,  27,   9},
	{  1,  90,  64,  27},
	{ 66,  32,  27,   9},
	{  3,  27,  23,   9},
	{  4,  27,  27,   9},
	{  1,  32,  27,   9},
	{  7,  27,  27,   9},
	{  1,  27,  23,   9},
	{  3,  27,  27,   9},
	{  1,  32,  27,   9},
	{  7,  27,  27,   9},
	{  1,  27,  23,   9},
	{  3,  27,  27,   9},
	{  1,  32,  27,   9},
	{  7,  27,  27,   9},
	{  1,  32,  27,   9},
	{  1,  27,  27,   9},
	{  1,  32,  27,   9},
	{  1,  27,  27,   9},
	{  1,  32,  27,   9},
	{ 20,  32,  23,   9},
	{  2,  27,  23,   9},
	{  1,  32,  27,   9},
	{  8,  27,  27,   9},
	{  1,  27,  23,   9},
	{  1,  32,  23,   9},
	{  1,  27,  23,   9},
	{  1,  32,  27,   9},
	{  8,  27,  27,   9},
	{  1,  27,  23,   9},
	{  2,  27,  27,   9},
	{  1,  32,  27,   9},
	{  8,  27,  27,   9},
	{  1,  32,  27,   9},
	{  2,  27,  27,   9},
	{  1,  32,  27,   9},
	{  1,  32,  27,  11},
	{  1,  38,  32,  11},
	{ 26,  76,  76, 180},
	{  1,  64,  64, 152},
	{  1,  76,  90, 180},
	{  1,  76,  76, 180},
	{  2,  64,  64, 152},
	{  1,  76,  90, 180},
	{  1,  64,  76, 152},
	{  1,  64,  64, 128},
	{  1,  54,  64, 128},
	{  1,  64,  64, 128},
	{  1,  64,  54, 107},
	{  1,  54,  54,  90},
	{  1,  45,  45,  76},
	{  1,  54,  45,  76},
	{  5,  54,  38,  76},
	{  1,  54,  45,  76},
	{  4,  45,  38,  76},
	{  2,  45,  38,  64},
	{  3,  54,  38,  64},
	{  1,  54,  38,  76},
	{  4,  54,  45,  76},
	{  8,  54,  45,  64},
	{  1,  54,  38,  64},
	{  2,  54,  38,  76},
	{  1,  54,  45,  76},
	{ 35,  90,  76,  27},
	{ 68,  54,  38,  76},
	{  1,  45,  38,  64},
	{  9,  54,  38,  64},
	{  3,  54,  45,  64},
	{ 18,  54,  45,  76},
	{ 29,  90,  64,  45},
	{ 19,  76,  64,  45},
	{  1,  76,  54,  38},
	{  5,  64,  32,  54},
	{  2,  64,  32,  45},
	{  2,  45,  19,  27},
	{  1,  38,  23,  23},
	{  1,  32,  19,  19},
	{  1,  54,  27,  23},
	{  1,  23,  16,  16},
	{  1,  45,  27,  23},
	{  1,  27,  19,  19},
	{  1,  54,  32,  27},
	{  1,  64,  32,  27},
	{ 10,  64,  38,  27},
	{  7,  76,  54,  38},
	{ 34,  64,  54,  38},
	{  2,  76,  54,  38},
	{  1,  76,  54,  45},
	{  1,  76,  64,  45},
	{  1,  90,  64,  45},
	{  5,  76,  64,  45},
	{  4,  76,  54,  45},
	{  2,  76,  54,  38},
	{ 20,  32,  27,  27},
	{  2,  32,  27,  23},
	{  4,  27,  23,  23},
	{  1,  27,  23,  19},
	{ 26,  27,  23,  23},
	{  1,  32,  27,  23},
	{  1,  32,  23,  27},
	{  1,  27,  23,  23},
	{  1,  32,  23,  23},
	{  1,  32,  27,  23},
	{ 66,  76,  54,  32},
	{ 26,  64,  54,  32},
	{  1,  76,  54,  32},
	{ 15,  32,  23,  23},
	{  2,  27,  23,  23},
	{  2,  32,  23,  23},
	{  3,  27,  23,  23},
	{  3,  32,  23,  23},
	{  3,  27,  23,  23},
	{  5,  32,  23,  23},
	{  1,  27,  23,  23},
	{  9,  27,  23,  19},
	{  9,  76,  54,  32},
	{ 25,  76,  64,  32},
	{  2,  76,  54,  32},
	{  7,  32,  23,  23},
	{  3,  32,  27,  23},
	{ 10,  32,  23,  23},
	{ 18,  32,  27,  23},
	{  3,  32,  23,  23},
	{ 22,  27,  23,  23},
	{  1,  27,  23,  19},
	{  9,  64,  64,  27},
	{  1,  64,  64,  23},
	{  1,  64,  64,  27},
	{  3,  64,  64,  23},
	{  1,  64,  64,  27},
	{  1,  64,  64,  23},
	{  3,  64,  64,  27},
	{  1,  64,  54,  27},
	{  2,  54,  54,  23},
	{  1,  54,  54,  27},
	{  3,  54,  54,  23},
	{  1,  54,  45,  23},
	{  1,  45,  45,  23},
	{  4,  45,  38,  23},
	{  1,  45,  38,  19},
	{  1,  38,  38,  19},
	{  3,  32,  38,  16},
	{  1,  32,  32,  16},
	{  1,  27,  32,  13},
	{  1,  27,  27,  13},
	{  2,  27,  27,  11},
	{  2,  23,  27,  11},
	{  1,  27,  27,  11},
	{  6,  27,  32,  11},
	{  9,  23,  32,  11},
	{  1,  38,  38,  32},
	{  8,  38,  32,  27},
	{  1,  38,  27,  27},
	{  1,  38,  32,  27},
	{  1,  38,  32,  32},
	{  7,  38,  38,  32},
	{ 24,  38,  32,  32},
	{  2,  38,  32,  27},
	{  1,  32,  32,  27},
	{ 20,  32,  27,  27},
	{  4,  32,  27,  23},
	{  1,  32,  27,  27},
	{ 28,  32,  23,  23},
	{  1,  27,  23,  23},
	{ 10,  32,  23,  23},
	{  1,  32,  27,  23},
	{  1,  27,  23,  23},
	{ 28,  27,  23,  19},
	{ 22,  76,  54,  32},
	{  1,  76,  64,  32},
	{ 14,  90,  76,  27},
	{ 64,  27,  32,  16},
	{ 37,  27,  32,  19},
	{  3,  27,  32,  16},
	{  6,  27,  32,  19},
	{  8,  32,  32,  19},
	{  2,  32,  38,  19},
	{  3,  23,  19,  16},
	{  2,  19,  16,  16},
	{  1,  13,  11,  13},
	{  1,  16,  16,  16},
	{  1,  23,  19,  19},
	{  2,  23,  19,  16},
	{  1,  23,  16,  16},
	{  1,  19,  16,  16},
	{  2,  19,  13,  13},
	{  6,  19,  16,  13},
	{  2,  19,  16,  16},
	{  9,  23,  16,  16},
	{  2,  23,  19,  19},
	{  2,  27,  19,  19},
	{  1,  23,  19,  19},
	{ 44,  27,  19,  19},
	{  1,  27,  23,  19},
	{ 10,  32,  38,  11},
	{ 61,  38,  32,  32},
	{  9,  38,  32,  27},
	{  3,  38,  32,  32},
	{  1,  32,  32,  32},
	{  1,  32,  27,  27},
	{  6,  32,  32,  27},
	{ 11,  32,  27,  27},
	{  6,  32,  32,  27},
	{  3,  32,  27,  27},
	{173,  27,  23,  23},
	{  1,  27,  19,  19},
	{  2,  32,  23,  23},
	{  2,  32,  27,  23},
	{  2,  38,  27,  23},
	{ 10,  16,  27,   9},
	{  6,  16,  27,  11},
	{  2,  19,  27,  11},
	{  1,  16,  27,  11},
	{  1,  19,  27,  11},
	{  9,  19,  32,  11},
	{  6,  19,  27,   9},
	{ 10,   7,  11,   6},
	{  1,   7,   9,   6},
	{  1,   6,   9,   6},
	{  5,   7,   9,   6},
	{  8,   7,   9,   7},
	{  1,   7,  11,   7},
	{  1,   7,   9,   7},
	{  2,   7,  11,   7},
	{  1,   8,  11,   7},
	{  5,   7,  11,   8},
	{  4,   8,  11,   8},
	{  3,   7,  11,   8},
	{  1,   8,  11,   8},
	{  1,   7,  11,   8},
	{ 15,   8,  11,   8},
	{  1,   7,  11,   8},
	{  1,   8,  11,   8},
	{  1,   7,  11,   8},
	{ 21,   8,  11,   8},
	{ 21,   7,  11,   8},
	{  1,   7,   9,   7},
	{  2,   7,  11,   7},
	{  9,   7,   9,   7},
	{  2,   6,   9,   7},
	{  2,   7,   9,   7},
	{  1,   7,  11,   7},
	{  8,   7,  11,   8},
	{ 55,  11,  16,  11},
	{ 13,  16,  19,  19},
	{  1,  16,  23,  19},
	{  1,  13,  19,  19},
	{  1,  13,  19,  16},
	{ 14,   9,  13,  13},
	{  8,  11,  13,  13},
	{  6,  11,  16,  13},
	{  2,  11,  16,  16},
	{  5,  13,  16,  16},
	{  3,  13,  19,  16},
	{  2,  11,  16,  13},
	{  1,  11,  16,  11},
	{  2,  11,  16,  13},
	{  4,  11,  19,  13},
	{  1,  13,  19,  13},
	{  4,  13,  19,  16},
	{  2,   6,  11,   7},
	{ 40,   7,  11,   9},
	{ 40,  13,  32,  19},
	{  3,  13,  32,  16},
	{  1,  13,  27,  16},
	{  1,  13,  27,  19},
	{ 10,  13,  32,  19},
	{ 12,  13,  32,  16},
	{  1,  13,  27,  16},
	{  1,  13,  27,  19},
	{ 10,  13,  32,  19},
	{  1,   8,  13,  16},
	{ 17,   9,  13,  16},
	{  3,   8,  13,  13},
	{ 40,  13,  23,  16},
	{ 12,  11,  23,  16},
	{  6,  11,  23,  13},
	{  2,  13,  23,  13},
	{  3,  13,  23,  16},
	{  8,  13,  27,  16},
	{  1,  13,  23,  16},
	{  1,  13,  27,  16},
	{  1,  13,  23,  16},
	{  3,  13,  27,  16},
	{  1,  13,  23,  16},
	{  1,  13,  27,  16},
	{  1,   9,  23,  16},
	{  6,   9,  23,  13},
	{  1,   9,  19,  13},
	{  2,   9,  23,  16},
	{  7,   9,  23,  13},
	{  9,   9,  19,  13},
	{ 15,   7,  11,   9},
	{ 26,   6,  11,   9},
	{  2,   7,  11,   9},
	{  1,   7,  11,   8},
	{  1,   7,  11,   9},
	{ 10,   7,  11,   8},
	{ 17,   8,  11,   8},
	{ 27,   8,  13,   8},
	{ 11,   9,  13,   8},
	{ 13,  11,  13,   8},
	{ 13,  11,  16,   8},
	{  4,  13,  16,   8},
	{ 15,  11,   9,   4},
	{  1,  11,   8,   4},
	{  3,  11,   9,   4},
	{  9,  11,   8,   4},
	{  3,  11,   9,   4},
	{  6,  11,   9,   5},
	{  1,  11,   9,   4},
	{  2,  11,   8,   4},
	{  2,  11,   9,   4},
	{  7,  11,   9,   5},
	{  2,  11,   9,   4},
	{  1,  11,   8,   4},
	{  2,  11,   9,   4},
	{  7,  11,   9,   5},
	{  1,  11,   9,   4},
	{  2,   9,   8,   4},
	{  2,  11,   8,   4},
	{  1,  11,   9,   4},
	{  8,   9,   8,   4},
	{  3,  11,   8,   4},
	{  1,  11,   9,   4},
	{  9,   9,   8,   4},
	{  2,   9,   8,   3},
	{  1,   9,   8,   4},
	{ 35,  11,   8,   4},
	{  3,   9,   8,   4},
	{ 21,   7,   6,   3},
	{  6,   8,   7,   3},
	{  1,  11,   9,   6},
	{  6,  11,   9,   5},
	{  1,   9,   8,   5},
	{  1,   8,   7,   4},
	{  1,   7,   7,   3},
	{  1,   7,   6,   3},
	{  9,   9,   9,   6},
	{  1,  11,  11,   7},
	{  1,  11,  11,   6},
	{  2,  11,  11,   7},
	{  1,  11,  11,   6},
	{  1,  11,   9,   6},
	{  2,   9,   9,   5},
	{  1,   9,   8,   5},
	{  1,   8,   7,   4},
	{  1,   7,   7,   3},
	{  1,   7,   6,   3},
	{  9,   9,  13,   6},
	{ 43,   8,   8,   4},
	{ 13,   8,   9,   4},
	{  9,   8,   9,   5},
	{ 11,   8,   9,   4},
	{  1,   8,   9,   5},
	{  1,   8,   9,   4},
	{  1,   8,   9,   5},
	{  1,   8,   9,   4},
	{  3,  19,  19,  13},
	{  7,  19,  19,  11},
	{  4,  13,  16,   9},
	{  1,  11,  13,   9},
	{  1,  11,  13,   8},
	{  8,  11,  11,   8},
	{  9,  11,  13,   8},
	{  1,  13,  16,   9},
	{  1,  16,  16,  11},
	{  1,  16,  19,  11},
	{  3,  19,  19,  11},
	{ 12,  16,  19,  11},
	{  2,  16,  16,   9},
	{  1,  13,  13,   9},
	{  2,  13,  16,   9},
	{  1,  16,  16,   9},
	{  6,  13,  16,   9},
	{  1,  13,  13,   9},
	{  8,  13,  13,   8},
	{  2,  13,  13,   9},
	{  2,  16,  16,   9},
	{  1,  16,  16,  11},
	{  3,  16,  19,  11},
	{  3,  32,  45,  13},
	{ 20,  32,  38,  13},
	{ 29,  32,  45,  13},
	{ 22,  32,  38,  13},
	{  3,  32,  45,  13},
	{ 14,  32,  38,  13},
	{  6,  32,  45,  13},
	{ 16,  32,  38,  13},
	{  1,  32,  45,  13},
	{  1,  32,  38,  13},
	{ 14,  32,  45,  13},
	{ 34,  32,  38,  13},
	{ 20,   8,   7,   4},
	{ 26,   8,   7,   5},
	{  7,   8,   8,   5},
	{  4,   9,   8,   5},
	{  1,  11,   9,   6},
	{  1,   9,   9,   6},
	{  2,   9,   8,   6},
	{ 10,   8,   8,   6},
	{  1,   8,   8,   5},
	{ 16,   8,   7,   5},
	{  1,   8,   8,   5},
	{  5,   8,   7,   5},
	{ 44,   9,   8,   5},
	{ 20,   9,   8,   4},
	{ 11,   9,   7,   4},
	{  3,   8,   7,   4},
	{  1,   7,   6,   3},
	{  1,   6,   5,   3},
	{  1,   5,   4,   3},
	{  1,   4,   3,   3},
	{  1,   3,   3,   2},
	{  2,   3,   2,   2},
	{  1,   2,   2,   2},
	{  3,   2,   2,   1},
	{  1,   2,   1,   1},
	{  1,   1,   1,   1},
	{ 31,   1,   2,   1},
	{  1,   2,   2,   1},
	{  1,   2,   2,   2},
	{  2,   3,   3,   2},
	{  2,   4,   5,   2},
	{  1,   5,   6,   3},
	{  1,   6,   7,   3},
	{  1,   7,   9,   3},
	{  1,   9,  11,   4},
	{  1,  11,  16,   5},
	{  1,  13,  19,   6},
	{  1,  19,  27,   6},
	{  1,  23,  38,   7},
	{  1,  32,  45,   8},
	{ 35,  27,  45,   8},
	{  2,  32,  45,   8},
	{  1,  27,  45,   8},
	{ 63,  16,  27,  19},
	{  1,  16,  27,  23},
	{  2,  16,  27,  19},
	{ 10,  16,  27,  23},
	{  5,  16,  27,  19},
	{  1,  16,  27,  23},
	{  1,  16,  27,  19},
	{  2,  16,  27,  23},
	{  4,  16,  27,  19},
	{  5,  13,  27,  19},
	{  9,  13,  23,  19},
	{ 18,  13,  19,  16},
	{ 10,  13,  16,  13},
	{  1,  13,  13,  11},
	{  1,  13,  11,   9},
	{  1,  11,  11,   8},
	{  1,  11,   9,   7},
	{  1,  13,   9,   7},
	{  1,   9,   7,   6},
	{  1,   7,  11,   4},
	{ 42,   7,   9,   4},
	{  3,   6,   9,   4},
	{  9,   7,   9,   4},
	{  4,   6,   9,   4},
	{  6,   6,   8,   4},
	{  7,   6,   8,   5},
	{ 21,   6,   7,   5},
	{  1,   6,   8,   5},
	{  1,   6,   7,   5},
	{  6,  11,  11,   8},
	{ 46,   9,  13,   8},
	{  2,   9,  11,   8},
	{ 18,   9,  11,   7},
	{  1,   9,  11,   8},
	{  1,   9,  11,   7},
	{  1,   9,  11,   8},
	{  1,   9,  11,   7},
	{  1,   9,  11,   8},
	{  1,   9,  11,   7},
	{ 12,   8,  11,   7},
	{  1,   9,  11,   7},
	{  1,   8,  11,   7},
	{ 15,   9,  11,   7},
	{  1,   8,  11,   7},
	{  1,   9,  11,   7},
	{  1,   8,  11,   7},
	{  1,   9,  11,   7},
	{  3,   8,  11,   7},
	{  1,   9,  11,   7},
	{ 47,   9,  11,   6},
	{  1,   9,  11,   7},
	{ 31,   8,  11,   7},
	{  3,   9,  11,   7},
	{  3,   9,  13,   7},
	{  4,   9,  11,   7},
	{ 20,  11,  13,   7},
	{  1,  13,  16,   8},
	{  1,  11,  16,   8},
	{  5,  11,  13,   8},
	{  7,   3,   6,   3},
	{ 13,   3,   5,   3},
	{ 24,   8,   9,   7},
	{  5,   9,   9,   7},
	{  1,   9,  11,   7},
	{  2,   9,  11,   8},
	{  3,   9,  11,   7},
	{  9,   9,  11,   8},
	{  1,   9,  11,   7},
	{  1,   9,  11,   8},
	{  8,   9,   9,   7},
	{  4,   9,   9,   8},
	{  5,   9,   9,   7},
	{ 13,   9,   9,   8},
	{  1,   9,   9,   7},
	{  5,   9,   9,   8},
	{  1,   9,   9,   7},
	{ 14,   9,   9,   8},
	{  2,   9,   9,   7},
	{ 19,   9,  11,   8},
	{  5,   9,  13,   9},
	{  1,  11,  13,   9},
	{  1,  11,  13,  11},
	{  1,  11,  16,  11},
	{  1,  11,  16,  13},
	{  2,  11,  19,  13},
	{  1,  11,  19,  16},
	{ 49,  11,  19,  13},
	{  3,  11,  19,  16},
	{  3,  11,  19,  13},
	{  1,  11,  19,  16},
	{  1,  11,  19,  13},
	{  3,  11,  19,  16},
	{ 16,  11,  19,  13},
	{  1,   9,  13,  11},
	{  1,  19,  23,  19},
	{  1,  27,  32,  27},
	{  1,  16,  27,  23},
	{  2,  11,  23,  19},
	{  6,  13,  27,  23},
	{ 15,  11,  27,  19},
	{  7,  11,  27,  23},
	{  1,  13,  27,  23},
	{ 10,  13,  27,  19},
	{  4,  11,  27,  19},
	{  9,  11,  23,  19},
	{  8,  11,  23,  16},
	{  7,  23,  11,   7},
	{  9,  19,  11,   7},
	{  9,  19,   9,   7},
	{  6,  16,   9,   7},
	{  2,  13,   8,   6},
	{  3,  11,   8,   6},
	{  2,  11,   7,   6},
	{  1,  11,   7,   5},
	{  1,   9,   7,   5},
	{  9,   8,   6,   5},
	{  9,   7,   6,   5},
	{  1,   7,   6,   4},
	{  4,   7,   5,   4},
	{  5,  11,  13,   9},
	{  1,   9,   9,   7},
	{  1,   5,   4,   3},
	{  1,   3,   2,   2},
	{  1,   2,   2,   2},
	{  2,  16,  23,  19},
	{  1,  13,  27,  23},
	{  1,  11,  23,  23},
	{  5,  11,  23,  19},
	{ 15,  11,  23,  23},
	{  4,  11,  27,  23},
	{  2,  11,  23,  23},
	{ 35,   7,   8,   4},
	{ 99,   7,   7,   4},
	{ 58,   6,   6,   3},
	{  1,   4,   5,   3},
	{  1,   5,   5,   3},
	{  1,   4,   5,   3},
	{  2,   5,   6,   3},
	{ 13,   5,   6,   4},
	{  1,   5,   6,   3},
	{  1,   5,   6,   4},
	{  1,   5,   6,   3},
	{  1,   5,   6,   4},
	{  8,   6,   6,   4},
	{  1,   5,   6,   4},
	{  1,   6,   6,   4},
	{  1,   6,   7,   4},
	{ 39,   6,   8,   4},
	{  4,   7,   8,   4},
	{ 47,   6,   7,   3},
	{ 38,   6,   6,   3},
	{  4,   6,   7,   3},
	{  2,   6,   7,   4},
	{ 54,   7,   8,   4},
	{  4,   7,   9,   4},
	{  7,   7,   8,   4},
	{ 42,   7,   9,   4},
	{ 14,   7,   9,   5},
	{  4,   8,   9,   5},
	{  9,   8,  11,   5},
	{  4,   9,  11,   5},
	{  1,   9,  11,   6},
	{ 10,   9,  13,   6},
	{  8,  11,  13,   6},
	{  5,   9,  13,   6},
	{  1,  11,  13,   6},
	{  1,   9,  13,   6},
	{  1,  11,  13,   6},
	{  4,  11,  13,   7},
	{  1,  11,  13,   6},
	{  4,   9,  13,   6},
	{  7,   9,  13,   7},
	{  1,   9,  13,   6},
	{  1,   9,  13,   7},
	{  6,  11,  13,   7},
	{  1,   9,  13,   7},
	{ 44,  11,  13,   7},
	{ 24,   9,  13,   7},
	{ 31,  11,  13,   7},
	{ 13,   9,  13,   7},
	{  1,  11,  13,   7},
	{  1,   9,  13,   7},
	{126,   9,  11,   7},
	{  1,   8,  11,   7},
	{  2,   7,  11,   7},
	{ 34,  19,  76,  90},
	{ 64,   7,  11,   7},
	{ 71,   9,  11,   7},
	{ 21,  11,  11,   7},
	{  1,   9,  11,   7},
	{  1,  11,  11,   7},
	{ 27,   9,  11,   7},
	{  5,  11,  11,   7},
	{  4,   9,  11,   7},
	{  9,  27,  32,  32},
	{ 11,  23,  32,  32},
	{  1,  27,  32,  32},
	{  3,  23,  32,  27},
	{ 13,  23,  27,  27},
	{  1,  23,  32,  27},
	{  1,  23,  27,  27},
	{  1,  23,  32,  27},
	{  1,  23,  27,  27},
	{  1,  23,  32,  27},
	{  1,  23,  27,  27},
	{ 10,  23,  32,  27},
	{ 34,  23,  27,  27},
	{  1,  23,  32,  27},
	{  1,  23,  27,  27},
	{ 23,  23,  32,  27},
	{  2,  27,  32,  27},
	{  3,  23,  32,  32},
	{ 81,  27,  32,  32},
	{ 26,  27,  38,  32},
	{  2,  27,  38,  38},
	{  5,  27,  45,  38},
	{  9,  38,  90, 107},
	{  4,  38,  76,  76},
	{  1,  38,  64,  64},
	{  1,  32,  64,  64},
	{  3,  32,  64,  76},
	{  1,  32,  76,  76},
	{  1,  38,  76,  76},
	{  3,  38,  64,  76},
	{  1,  32,  64,  76},
	{ 26,   4,   8,   6},
	{ 48,  23,  45,  64},
	{ 39,  38,  64,  76},
	{ 25,  32,  64,  76},
	{  3,  38,  64,  76},
	{  7,  38,  76,  76},
	{ 24,  38,  64,  76},
	{  4,  38,  76,  76},
	{  1,  45,  76,  76},
	{  4,   8,  11,  11},
	{  2,   8,  11,   9},
	{  1,   9,  11,   9},
	{  6,  38,  90, 107},
	{  3,  45,  90, 107},
	{  6,  23, 107, 180},
	{  1,  23, 107, 152},
	{  3,  27, 107, 152},
	{  2,  27, 107, 180},
	{  7,  27, 107, 152},
	{  1,  27, 107, 180},
	{  1,  27, 107, 152},
	{  1,  27, 107, 180},
	{  1,  27, 107, 152},
	{ 27,  27, 107, 180},
	{ 14,  23, 107, 180},
	{  9,  27, 107, 180},
	{  4,  27, 128, 180},
	{ 16,  27, 107, 180},
	{  9,  27, 107, 152},
	{  6,  32,  90, 152},
	{  1,  32,  90, 128},
	{  2,  32, 107, 152},
	{  3,  32,  90, 128},
	{  2,  32,  76, 107},
	{  1,  27,  90, 128},
	{  1,  16, 107, 214},
	{  1,  11, 107, 255},
	{  1,   7,  90, 255},
	{  1,   5,  90, 255},
	{  1,   6,  90, 255},
	{  1,   8,  90, 255},
	{  1,   9,  90, 255},
	{  8,   8,  16,  19},
	{ 14,   8,  19,  19},
	{  2,   8,  19,  23},
	{  9,   8,  19,  19},
	{  1,   8,  19,  23},
	{  1,   8,  19,  19},
	{  1,   8,  19,  23},
	{ 11,   8,  19,  19},
	{  1,   8,  19,  23},
	{  2,   8,  19,  19},
	{  2,   8,  16,  19},
	{  1,   8,  19,  19},
	{  1,   8,  19,  23},
	{  2,   9,  19,  23},
	{ 28,  23,  76, 128},
	{ 29,  19,  76, 128},
	{  5,  23,  76, 128},
	{ 18,  27,  76, 128},
	{  3,  13,  38,  38},
	{  5,  13,  32,  38},
	{  1,  13,  32,  32},
	{  4,  13,  27,  32},
	{  2,  13,  32,  32},
	{  2,  16,  32,  32},
	{  2,  13,  32,  32},
	{  1,  13,  32,  38},
	{  1,  13,  32,  32},
	{  3,  13,  27,  32},
	{  3,  13,  27,  27},
	{  2,  13,  27,  32},
	{  1,  13,  32,  32},
	{ 10,  13,  27,  32},
	{  1,  11,  27,  32},
	{  1,  13,  27,  32},
	{  2,   5,   8,   6},
	{ 24,   5,   9,   6},
	{ 34,   5,   9,   7},
	{  1,   5,   9,   6},
	{  1,   5,   9,   7},
	{  1,   5,   9,   6},
	{  1,   6,   9,   7},
	{  1,   6,   9,   6},
	{  1,   6,   9,   7},
	{  1,   6,   9,   6},
	{  1,   6,   9,   7},
	{  1,   6,   9,   6},
	{  3,   6,   9,   7},
	{  1,   6,   9,   6},
	{  1,   6,   9,   7},
	{  1,   6,   9,   6},
	{  1,   6,   9,   7},
	{  5,   6,   9,   6},
	{  1,   6,   9,   7},
	{  1,   6,   9,   6},
	{  3,   7,   9,   6},
	{  4,   7,   8,   6},
	{  3,   6,   8,   6},
	{  2,   6,   9,   7},
	{  3,  19,  32,  38},
	{ 20,  19,  27,  32},
	{  1,  16,  32,  32},
	{  1,  16,  32,  38},
	{  1,  16,  38,  45},
	{  6,  16,  23,  19},
	{ 24,  16,  23,  16},
	{  1,  16,  19,  16},
	{  5,  16,  23,  16},
	{  3,  16,  23,  19},
	{  8,  16,  23,  16},
	{  2,  16,  19,  16},
	{ 22,  11,  19,  16},
	{  1,  11,  23,  16},
	{  2,  11,  23,  13},
	{  1,  11,  19,  13},
	{  1,  11,  19,  11},
	{  2,   9,  19,  11},
	{  1,  11,  19,  11},
	{  3,   9,  19,  11},
	{  1,  11,  19,  11},
	{  1,  11,  19,  13},
	{  3,  32, 107, 152},
	{  1,  32,  90, 107},
	{  1,  27,  90, 107},
	{  1,  27,  76,  90},
	{ 25,   8,  13,   8},
	{  2,   8,  16,   8},
	{ 23,   8,  13,   8},
	{ 34,  16,  76, 128},
	{ 13,  19,  76, 128},
	{  3,  19,  76, 152},
	{  2,  16,  76, 152},
	{  1,  19,  76, 152},
	{  5,  19,  90, 152},
	{  2,  19,  90, 180},
	{ 10,  19,  76, 180},
	{  1,  16,  76, 180},
	{  1,  16,  76, 152},
	{  1,  16,  76, 180},
	{  1,  16,  76, 152},
	{  1,  19,  76, 180},
	{  2,  19,  90, 180},
	{  7,   5,   8,   5},
	{  5,   5,   9,   5},
	{ 18,   6,   9,   5},
	{  3,   8,  13,   7},
	{ 43,  16,  76, 152},
	{  4,  16,  76, 180},
	{  1,  16,  76, 152},
	{  1,  16,  76, 180},
	{  1,  16,  76, 152},
	{ 14,  13,  76, 128},
	{  2,  16,  76, 128},
	{  3,  16,  76, 152},
	{  1,  16,  90, 152},
	{  1,  19,  90, 152},
	{  1,  16,  90, 152},
	{  1,  16,  76, 128},
	{  5,  13,  76, 128},
	{  1,   7,  13,   6},
	{  2,   8,  13,   6},
	{  1,   7,  13,   6},
	{  8,   7,  11,   6},
	{ 10,   6,  11,   6},
	{  1,   7,  11,   6},
	{  1,   6,   9,   6},
	{  1,   6,   9,   7},
	{  1,   6,   9,   6},
	{  1,   6,   9,   7},
	{  9,   6,   8,   6},
	{  1,   6,   8,   7},
	{  1,   6,   8,   6},
	{ 21,   5,   8,   6},
	{ 12,  13,  64,  64},
	{  1,  16,  64,  64},
	{  1,  16,  64,  76},
	{  3,  16,  76,  90},
	{  2,  19,  76,  90},
	{  2,  19,  76, 107},
	{  3,  19,  76, 128},
	{  2,  19,  90, 128},
	{  3,  19,  90, 152},
	{  6,  16,  90, 180},
	{ 21,  16,  54,  54},
	{  8,  16,  54,  45},
	{  3,  16,  54,  38},
	{  1,  16,  45,  32},
	{  1,  16,  45,  23},
	{  1,  19,  45,  19},
	{  1,   9,  54, 107},
	{  7,  11,  54,  90},
	{  1,  11,  54,  76},
	{  1,  11,  45,  64},
	{  2,  11,  45,  54},
	{  2,  11,  45,  64},
	{  5,  11,  45,  76},
	{  6,  11,  45,  64},
	{  8,  11,  45,  76},
	{  7,  11,  45,  64},
	{  2,  11,  45,  76},
	{  1,  11,  45,  64},
	{  4,  11,  45,  76},
	{  1,  11,  45,  64},
	{  1,  11,  45,  76},
	{  1,  11,  45,  64},
	{  2,  11,  45,  76},
	{  1,  11,  45,  64},
	{  1,  11,  45,  76},
	{  1,  11,  45,  64},
	{  2,  11,  45,  76},
	{  1,  11,  45,  64},
	{  4,  11,  45,  76},
	{  1,  11,  45,  64},
	{  4,  11,  45,  76},
	{ 21,  11,  45,  64},
	{  1,  11,  45,  76},
	{  2,   9,  45,  76},
	{  6,  11,  45,  76},
	{  2,   9,  45,  76},
	{  1,   9,  54,  90},
	{  1,   9,  54, 107},
	{  6,   7,  90, 180},
	{ 32,   7,  76, 180},
	{  2,   7,  76, 152},
	{  2,   8,  76, 152},
	{  1,  11,  64,  90},
	{  1,  76,  45,  38},
	{  1,  32,  19,   9},
	{  1,  38,  27,   9},
	{  1,  45,  27,   9},
	{  1,  45,  27,  11},
	{  2,  38,  27,  11},
	{  4,  32,  23,   9},
	{  6,  27,  23,   9},
	{  5,  27,  23,  11},
	{  1,  27,  23,   9},
	{  1,  27,  23,  11},
	{  1,  27,  23,   9},
	{  1,  45, 128, 152},
	{  1,  38, 128, 152},
	{  1,  38, 107, 128},
	{  1,  32, 107, 107},
	{  1,  23,  76,  76},
	{  1,  23,  64,  54},
	{  1,  19,  54,  45},
	{  1,  19,  45,  45},
	{  1,  19,  45,  38},
	{  1,  19,  45,  45},
	{  1,  23,  54,  54},
	{  1,  27,  64,  76},
	{  1,  27,  90, 107},
	{  1,  32, 107, 152},
	{  2,  32, 107, 180},
	{  2,  27, 107, 152},
	{  4,  23, 107, 152},
	{  1,  23,  90, 128},
	{  1,  23, 107, 152},
	{  1,  19, 107, 128},
	{  1,  19,  90, 107},
	{  2,  16,  90, 107},
	{  2,  16,  90,  90},
	{  1,  13,  90,  76},
	{  1,  13,  76,  76},
	{  1,  13,  64,  45},
	{  1,  11,  54,  45},
	{  1,   9,  45,  32},
	{  1,   9,  45,  27},
	{  1,   9,  45,  23},
	{  1,   7,  23,   9},
	{  1,   5,  13,   6},
	{  1,   6,  13,   7},
	{  1,   7,  13,   7},
	{  1,   8,  13,   8},
	{ 40,   9,  13,   8},
	{119,   8,  13,   8},
	{  5,   8,  11,   8},
	{ 26,   9,  11,   9},
	{  1,   9,  13,   9},
	{  1,  11,  13,   9},
	{  2,  11,  16,  11},
	{  1,  13,  16,  11},
	{  5,  13,  19,  11},
	{ 46,  13,  16,  11},
	{  1,  13,  19,  11},
	{  1,  13,  16,  11},
	{  1,  13,  19,  11},
	{  1,  13,  16,  11},
	{  1,  13,  19,  11},
	{  1,  13,  16,  11},
	{  1,  13,  19,  11},
	{ 35,  13,  19,  13},
	{  1,  13,  19,  11},
	{  2,  13,  19,  13},
	{  1,  13,  19,  11},
	{ 29,  23,  27,  16},
	{  7,  19,  27,  16},
	{  7,  19,  23,  16},
	{ 40,  11,  16,   9},
	{  1,   8,   9,   7},
	{  1,   6,   6,   5},
	{  1,   4,   4,   3},
	{  1,   3,   3,   2},
	{  1,   2,   2,   2},
	{  1,   2,   2,   1},
	{  1,   1,   1,   1},
	{ 29,   2,   2,   2},
	{  4,   3,   3,   2},
	{  1,   3,   3,   3},
	{  1,   3,   4,   3},
	{  1,   4,   5,   3},
	{  1,   5,   6,   4},
	{  1,   6,   7,   5},
	{  1,   7,   8,   6},
	{  1,   8,   9,   7},
	{  1,   9,  11,   8},
	{  1,  11,  13,   8},
	{  3,  11,  16,   8},
	{  2,  11,  16,   9},
	{  1,  11,  16,   8},
	{  1,  13,  16,   9},
	{  1,  11,  16,   9},
	{  1,  13,  16,   9},
	{  1,  11,  16,   9},
	{  1,  13,  16,   9},
	{ 22,  13,  19,   9},
	{  2,  13,  19,  11},
	{ 18,  13,  23,  11},
	{  2,  16,  23,  11},
	{  1,  13,  23,  11},
	{  1,  16,  23,  13},
	{  1,  13,  23,  11},
	{  1,  16,  23,  13},
	{ 24,  16,  23,  11},
	{  3,  16,  23,   9},
	{  4,  16,  23,   8},
	{ 67,  16,  27,   8},
	{  6,  19,  27,   8},
	{  1,  16,  27,   8},
	{  1,  19,  27,   8},
	{ 28,  19,  27,   9},
	{  1,  19,  27,   8},
	{  1,  19,  27,   9},
	{  1,  19,  27,   8},
	{  1,  19,  27,   9},
	{  1,  19,  27,   8},
	{  1,  19,  27,   9},
	{  1,  19,  27,   8},
	{  5,  19,  27,   9},
	{  1,  19,  27,   8},
	{  4,  54,  54,  45},
	{ 37,  27,  45,  23},
	{ 21,  32,  45,  23},
	{ 13,  27,  45,  23},
	{  1,  32,  45,  23},
	{  2,  27,  45,  23},
	{  4,  32,  45,  23},
	{  1,  27,  45,  23},
	{  1,  32,  45,  23},
	{ 17,  32,  45,  27},
	{  1,  32,  45,  23},
	{  4,  32,  45,  27},
	{  1,  32,  45,  23},
	{  3,  32,  45,  27},
	{  2,  32,  45,  23},
	{  3,  32,  45,  27},
	{  3,  32,  45,  23},
	{  2,  32,  45,  27},
	{  3,  32,  45,  23},
	{  2,  32,  45,  27},
	{  2,  32,  45,  23},
	{  1,  27,  45,  23},
	{  1,  32,  45,  23},
	{  2,  27,  45,  23},
	{  1,  32,  45,  23},
	{  1,  27,  45,  23},
	{  2,  32,  45,  23},
	{  1,  27,  45,  23},
	{ 80,  45,  13,  11},
	{ 36,  27, 107, 214},
	{ 52,  32,  76,  64},
	{ 59,  27,  45,  23},
	{ 55,  23,  38,  23},
	{  1,  11,  16,  11},
	{  1,   3,   3,   3},
	{  1,   2,   2,   2},
	{ 25,   3,   4,   3},
	{  1,   7,   8,   7},
	{  1,   3,   3,   3},
	{  1,   1,   1,   1},
	{ 12,   1,   1,   2},
	{  1,   1,   2,   2},
	{  2,   2,   2,   2},
	{  3,   2,   2,   3},
	{  1,   2,   3,   3},
	{  5,   2,   3,   4},
	{  3,   2,   4,   5},
	{  2,   3,   4,   5},
	{  1,   3,   4,   6},
	{  1,   3,   5,   6},
	{  2,   3,   5,   7},
	{  2,   3,   6,   7},
	{  2,   3,   6,   8},
	{  3,   3,   7,   8},
	{  1,   3,   7,   9},
	{  5,   3,   8,  11},
	{  5,   4,   8,  13},
	{  2,   4,   9,  13},
	{  5,   4,   9,  16},
	{ 38,   3,   9,  16},
	{ 14,   3,   9,  13},
	{ 10,   3,   8,  13},
	{ 49,   3,   7,  11},
	{ 37,   3,   7,  13},
	{  1,   3,   7,  11},
	{  1,   3,   7,  13},
	{  1,   3,   7,  11},
	{  1,   3,   7,  13},
	{ 14,   3,   8,  13},
	{ 80,   4,   8,  13},
	{ 58,   4,   9,  13},
	{ 60,   5,   9,  13},
	{  8,   6,  11,  13},
	{  1,   6,  11,  11},
	{  5,   7,  11,  11},
	{  7,   7,  13,   9},
	{  1,   8,  13,   9},
	{ 12,   9,  13,   9},
	{ 31,   9,  13,   8},
	{  1,   9,  13,   9},
	{  1,   9,  13,   8},
	{  1,   9,  13,   9},
	{  1,   9,  13,   8},
	{  5,   9,  16,   8},
	{  1,   9,  13,   8},
	{  1,   9,  16,   8},
	{ 24,  11,  16,   8},
	{  2,   9,  16,   8},
	{ 63,   9,  16,   7},
	{  1,   9,  16,   8},
	{  1,   9,  16,   7},
	{  9,   9,  16,   8},
	{  1,   9,  16,   7},
	{  1,   9,  16,   8},
	{  1,   9,  16,   7},
	{  1,   9,  16,   8},
	{  2,  11,  16,   8},
	{  3,   9,  16,   8},
	{  4,   9,  16,   7},
	{  1,   9,  16,   8},
	{ 11,   9,  16,   7},
	{  1,   9,  16,   8},
	{  1,   9,  16,   7},
	{  2,   9,  16,   8},
	{  2,   9,  16,   7},
	{  1,   9,  16,   8},
	{ 16,   9,  13,   8},
	{  5,   8,  13,   8},
	{  3,   9,  13,   8},
	{  5,   8,  13,   8},
	{ 50,   7,  13,   8},
	{ 27,   7,  13,   9},
	{  1,   7,  13,   8},
	{  1,   7,  13,   9},
	{  1,   7,  13,   8},
	{ 33,   7,  13,   9},
	{  1,   7,  13,   8},
	{  1,   7,  13,   9},
	{ 30,   8,  11,   8},
	{  4,   9,  11,   7},
	{  2,   9,   9,   7},
	{  1,  11,   9,   6},
	{  2,  13,   9,   6},
	{  2,  13,   9,   5},
	{  1,  16,   9,   5},
	{  3,  19,   9,   5},
	{  2,  19,   9,   4},
	{  3,  19,   9,   5},
	{  1,  19,   9,   4},
	{  2,  19,   9,   5},
	{  2,  19,   9,   4},
	{  2,  19,   9,   5},
	{  2,  19,   9,   4},
	{  2,  19,   9,   5},
	{  2,  19,   9,   4},
	{  3,  19,   9,   5},
	{  1,  19,   9,   4},
	{  2,  19,   9,   5},
	{  3,  19,   9,   4},
	{  1,  19,   9,   5},
	{ 13,  16,   9,   5},
	{  6,  16,   8,   5},
	{  4,  13,   8,   5},
	{  9,  11,   8,   5},
	{  2,  11,   7,   5},
	{ 10,   9,   7,   5},
	{ 19,   9,   7,   6},
	{  1,   9,   7,   5},
	{  1,   8,   7,   6},
	{  1,   8,   7,   5},
	{  1,   8,   7,   6},
	{ 17,   7,   7,   6},
	{ 14,   6,   7,   6},
	{ 11,   5,   7,   6},
	{ 11,   5,   7,   5},
	{  1,   4,   7,   5},
	{  3,   4,   6,   5},
	{  6,   4,   6,   4},
	{  7,   4,   5,   4},
	{  2,   3,   5,   4},
	{  1,   3,   5,   3},
	{ 12,   3,   4,   3},
	{ 24,   3,   3,   3},
	{ 29,   3,   3,   2},
	{  1,   3,   3,   3},
	{  2,   3,   3,   2},
	{  4,   2,   3,   2},
	{  1,   3,   3,   2},
	{  1,   2,   3,   2},
	{ 22,   2,   2,   2},
	{255,   2,   2,   2},
	{210,   2,   3,   2},
	{  2,   3,   3,   2},
	{ 21,   3,   3,   3},
	{  4,   3,   3,   2},
	{  1,   3,   3,   3},
	{  3,   3,   3,   2},
	{  1,   3,   3,   3},
	{ 36,   3,   4,   3},
	{  1,   3,   3,   3},
	{  1,   3,   4,   3},
	{ 22,   4,   4,   3},
	{  1,   3,   4,   3},
	{  1,   4,   4,   3},
	{  4,   4,   5,   3},
	{  1,   4,   4,   3},
	{  1,   4,   5,   3},
	{  8,   4,   5,   4},
	{ 24,   4,   6,   4},
	{  1,   4,   5,   4},
	{  1,   4,   6,   4},
	{  2,   5,   6,   4},
	{ 12,   5,   6,   5},
	{ 20,   6,   6,   5},
	{ 15,   6,   7,   5},
	{  1,   6,   7,   6},
	{  1,   6,   6,   5},
	{  1,   6,   7,   6},
	{  1,   6,   6,   6},
	{  1,   6,   7,   6},
	{  3,   6,   6,   6},
	{  1,   6,   7,   6},
	{  3,   6,   6,   6},
	{  1,   6,   7,   6},
	{  1,   6,   6,   6},
	{  1,   6,   7,   6},
	{  9,   7,   7,   6},
	{ 17,   7,   7,   7},
	{  1,   7,   7,   6},
	{  1,   7,   7,   7},
	{ 40,   8,   7,   7},
	{  1,   7,   7,   7},
	{  1,   8,   7,   7},
	{  1,   7,   7,   7},
	{  1,   8,   7,   7},
	{ 16,   8,   7,   8},
	{  1,   8,   7,   7},
	{  1,   8,   7,   8},
	{ 39,   8,   7,   7},
	{ 12,   8,   6,   7},
	{  6,   7,   6,   7},
	{  1,   8,   6,   7},
	{  1,   7,   6,   7},
	{  6,   7,   6,   6},
	{  8,   7,   5,   6},
	{ 14,   7,   5,   5},
	{ 57,   8,   5,   5},
	{  1,   7,   5,   5},
	{  1,   8,   5,   5},
	{  1,   7,   5,   5},
	{  1,   8,   5,   5},
	{  4,   8,   6,   5},
	{ 31,   9,   6,   5},
	{ 35,   9,   7,   5},
	{  8,  11,   7,   5},
	{ 29,  13,   7,   5},
	{  5,  13,   8,   5},
	{ 31,  13,   8,   4},
	{ 29,  16,   8,   4},
	{  1,  19,   9,   4},
	{  1,  23,   9,   3},
	{  1,  19,   8,   3},
	{  1,  13,   6,   2},
	{  1,   6,   3,   2},
	{  1,   2,   1,   2},
	{  1,   1,   1,   1},
	{ 22,  32, 128, 214},
	{ 17,  32, 107, 214},
	{  6,  32, 107, 180},
	{ 17,  32,  90, 180},
	{  1,  32, 107, 180},
	{ 62,  32, 107, 214},
	{  8,  32, 128, 214},
	{ 11,  32, 107, 214},
	{  3,  32, 128, 214},
	{ 47,  32, 107, 214},
	{  2,  32, 107, 180},
	{198,   1,   1,   1},
	{  1,   1,   1,   1}
};