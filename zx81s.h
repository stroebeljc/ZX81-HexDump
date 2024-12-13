#pragma once
#include "basictypes.h"

char mcIndent[][10] = {
	"      // ",
	"      " };

zx81vars zxvars[] = {
	1,"VERSN    ",0,
	2,"E_PPC    ",16394,
	2,"D_FILE   ",0,
	2,"DF_CC    ",0,
	2,"VARS     ",0,
	2,"DEST     ",16402,
	2,"E_LINE   ",0,
	2,"CH_ADD   ",0,
	2,"X_PTR    ",16408,
	2,"STKBOT   ",0,
	2,"STKEND   ",0,
	1,"BERG     ",16414,
	2,"MEM      ",0,
	1,"UNUSED1  ",16417,
	1,"DF_SZ    ",16418,
	2,"S_TOP    ",16419,
	2,"LAST_K   ",16421,
	1,"DEBOUNCE ",16423,
	1,"MARGIN   ",0,
	2,"NXTLIN   ",0,
	2,"OLDPPC   ",16427,
	1,"FLAGX    ",16429,
	2,"STRLEN   ",16430,
	2,"T_ADDR   ",16432,
	2,"SEED     ",16434,
	2,"FRAMES   ",16436,
	1,"COORDS   ",16438,
	1,"         ",16439,
	1,"PR_CC    ",16440,
	1,"S_POSN   ",16441,
	1,"         ",16442,
	1,"CDFLAG   ",0,
   33,"PRBUFF   ",16444,
   25,"MEMBOT   ",16477,
	5,"MEM_5    ",16502,
	2,"UNUSED2  ",16507,
  255,0,0
};

char zx2ascii[][11] = {
" ",
"�",//\241", //"\xA1"
"�",//\242", //"\xA2"
"�",//\246", //"\xA6"
"�",//\244", //"\xA4"
"�",//\254", //"\xAC"
"�",//\262", //"\xB2"
"�",//\271", //"\xB9"
"�",//\272", //"\xBA"
"�",//\276", //"\xBE"
"�",//\275", //"\*xBD"
"\"",
"�",
"$",
":",
"?",
"(",
")",
">",
"<",
"=",
"+",
"-",
"*",
"/",
";",
",",
".",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"A",
"B",
"C",
"D",
"E",
"F",
"G",
"H",
"I",
"J",
"K",
"L",
"M",
"N",
"O",
"P",
"Q",
"R",
"S",
"T",
"U",
"V",
"W",
"X",
"Y",
"Z",
"RND",
"INKEY$ ",
"PI",
"?", //"\x43", //OCTAL 103 = 43h = 67d
"?", //"\x44",
"?", //"\x45",
"?", //"\x46",
"?", //"\x47",
"?", //"\x48",
"?", //"\x49",
"?", //"\x4A",
"?", //"\x4B",
"?", //"\x4C",
"?", //"\x4D",
"?", //"\x4E",
"?", //"\x4F",
"?", //"\x50",
"?", //"\x51",
"?", //"\x52",
"?", //"\x53",
"?", //"\x54",
"?", //"\x55",
"?", //"\x56",
"?", //"\x57",
"?", //"\x58",
"?", //"\x59",
"?", //"\x5A",
"\133", //"\x5B",
"\134", //"\x5C",
"\135", //"\x5D",
"\136", //"\x5E",
"\137", //"\x5F",
"\140", //"\x60",
"\141", //"\x61",
"\142", //"\x62",
"\143", //"\x63",
"\144", //"\x64",
"\145", //"\x65",
"\146", //"\x66",
"\147", //"\x67",
"\150", //"\x68",
"\151", //"\x69",
"\152", //"\x6A",
"\153", //"\x6B",
"\154", //"\x6C",
"\155", //"\x6D",
"\156", //"\x6E",
"\157", //"\x6F",
"\160", //"\x70",
"\161", //"\x71",
"\162", //"\x72",
"\163", //"\x73",
"\164", //"\x74",
"\165", //"\x75",
"",//\r
"\167", //"\x77",
"\170", //"\x78",
"\171", //"\x79",
"\172", //"\x7A",
"\173", //"\x7B",
"\174", //"\x7C",
"\175", //"\x7D",
"\176", //"\x7E",
"\177", //"\x7F",
"�",//\261", //"\xB1",
"�",//\265", //"\xB5",
"�",//\266", //"\xB6",
"�",//\252", //"\xAA",
"�",//\270", //"\xB8",
"�",//\257", //"\xAF",
"�",//\263", //"\xB3",
"�",//\270", //"\xB8",
"�",//\274", //"\xBC",
"�",//\301", //"\xC1",
"�",//\300", //"\xC0",
"\302", //"\xC2", //"
"\303", //"\xC3", //�",
"\305", //"\xC5", //$",
"\306", //"\xC6", //:",
"\307", //"\xC7", //?",
"\310", //"\xC8", //(",
"\311", //"\xC9", //)",
"\312", //"\xCA", //>",
"\313", //"\xCB", //<",
"\314", //"\xCC", //=",
"\315", //"\xCD", //+",
"\316", //"\xCE", //-",
"\317", //"\xCF", //*",
"\320", //"\xD0", //",
"\321", //"\xD1", //;",
"\322", //"\xD2", //,",
"\323", //"\xD3", //.",
"\324", //"\xD4", //0",
"\325", //"\xD5", //1",
"\327", //"\xD7", //2",
"\330", //"\xD8", //3",
"\331", //"\xD9", //4",
"\332", //"\xDA", //5",
"\333", //"\xDB", //6",
"\335", //"\xDD", //7",
"\336", //"\xDE)", //8",
"\340", //"\xE0", //9",
"\341", //"\xE1", //"a",
"\342", //"\xE2", //"b",
"\343", //"\xE3", //"c",
"\345", //"\xE5", //"d",
"\346", //"\xE6", //"e",
"\347", //"\xE7", //"f",
"\350", //"\xE8", //"g",
"\351", //"\xE9", //"h",
"\352", //"\xEA", //"i",
"\353", //"\xEB", //"j",
"\354", //"\xEC", //"k",
"\355", //"\xED", //"l",
"\356", //"\xEE", //"m",
"\357", //"\xEF", //"n",
"\360", //"\xF0", //"o",
"\361", //"\xF1", //"p",
"\362", //"\xF2", //"q",
"\363", //"\xF3", //"r",
"\364", //"\xF4", //"s",
"\365", //"\xF5", //"t",
"\367", //"\xF7", //"u",
"\370", //"\xF8", //"v",
"\371", //"\xF9", //"w",
"\372", //"\xFA", //"x",
"\373", //"\xFB", //"y",
"\375", //"\xFD", //"z",
"\"\"",//$C0
"AT ",
"TAB ",
"?",
"CODE ",
"VAL ",
"LEN ",
"SIN ",
"COS ",
"TAN ",
"ASN ",
"ACS ",
"ATN ",
"LN ",
"EXP ",
"INT ",
"SQR ",
"SGN ",
"ABS ",
"PEEK ",
"USR ",
"STR$ ",
"CHR$ ",
" NOT ",
"**",
" OR ",
" AND ",
"<=",
">=",
"<>",
" THEN ",
" TO ",
" STEP ",
"LPRINT ",
"LLIST ",
"STOP ",
"SLOW ",
"FAST ",
"NEW ",
"SCROLL ",
"CONT ",
"DIM ",
"REM ",
"FOR ",
"GOTO ",
"GOSUB ",
"INPUT ",
"LOAD ",
"LIST ",
"LET ",
"PAUSE ",
"NEXT ",
"POKE ",
"PRINT ",
"PLOT ",
"RUN ",
"SAVE ",
"RAND ",
"IF ",
"CLS ",
"UNPLOT ",
"CLEAR ",
"RETURN ",
"COPY " };

charcodes ZX81charcodes[]{
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
2, "ZX_QUOTE",//$0B
2, "%",//Pound character zxdb mapping
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
1, "ZX_ASTER",//$17 ASTERISK
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "ZX_RND",//$40  64
0, "ZX_INKEY",
0, "ZX_PI",
0, "$43",//$43  66
0, "$44",
0, "$45",
0, "$46",
0, "$47",
0, "$48",
0, "$49",
0, "$4A",
0, "$4B",
0, "$4C",
0, "$4D",
0, "$4E",
0, "$4F",
0, "$50",
0, "$51",
0, "$52",
0, "$53",
0, "$54",
0, "$55",
0, "$56",
0, "$57",
0, "$58",
0, "$59",
0, "$5A",
0, "$5B",
0, "$5C",
0, "$5D",
0, "$5E",
0, "$5F",
0, "$60",
0, "$61",
0, "$62",
0, "$63",
0, "$64",
0, "$65",
0, "$66",
0, "$67",
0, "$68",
0, "$69",
0, "$6A",
0, "$6B",
0, "$6C",
0, "$6D",
0, "$6E",
0, "$6F",
0, "$70",
0, "$71",
0, "$72",
0, "$73",
0, "$74",
0, "$75",
2, "ZX_NEWLINE",
0, "$77",
0, "$78",
0, "$79",
0, "$7A",
0, "$7B",
0, "$7C",
0, "$7D",
2, "ZX_NUMBER",
0, "$7F",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
0, "",
1, "ZX_DBL_QT",//$C0 192
2, "ZX_AT",
2, "ZX_TAB",
2, "ZX_C3",
2, "ZX_CODE",
2, "ZX_VAL",
2, "ZX_LEN",
2, "ZX_SIN",
2, "ZX_COS",
2, "ZX_TAN",
2, "ZX_ASN",
2, "ZX_ACS",
2, "ZX_ATN",
2, "ZX_LN",
2, "ZX_EXP",
2, "ZX_INT",
2, "ZX_SQR",
2, "ZX_SGN",
2, "ZX_ABS",
2, "ZX_PEEK",
2, "ZX_USR",
2, "ZX_STR",
2, "ZX_CHR",
2, "ZX_NOT",
2, "ZX_POWER",//$DD 216
2, "ZX_OR",
2, "ZX_AND",
2, "ZX_LTE",
2, "ZX_GTE",
2, "ZX_NOTEQU",
2, "ZX_THEN",
2, "ZX_TO",
2, "ZX_STEP",
2, "ZX_LPRINT",
2, "ZX_LLIST",
2, "ZX_STOP",
2, "ZX_SLOW",
2, "ZX_FAST",
2, "ZX_NEW",
2, "ZX_SCROLL",
2, "ZX_CONT",
2, "ZX_DIM",
2, "ZX_REM",//$EA
2, "ZX_FOR",
2, "ZX_GOTO",
2, "ZX_GOSUB",
2, "ZX_INPUT",
2, "ZX_LOAD",
1, "ZX_LIST",
2, "ZX_LET",
2, "ZX_PAUSE",
2, "ZX_NEXT",
2, "ZX_POKE",
2, "ZX_PRINT",
2, "ZX_PLOT",
2, "ZX_RUN",
2, "ZX_SAVE",
2, "ZX_RAND",
2, "ZX_IF",
2, "ZX_CLS",
2, "ZX_UNPLOT",
2, "ZX_CLEAR",
2, "ZX_RETURN",
2, "ZX_COPY" };
