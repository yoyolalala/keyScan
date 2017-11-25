#ifndef FONT_H
#define FONT_H

#define GB_Num  14

typedef struct 
{
	char index[3];	  //汉字索引   
	char matrix[32];  //汉字字模	
}GB_1616_TYPE;

const GB_1616_TYPE GB_1616[]={
{"电",0x00,0x00,0xF8,0x88,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x88,0xF8,0x00,0x00,0x00,0x00,0x00,0x1F,0x08,0x08,0x08,0x08,0x7F,0x88,0x88,0x88,0x88,0x9F,0x80,0xF0,0x00},/*"电",0*/
{"子",0x80,0x82,0x82,0x82,0x82,0x82,0x82,0xE2,0xA2,0x92,0x8A,0x86,0x82,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"子",1*/
{"科",0x24,0x24,0xA4,0xFE,0xA3,0x22,0x00,0x22,0xCC,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x08,0x06,0x01,0xFF,0x00,0x01,0x04,0x04,0x04,0x04,0x04,0xFF,0x02,0x02,0x02,0x00},/*"科",2*/
{"技",0x10,0x10,0x10,0xFF,0x10,0x90,0x08,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x08,0x00,0x04,0x44,0x82,0x7F,0x01,0x80,0x80,0x40,0x43,0x2C,0x10,0x28,0x46,0x81,0x80,0x00},/*"技",3*/
{"大",0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xFF,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x80,0x80,0x40,0x20,0x10,0x0C,0x03,0x00,0x03,0x0C,0x10,0x20,0x40,0x80,0x80,0x00},/*"大",4*/
{"学",0x40,0x30,0x11,0x96,0x90,0x90,0x91,0x96,0x90,0x90,0x98,0x14,0x13,0x50,0x30,0x00,0x04,0x04,0x04,0x04,0x04,0x44,0x84,0x7E,0x06,0x05,0x04,0x04,0x04,0x04,0x04,0x00},/*"学",5*/
};

typedef struct 
{
	char index[3];	  //汉字索引   
	char matrix[24];  //汉字字模	
}GB_1212_TYPE;

const GB_1212_TYPE GB_1212[]={
{"电",0xFC,0x24,0x24,0x24,0xFF,0x24,0x24,0x24,0xFC,0x00,0x00,0x00,0x03,0x01,0x01,0x01,0x07,0x09,0x09,0x09,0x09,0x08,0x0E,0x00},/*"电",5*/
{"子",0x40,0x40,0x42,0x42,0x42,0xF2,0x4A,0x46,0x42,0x40,0x40,0x00,0x00,0x00,0x00,0x08,0x08,0x0F,0x00,0x00,0x00,0x00,0x00,0x00},/*"子",6*/
{"科",0x12,0xD2,0xFE,0x51,0x90,0x12,0x24,0x00,0xFF,0x80,0x80,0x00,0x01,0x00,0x0F,0x00,0x00,0x01,0x01,0x01,0x0F,0x00,0x00,0x00},/*"科",7*/
{"技",0x88,0x88,0xFF,0x48,0x24,0xE4,0x24,0x3F,0x24,0xE4,0x04,0x00,0x00,0x08,0x0F,0x00,0x08,0x08,0x05,0x02,0x05,0x08,0x08,0x00},/*"技",8*/
{"大",0x10,0x10,0x10,0x10,0xD0,0x3F,0xD0,0x10,0x10,0x10,0x10,0x00,0x08,0x08,0x04,0x03,0x00,0x00,0x00,0x03,0x04,0x08,0x08,0x00},/*"大",9*/
{"学",0x8C,0x85,0x96,0x94,0x95,0x96,0xD4,0xB4,0x96,0x85,0x8C,0x00,0x00,0x00,0x00,0x08,0x08,0x0F,0x00,0x00,0x00,0x00,0x00,0x00},/*"学",10*/
};
//ASCII字符集: !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~
const unsigned char ASCII_6_12[95][12]=
{
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
	{0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00},/*"!",1*/
	{0x00,0x0C,0x02,0x0C,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
	{0x90,0xD0,0xBC,0xD0,0xBC,0x90,0x00,0x03,0x00,0x03,0x00,0x00},/*"#",3*/
	{0x18,0x24,0xFE,0x44,0x8C,0x00,0x03,0x02,0x07,0x02,0x01,0x00},/*"$",4*/
	{0x18,0x24,0xD8,0xB0,0x4C,0x80,0x00,0x03,0x00,0x01,0x02,0x01},/*"%",5*/
	{0xC0,0x38,0xE4,0x38,0xE0,0x00,0x01,0x02,0x02,0x01,0x02,0x02},/*"&",6*/
	{0x08,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
	{0x00,0x00,0x00,0xF8,0x04,0x02,0x00,0x00,0x00,0x01,0x02,0x04},/*"(",8*/
	{0x00,0x02,0x04,0xF8,0x00,0x00,0x00,0x04,0x02,0x01,0x00,0x00},/*")",9*/
	{0x90,0x60,0xF8,0x60,0x90,0x00,0x00,0x00,0x01,0x00,0x00,0x00},/*"*",10*/
	{0x20,0x20,0xFC,0x20,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00},/*"+",11*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x06,0x00,0x00,0x00,0x00},/*",",12*/
	{0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00},/*".",14*/
	{0x00,0x80,0x60,0x1C,0x02,0x00,0x04,0x03,0x00,0x00,0x00,0x00},/*"/",15*/
	{0xF8,0x04,0x04,0x04,0xF8,0x00,0x01,0x02,0x02,0x02,0x01,0x00},/*"0",16*/
	{0x00,0x08,0xFC,0x00,0x00,0x00,0x00,0x02,0x03,0x02,0x00,0x00},/*"1",17*/
	{0x18,0x84,0x44,0x24,0x18,0x00,0x03,0x02,0x02,0x02,0x02,0x00},/*"2",18*/
	{0x08,0x04,0x24,0x24,0xD8,0x00,0x01,0x02,0x02,0x02,0x01,0x00},/*"3",19*/
	{0x40,0xB0,0x88,0xFC,0x80,0x00,0x00,0x00,0x00,0x03,0x02,0x00},/*"4",20*/
	{0x3C,0x24,0x24,0x24,0xC4,0x00,0x01,0x02,0x02,0x02,0x01,0x00},/*"5",21*/
	{0xF8,0x24,0x24,0x2C,0xC0,0x00,0x01,0x02,0x02,0x02,0x01,0x00},/*"6",22*/
	{0x0C,0x04,0xE4,0x1C,0x04,0x00,0x00,0x00,0x03,0x00,0x00,0x00},/*"7",23*/
	{0xD8,0x24,0x24,0x24,0xD8,0x00,0x01,0x02,0x02,0x02,0x01,0x00},/*"8",24*/
	{0x38,0x44,0x44,0x44,0xF8,0x00,0x00,0x03,0x02,0x02,0x01,0x00},/*"9",25*/
	{0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00},/*":",26*/
	{0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00},/*";",27*/
	{0x00,0x20,0x50,0x88,0x04,0x02,0x00,0x00,0x00,0x00,0x01,0x02},/*"<",28*/
	{0x90,0x90,0x90,0x90,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"=",29*/
	{0x00,0x02,0x04,0x88,0x50,0x20,0x00,0x02,0x01,0x00,0x00,0x00},/*">",30*/
	{0x18,0x04,0xC4,0x24,0x18,0x00,0x00,0x00,0x02,0x00,0x00,0x00},/*"?",31*/
	{0xF8,0x04,0xE4,0x94,0xF8,0x00,0x01,0x02,0x02,0x02,0x02,0x00},/*"@",32*/
	{0x00,0xE0,0x9C,0xF0,0x80,0x00,0x02,0x03,0x00,0x00,0x03,0x02},/*"A",33*/
	{0x04,0xFC,0x24,0x24,0xD8,0x00,0x02,0x03,0x02,0x02,0x01,0x00},/*"B",34*/
	{0xF8,0x04,0x04,0x04,0x0C,0x00,0x01,0x02,0x02,0x02,0x01,0x00},/*"C",35*/
	{0x04,0xFC,0x04,0x04,0xF8,0x00,0x02,0x03,0x02,0x02,0x01,0x00},/*"D",36*/
	{0x04,0xFC,0x24,0x74,0x0C,0x00,0x02,0x03,0x02,0x02,0x03,0x00},/*"E",37*/
	{0x04,0xFC,0x24,0x74,0x0C,0x00,0x02,0x03,0x02,0x00,0x00,0x00},/*"F",38*/
	{0xF0,0x08,0x04,0x44,0xCC,0x40,0x00,0x01,0x02,0x02,0x01,0x00},/*"G",39*/
	{0x04,0xFC,0x20,0x20,0xFC,0x04,0x02,0x03,0x00,0x00,0x03,0x02},/*"H",40*/
	{0x04,0x04,0xFC,0x04,0x04,0x00,0x02,0x02,0x03,0x02,0x02,0x00},/*"I",41*/
	{0x00,0x04,0x04,0xFC,0x04,0x04,0x06,0x04,0x04,0x03,0x00,0x00},/*"J",42*/
	{0x04,0xFC,0x24,0xD0,0x0C,0x04,0x02,0x03,0x02,0x00,0x03,0x02},/*"K",43*/
	{0x04,0xFC,0x04,0x00,0x00,0x00,0x02,0x03,0x02,0x02,0x02,0x03},/*"L",44*/
	{0xFC,0x3C,0xC0,0x3C,0xFC,0x00,0x03,0x00,0x03,0x00,0x03,0x00},/*"M",45*/
	{0x04,0xFC,0x30,0xC4,0xFC,0x04,0x02,0x03,0x02,0x00,0x03,0x00},/*"N",46*/
	{0xF8,0x04,0x04,0x04,0xF8,0x00,0x01,0x02,0x02,0x02,0x01,0x00},/*"O",47*/
	{0x04,0xFC,0x24,0x24,0x18,0x00,0x02,0x03,0x02,0x00,0x00,0x00},/*"P",48*/
	{0xF8,0x84,0x84,0x04,0xF8,0x00,0x01,0x02,0x02,0x07,0x05,0x00},/*"Q",49*/
	{0x04,0xFC,0x24,0x64,0x98,0x00,0x02,0x03,0x02,0x00,0x03,0x02},/*"R",50*/
	{0x18,0x24,0x24,0x44,0x8C,0x00,0x03,0x02,0x02,0x02,0x01,0x00},/*"S",51*/
	{0x0C,0x04,0xFC,0x04,0x0C,0x00,0x00,0x02,0x03,0x02,0x00,0x00},/*"T",52*/
	{0x04,0xFC,0x00,0x00,0xFC,0x04,0x00,0x01,0x02,0x02,0x01,0x00},/*"U",53*/
	{0x04,0x7C,0x80,0xE0,0x1C,0x04,0x00,0x00,0x03,0x00,0x00,0x00},/*"V",54*/
	{0x1C,0xE0,0x3C,0xE0,0x1C,0x00,0x00,0x03,0x00,0x03,0x00,0x00},/*"W",55*/
	{0x04,0x9C,0x60,0x9C,0x04,0x00,0x02,0x03,0x00,0x03,0x02,0x00},/*"X",56*/
	{0x04,0x1C,0xE0,0x1C,0x04,0x00,0x00,0x02,0x03,0x02,0x00,0x00},/*"Y",57*/
	{0x0C,0x84,0x64,0x1C,0x04,0x00,0x02,0x03,0x02,0x02,0x03,0x00},/*"Z",58*/
	{0x00,0x00,0xFE,0x02,0x02,0x00,0x00,0x00,0x07,0x04,0x04,0x00},/*"[",59*/
	{0x00,0x0E,0x30,0xC0,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x00},/*"\",60*/
	{0x00,0x02,0x02,0xFE,0x00,0x00,0x00,0x04,0x04,0x07,0x00,0x00},/*"]",61*/
	{0x00,0x04,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08},/*"_",63*/
	{0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
	{0x00,0x40,0xA0,0xA0,0xC0,0x00,0x00,0x01,0x02,0x02,0x03,0x02},/*"a",65*/
	{0x04,0xFC,0x20,0x20,0xC0,0x00,0x00,0x03,0x02,0x02,0x01,0x00},/*"b",66*/
	{0x00,0xC0,0x20,0x20,0x60,0x00,0x00,0x01,0x02,0x02,0x02,0x00},/*"c",67*/
	{0x00,0xC0,0x20,0x24,0xFC,0x00,0x00,0x01,0x02,0x02,0x03,0x02},/*"d",68*/
	{0x00,0xC0,0xA0,0xA0,0xC0,0x00,0x00,0x01,0x02,0x02,0x02,0x00},/*"e",69*/
	{0x00,0x20,0xF8,0x24,0x24,0x04,0x00,0x02,0x03,0x02,0x02,0x00},/*"f",70*/
	{0x00,0x40,0xA0,0xA0,0x60,0x20,0x00,0x07,0x0A,0x0A,0x0A,0x04},/*"g",71*/
	{0x04,0xFC,0x20,0x20,0xC0,0x00,0x02,0x03,0x02,0x00,0x03,0x02},/*"h",72*/
	{0x00,0x20,0xE4,0x00,0x00,0x00,0x00,0x02,0x03,0x02,0x00,0x00},/*"i",73*/
	{0x00,0x00,0x20,0xE4,0x00,0x00,0x08,0x08,0x08,0x07,0x00,0x00},/*"j",74*/
	{0x04,0xFC,0x80,0xE0,0x20,0x20,0x02,0x03,0x02,0x00,0x03,0x02},/*"k",75*/
	{0x04,0x04,0xFC,0x00,0x00,0x00,0x02,0x02,0x03,0x02,0x02,0x00},/*"l",76*/
	{0xE0,0x20,0xE0,0x20,0xC0,0x00,0x03,0x00,0x03,0x00,0x03,0x00},/*"m",77*/
	{0x20,0xE0,0x20,0x20,0xC0,0x00,0x02,0x03,0x02,0x00,0x03,0x02},/*"n",78*/
	{0x00,0xC0,0x20,0x20,0xC0,0x00,0x00,0x01,0x02,0x02,0x01,0x00},/*"o",79*/
	{0x20,0xE0,0x20,0x20,0xC0,0x00,0x08,0x0F,0x0A,0x02,0x01,0x00},/*"p",80*/
	{0x00,0xC0,0x20,0x20,0xE0,0x00,0x00,0x01,0x02,0x0A,0x0F,0x08},/*"q",81*/
	{0x20,0xE0,0x40,0x20,0x20,0x00,0x02,0x03,0x02,0x00,0x00,0x00},/*"r",82*/
	{0x00,0x60,0xA0,0xA0,0x20,0x00,0x00,0x02,0x02,0x02,0x03,0x00},/*"s",83*/
	{0x00,0x20,0xF8,0x20,0x00,0x00,0x00,0x00,0x01,0x02,0x02,0x00},/*"t",84*/
	{0x20,0xE0,0x00,0x20,0xE0,0x00,0x00,0x01,0x02,0x02,0x03,0x02},/*"u",85*/
	{0x20,0xE0,0x20,0x80,0x60,0x20,0x00,0x00,0x03,0x01,0x00,0x00},/*"v",86*/
	{0x60,0x80,0xE0,0x80,0x60,0x00,0x00,0x03,0x00,0x03,0x00,0x00},/*"w",87*/
	{0x20,0x60,0x80,0x60,0x20,0x00,0x02,0x03,0x00,0x03,0x02,0x00},/*"x",88*/
	{0x20,0xE0,0x20,0x80,0x60,0x20,0x08,0x08,0x07,0x01,0x00,0x00},/*"y",89*/
	{0x00,0x20,0xA0,0x60,0x20,0x00,0x00,0x02,0x03,0x02,0x02,0x00},/*"z",90*/
	{0x00,0x00,0x20,0xDE,0x02,0x00,0x00,0x00,0x00,0x07,0x04,0x00},/*"{",91*/
	{0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00},/*"|",92*/
	{0x00,0x02,0xDE,0x20,0x00,0x00,0x00,0x04,0x07,0x00,0x00,0x00},/*"}",93*/
	{0x02,0x01,0x02,0x04,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
};

const unsigned char ASCII_8_16[][16]=
{
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
	{0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x30,0x00,0x00,0x00},/*"!",1*/
	{0x00,0x10,0x0C,0x06,0x10,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
	{0x40,0xC0,0x78,0x40,0xC0,0x78,0x40,0x00,0x04,0x3F,0x04,0x04,0x3F,0x04,0x04,0x00},/*"#",3*/
	{0x00,0x70,0x88,0xFC,0x08,0x30,0x00,0x00,0x00,0x18,0x20,0xFF,0x21,0x1E,0x00,0x00},/*"$",4*/
	{0xF0,0x08,0xF0,0x00,0xE0,0x18,0x00,0x00,0x00,0x21,0x1C,0x03,0x1E,0x21,0x1E,0x00},/*"%",5*/
	{0x00,0xF0,0x08,0x88,0x70,0x00,0x00,0x00,0x1E,0x21,0x23,0x24,0x19,0x27,0x21,0x10},/*"&",6*/
	{0x10,0x16,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
	{0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00,0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00},/*"(",8*/
	{0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,0x00,0x40,0x20,0x18,0x07,0x00,0x00,0x00},/*")",9*/
	{0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00},/*"*",10*/
	{0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x1F,0x01,0x01,0x01,0x00},/*"+",11*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xB0,0x70,0x00,0x00,0x00,0x00,0x00},/*",",12*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01},/*"-",13*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00},/*".",14*/
	{0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x04,0x00,0x60,0x18,0x06,0x01,0x00,0x00,0x00},/*"/",15*/
	{0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00},/*"0",16*/
	{0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"1",17*/
	{0x00,0x70,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00},/*"2",18*/
	{0x00,0x30,0x08,0x88,0x88,0x48,0x30,0x00,0x00,0x18,0x20,0x20,0x20,0x11,0x0E,0x00},/*"3",19*/
	{0x00,0x00,0xC0,0x20,0x10,0xF8,0x00,0x00,0x00,0x07,0x04,0x24,0x24,0x3F,0x24,0x00},/*"4",20*/
	{0x00,0xF8,0x08,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x21,0x20,0x20,0x11,0x0E,0x00},/*"5",21*/
	{0x00,0xE0,0x10,0x88,0x88,0x18,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x11,0x0E,0x00},/*"6",22*/
	{0x00,0x38,0x08,0x08,0xC8,0x38,0x08,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00},/*"7",23*/
	{0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00},/*"8",24*/
	{0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x00,0x31,0x22,0x22,0x11,0x0F,0x00},/*"9",25*/
	{0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00},/*":",26*/
	{0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,0x00,0x00,0x00,0x00},/*";",27*/
	{0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00},/*"<",28*/
	{0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00},/*"=",29*/
	{0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00},/*">",30*/
	{0x00,0x70,0x48,0x08,0x08,0x08,0xF0,0x00,0x00,0x00,0x00,0x30,0x36,0x01,0x00,0x00},/*"?",31*/
	{0xC0,0x30,0xC8,0x28,0xE8,0x10,0xE0,0x00,0x07,0x18,0x27,0x24,0x23,0x14,0x0B,0x00},/*"@",32*/
	{0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00,0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20},/*"A",33*/
	{0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00},/*"B",34*/
	{0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00},/*"C",35*/
	{0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00,0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00},/*"D",36*/
	{0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00},/*"E",37*/
	{0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00},/*"F",38*/
	{0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00,0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00},/*"G",39*/
	{0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20},/*"H",40*/
	{0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"I",41*/
	{0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00},/*"J",42*/
	{0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00,0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00},/*"K",43*/
	{0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00},/*"L",44*/
	{0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00,0x20,0x3F,0x00,0x3F,0x00,0x3F,0x20,0x00},/*"M",45*/
	{0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08,0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00},/*"N",46*/
	{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00},/*"O",47*/
	{0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00,0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00},/*"P",48*/
	{0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x18,0x24,0x24,0x38,0x50,0x4F,0x00},/*"Q",49*/
	{0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00,0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20},/*"R",50*/
	{0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00,0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00},/*"S",51*/
	{0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00},/*"T",52*/
	{0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00},/*"U",53*/
	{0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08,0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00},/*"V",54*/
	{0xF8,0x08,0x00,0xF8,0x00,0x08,0xF8,0x00,0x03,0x3C,0x07,0x00,0x07,0x3C,0x03,0x00},/*"W",55*/
	{0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08,0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20},/*"X",56*/
	{0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00},/*"Y",57*/
	{0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00,0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00},/*"Z",58*/
	{0x00,0x00,0x00,0xFE,0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x7F,0x40,0x40,0x40,0x00},/*"[",59*/
	{0x00,0x0C,0x30,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x06,0x38,0xC0,0x00},/*"\",60*/
	{0x00,0x02,0x02,0x02,0xFE,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x7F,0x00,0x00,0x00},/*"]",61*/
	{0x00,0x00,0x04,0x02,0x02,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80},/*"_",63*/
	{0x00,0x02,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
	{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x19,0x24,0x22,0x22,0x22,0x3F,0x20},/*"a",65*/
	{0x08,0xF8,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00},/*"b",66*/
	{0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00},/*"c",67*/
	{0x00,0x00,0x00,0x80,0x80,0x88,0xF8,0x00,0x00,0x0E,0x11,0x20,0x20,0x10,0x3F,0x20},/*"d",68*/
	{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x22,0x22,0x22,0x22,0x13,0x00},/*"e",69*/
	{0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x18,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"f",70*/
	{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00},/*"g",71*/
	{0x08,0xF8,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20},/*"h",72*/
	{0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"i",73*/
	{0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00},/*"j",74*/
	{0x08,0xF8,0x00,0x00,0x80,0x80,0x80,0x00,0x20,0x3F,0x24,0x02,0x2D,0x30,0x20,0x00},/*"k",75*/
	{0x00,0x08,0x08,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00},/*"l",76*/
	{0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F},/*"m",77*/
	{0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20},/*"n",78*/
	{0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00},/*"o",79*/
	{0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00,0x80,0xFF,0xA1,0x20,0x20,0x11,0x0E,0x00},/*"p",80*/
	{0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x0E,0x11,0x20,0x20,0xA0,0xFF,0x80},/*"q",81*/
	{0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00},/*"r",82*/
	{0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00},/*"s",83*/
	{0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x20,0x00,0x00},/*"t",84*/
	{0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20},/*"u",85*/
	{0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x00,0x01,0x0E,0x30,0x08,0x06,0x01,0x00},/*"v",86*/
	{0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,0x0F,0x30,0x0C,0x03,0x0C,0x30,0x0F,0x00},/*"w",87*/
	{0x00,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x31,0x2E,0x0E,0x31,0x20,0x00},/*"x",88*/
	{0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x80,0x81,0x8E,0x70,0x18,0x06,0x01,0x00},/*"y",89*/
	{0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00},/*"z",90*/
	{0x00,0x00,0x00,0x00,0x80,0x7C,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x3F,0x40,0x40},/*"{",91*/
	{0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},/*"|",92*/
	{0x00,0x02,0x02,0x7C,0x80,0x00,0x00,0x00,0x00,0x40,0x40,0x3F,0x00,0x00,0x00,0x00},/*"}",93*/
	{0x00,0x06,0x01,0x01,0x02,0x02,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
};

const unsigned char ASCII_12_24[95][36]=
{
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*" ",0*/
	{0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x7F,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x00},/*"!",1*/
	{0x00,0x00,0x80,0x60,0x30,0x1C,0x8C,0x60,0x30,0x1C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*""",2*/
	{0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x86,0xE6,0x9F,0x86,0x86,0x86,0x86,0xE6,0x9F,0x86,0x00,0x00,0x01,0x1F,0x01,0x01,0x01,0x01,0x01,0x1F,0x01,0x01,0x00},/*"#",3*/
	{0x00,0x00,0x80,0xC0,0x60,0x20,0xF8,0x20,0xE0,0xC0,0x00,0x00,0x00,0x00,0x03,0x07,0x0C,0x18,0xFF,0x70,0xE1,0x81,0x00,0x00,0x00,0x00,0x07,0x0F,0x10,0x10,0x7F,0x10,0x0F,0x07,0x00,0x00},/*"$",4*/
	{0x80,0x60,0x20,0x60,0x80,0x00,0x00,0x00,0xE0,0x20,0x00,0x00,0x0F,0x30,0x20,0x30,0x9F,0x70,0xDC,0x37,0x10,0x30,0xC0,0x00,0x00,0x00,0x10,0x0E,0x03,0x00,0x07,0x18,0x10,0x18,0x07,0x00},/*"%",5*/
	{0x00,0x00,0xC0,0x20,0x20,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x1F,0x38,0xE8,0x87,0x03,0xC4,0x3C,0x04,0x00,0x00,0x07,0x0F,0x18,0x10,0x10,0x0B,0x07,0x0D,0x10,0x10,0x08,0x00},/*"&",6*/
	{0x00,0x80,0x8C,0x4C,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"'",7*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x30,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x18,0x20,0x40,0x00},/*"(",8*/
	{0x00,0x04,0x08,0x30,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x20,0x18,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00},/*")",9*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x66,0x66,0x3C,0x18,0xFF,0x18,0x3C,0x66,0x66,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00},/*"*",10*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00},/*"+",11*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x8C,0x4C,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*",",12*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"-",13*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",14*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x38,0x0C,0x00,0x00,0x00,0x00,0x00,0x80,0x70,0x1C,0x03,0x00,0x00,0x00,0x00,0x00,0x60,0x38,0x0E,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"/",15*/
	{0x00,0x00,0x80,0xC0,0x60,0x20,0x20,0x60,0xC0,0x80,0x00,0x00,0x00,0xFE,0xFF,0x01,0x00,0x00,0x00,0x00,0x01,0xFF,0xFE,0x00,0x00,0x01,0x07,0x0E,0x18,0x10,0x10,0x18,0x0E,0x07,0x01,0x00},/*"0",16*/
	{0x00,0x00,0x80,0x80,0x80,0xC0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00},/*"1",17*/
	{0x00,0x80,0x40,0x20,0x20,0x20,0x20,0x60,0xC0,0x80,0x00,0x00,0x00,0x03,0x03,0x00,0x80,0x40,0x20,0x38,0x1F,0x07,0x00,0x00,0x00,0x1C,0x1A,0x19,0x18,0x18,0x18,0x18,0x18,0x1F,0x00,0x00},/*"2",18*/
	{0x00,0x80,0xC0,0x20,0x20,0x20,0x60,0xC0,0x80,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x10,0x10,0x18,0x2F,0xE7,0x80,0x00,0x00,0x00,0x07,0x0F,0x10,0x10,0x10,0x10,0x18,0x0F,0x07,0x00,0x00},/*"3",19*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0xF0,0x00,0x00,0x00,0x00,0xC0,0xB0,0x88,0x86,0x81,0x80,0xFF,0xFF,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x1F,0x1F,0x10,0x10,0x00},/*"4",20*/
	{0x00,0x00,0xE0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,0x00,0x00,0x3F,0x10,0x08,0x08,0x08,0x18,0xF0,0xE0,0x00,0x00,0x00,0x07,0x0B,0x10,0x10,0x10,0x10,0x1C,0x0F,0x03,0x00,0x00},/*"5",21*/
	{0x00,0x00,0x80,0xC0,0x40,0x20,0x20,0x20,0xE0,0xC0,0x00,0x00,0x00,0xFC,0xFF,0x21,0x10,0x08,0x08,0x08,0x18,0xF0,0xE0,0x00,0x00,0x01,0x07,0x0C,0x18,0x10,0x10,0x10,0x08,0x0F,0x03,0x00},/*"6",22*/
	{0x00,0x00,0xC0,0xE0,0x60,0x60,0x60,0x60,0x60,0xE0,0x60,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xE0,0x18,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00,0x00,0x00},/*"7",23*/
	{0x00,0x80,0xC0,0x60,0x20,0x20,0x20,0x20,0x60,0xC0,0x80,0x00,0x00,0x87,0xEF,0x2C,0x18,0x18,0x30,0x30,0x68,0xCF,0x83,0x00,0x00,0x07,0x0F,0x08,0x10,0x10,0x10,0x10,0x18,0x0F,0x07,0x00},/*"8",24*/
	{0x00,0x00,0xC0,0xC0,0x20,0x20,0x20,0x20,0xC0,0x80,0x00,0x00,0x00,0x1F,0x3F,0x60,0x40,0x40,0x40,0x20,0x10,0xFF,0xFE,0x00,0x00,0x00,0x0C,0x1C,0x10,0x10,0x10,0x08,0x0F,0x03,0x00,0x00},/*"9",25*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x0E,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x00},/*":",26*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x38,0x00,0x00,0x00,0x00,0x00},/*";",27*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x20,0x10,0x00,0x00,0x00,0x10,0x28,0x44,0x82,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x00},/*"<",28*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"=",29*/
	{0x00,0x00,0x10,0x20,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x82,0x44,0x28,0x10,0x00,0x00,0x00,0x10,0x08,0x04,0x02,0x01,0x00,0x00,0x00,0x00,0x00},/*">",30*/
	{0x00,0xC0,0x20,0x20,0x10,0x10,0x10,0x10,0x30,0xE0,0xC0,0x00,0x00,0x03,0x03,0x00,0x00,0xF0,0x10,0x08,0x0C,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x00,0x00},/*"?",31*/
	{0x00,0x00,0x00,0xC0,0x40,0x60,0x20,0x20,0x20,0x40,0xC0,0x00,0x00,0xFC,0xFF,0x01,0xF0,0x0E,0x03,0xC1,0xFE,0x03,0x80,0x7F,0x00,0x01,0x07,0x0E,0x08,0x11,0x11,0x10,0x11,0x09,0x04,0x02},/*"@",32*/
	{0x00,0x00,0x00,0x00,0x80,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x7C,0x43,0x40,0x47,0x7F,0xF8,0x80,0x00,0x00,0x10,0x18,0x1F,0x10,0x00,0x00,0x00,0x00,0x13,0x1F,0x1C,0x10},/*"A",33*/
	{0x20,0xE0,0xE0,0x20,0x20,0x20,0x20,0x60,0xC0,0x80,0x00,0x00,0x00,0xFF,0xFF,0x10,0x10,0x10,0x10,0x18,0x2F,0xE7,0x80,0x00,0x10,0x1F,0x1F,0x10,0x10,0x10,0x10,0x10,0x18,0x0F,0x07,0x00},/*"B",34*/
	{0x00,0x00,0x80,0xC0,0x40,0x20,0x20,0x20,0x20,0x60,0xE0,0x00,0x00,0xFC,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x07,0x0E,0x18,0x10,0x10,0x10,0x08,0x04,0x03,0x00},/*"C",35*/
	{0x20,0xE0,0xE0,0x20,0x20,0x20,0x20,0x40,0xC0,0x80,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFE,0x00,0x10,0x1F,0x1F,0x10,0x10,0x10,0x18,0x08,0x0E,0x07,0x01,0x00},/*"D",36*/
	{0x20,0xE0,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0x60,0x80,0x00,0x00,0xFF,0xFF,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,0x00,0x00,0x10,0x1F,0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x18,0x06,0x00},/*"E",37*/
	{0x20,0xE0,0xE0,0x20,0x20,0x20,0x20,0x20,0x60,0x60,0x80,0x00,0x00,0xFF,0xFF,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,0x01,0x00,0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"F",38*/
	{0x00,0x00,0x80,0xC0,0x60,0x20,0x20,0x20,0x40,0xE0,0x00,0x00,0x00,0xFC,0xFF,0x01,0x00,0x00,0x40,0x40,0xC0,0xC1,0x40,0x40,0x00,0x01,0x07,0x0E,0x18,0x10,0x10,0x10,0x0F,0x0F,0x00,0x00},/*"G",39*/
	{0x20,0xE0,0xE0,0x20,0x00,0x00,0x00,0x00,0x20,0xE0,0xE0,0x20,0x00,0xFF,0xFF,0x10,0x10,0x10,0x10,0x10,0x10,0xFF,0xFF,0x00,0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x00,0x10,0x1F,0x1F,0x10},/*"H",40*/
	{0x00,0x00,0x20,0x20,0x20,0xE0,0xE0,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00},/*"I",41*/
	{0x00,0x00,0x00,0x00,0x20,0x20,0x20,0xE0,0xE0,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x60,0xE0,0x80,0x80,0x80,0xC0,0x7F,0x3F,0x00,0x00,0x00},/*"J",42*/
	{0x20,0xE0,0xE0,0x20,0x00,0x00,0x20,0xA0,0x60,0x20,0x20,0x00,0x00,0xFF,0xFF,0x30,0x18,0x7C,0xE3,0xC0,0x00,0x00,0x00,0x00,0x10,0x1F,0x1F,0x10,0x00,0x00,0x01,0x13,0x1F,0x1C,0x18,0x10},/*"K",43*/
	{0x20,0xE0,0xE0,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x1F,0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x18,0x06,0x00},/*"L",44*/
	{0x20,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0xE0,0xE0,0xE0,0x20,0x00,0xFF,0x01,0x3F,0xFE,0xC0,0xE0,0x1E,0x01,0xFF,0xFF,0x00,0x10,0x1F,0x10,0x00,0x03,0x1F,0x03,0x00,0x10,0x1F,0x1F,0x10},/*"M",45*/
	{0x20,0xE0,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x20,0xE0,0x20,0x00,0xFF,0x00,0x03,0x07,0x1C,0x78,0xE0,0x80,0x00,0xFF,0x00,0x10,0x1F,0x10,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x1F,0x00},/*"N",46*/
	{0x00,0x00,0x80,0xC0,0x60,0x20,0x20,0x60,0xC0,0x80,0x00,0x00,0x00,0xFE,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x01,0x07,0x0E,0x18,0x10,0x10,0x18,0x0C,0x07,0x01,0x00},/*"O",47*/
	{0x20,0xE0,0xE0,0x20,0x20,0x20,0x20,0x20,0x60,0xC0,0x80,0x00,0x00,0xFF,0xFF,0x20,0x20,0x20,0x20,0x20,0x30,0x1F,0x0F,0x00,0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"P",48*/
	{0x00,0x00,0x80,0xC0,0x60,0x20,0x20,0x60,0xC0,0x80,0x00,0x00,0x00,0xFE,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x01,0x07,0x0E,0x11,0x11,0x13,0x3C,0x7C,0x67,0x21,0x00},/*"Q",49*/
	{0x20,0xE0,0xE0,0x20,0x20,0x20,0x20,0x20,0x60,0xC0,0x80,0x00,0x00,0xFF,0xFF,0x10,0x10,0x30,0xF0,0xD0,0x08,0x0F,0x07,0x00,0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x03,0x0F,0x1C,0x10,0x10},/*"R",50*/
	{0x00,0x80,0xC0,0x60,0x20,0x20,0x20,0x20,0x40,0x40,0xE0,0x00,0x00,0x07,0x0F,0x0C,0x18,0x18,0x30,0x30,0x60,0xE0,0x81,0x00,0x00,0x1F,0x0C,0x08,0x10,0x10,0x10,0x10,0x18,0x0F,0x07,0x00},/*"S",51*/
	{0x80,0x60,0x20,0x20,0x20,0xE0,0xE0,0x20,0x20,0x20,0x60,0x80,0x01,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x10,0x1F,0x1F,0x10,0x00,0x00,0x00,0x00},/*"T",52*/
	{0x20,0xE0,0xE0,0x20,0x00,0x00,0x00,0x00,0x00,0x20,0xE0,0x20,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x07,0x0F,0x18,0x10,0x10,0x10,0x10,0x10,0x08,0x07,0x00},/*"U",53*/
	{0x20,0x60,0xE0,0xE0,0x20,0x00,0x00,0x00,0x20,0xE0,0x60,0x20,0x00,0x00,0x07,0x7F,0xF8,0x80,0x00,0x80,0x7C,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x1F,0x1C,0x07,0x00,0x00,0x00,0x00},/*"V",54*/
	{0x20,0xE0,0xE0,0x20,0x00,0xE0,0xE0,0x20,0x00,0x20,0xE0,0x20,0x00,0x07,0xFF,0xF8,0xE0,0x1F,0xFF,0xFC,0xE0,0x1F,0x00,0x00,0x00,0x00,0x03,0x1F,0x03,0x00,0x01,0x1F,0x03,0x00,0x00,0x00},/*"W",55*/
	{0x00,0x20,0x60,0xE0,0xA0,0x00,0x00,0x20,0xE0,0x60,0x20,0x00,0x00,0x00,0x00,0x03,0x8F,0x7C,0xF8,0xC6,0x01,0x00,0x00,0x00,0x00,0x10,0x18,0x1E,0x13,0x00,0x01,0x17,0x1F,0x18,0x10,0x00},/*"X",56*/
	{0x20,0x60,0xE0,0xE0,0x20,0x00,0x00,0x00,0x20,0xE0,0x60,0x20,0x00,0x00,0x01,0x07,0x3E,0xF8,0xE0,0x18,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x1F,0x1F,0x10,0x10,0x00,0x00,0x00},/*"Y",57*/
	{0x00,0x80,0x60,0x20,0x20,0x20,0x20,0xA0,0xE0,0xE0,0x20,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0x3E,0x0F,0x03,0x00,0x00,0x00,0x00,0x10,0x1C,0x1F,0x17,0x10,0x10,0x10,0x10,0x18,0x06,0x00},/*"Z",58*/
	{0x00,0x00,0x00,0x00,0x00,0xFC,0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x40,0x40,0x40,0x40,0x40,0x00},/*"[",59*/
	{0x00,0x00,0x10,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x1C,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0C,0x70,0x80,0x00},/*"\",60*/
	{0x00,0x00,0x04,0x04,0x04,0x04,0x04,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x7F,0x00,0x00,0x00,0x00},/*"]",61*/
	{0x00,0x00,0x00,0x10,0x08,0x0C,0x04,0x0C,0x08,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"^",62*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80},/*"_",63*/
	{0x00,0x00,0x00,0x04,0x04,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"`",64*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x98,0xD8,0x44,0x64,0x24,0x24,0xFC,0xF8,0x00,0x00,0x00,0x0F,0x1F,0x18,0x10,0x10,0x10,0x08,0x1F,0x1F,0x10,0x18},/*"a",65*/
	{0x00,0x20,0xE0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x18,0x08,0x04,0x04,0x0C,0xF8,0xF0,0x00,0x00,0x00,0x1F,0x0F,0x18,0x10,0x10,0x10,0x18,0x0F,0x03,0x00},/*"b",66*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF8,0x18,0x04,0x04,0x04,0x3C,0x38,0x00,0x00,0x00,0x00,0x03,0x0F,0x0C,0x10,0x10,0x10,0x10,0x08,0x06,0x00,0x00},/*"c",67*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xE0,0xF0,0x00,0x00,0x00,0xE0,0xF8,0x1C,0x04,0x04,0x04,0x08,0xFF,0xFF,0x00,0x00,0x00,0x03,0x0F,0x18,0x10,0x10,0x10,0x08,0x1F,0x0F,0x08,0x00},/*"d",68*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF8,0x48,0x44,0x44,0x44,0x4C,0x78,0x70,0x00,0x00,0x00,0x03,0x0F,0x0C,0x18,0x10,0x10,0x10,0x08,0x04,0x00},/*"e",69*/
	{0x00,0x00,0x00,0x00,0x80,0xC0,0x60,0x20,0x20,0xE0,0xC0,0x00,0x00,0x04,0x04,0x04,0xFF,0xFF,0x04,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x10,0x10,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00,0x00},/*"f",70*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0xF8,0x8C,0x04,0x04,0x8C,0xF8,0x74,0x04,0x0C,0x00,0x70,0x76,0xCF,0x8D,0x8D,0x8D,0x89,0xC8,0x78,0x70,0x00},/*"g",71*/
	{0x00,0x20,0xE0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x08,0x04,0x04,0x04,0xFC,0xF8,0x00,0x00,0x00,0x10,0x1F,0x1F,0x10,0x00,0x00,0x10,0x1F,0x1F,0x10,0x00},/*"h",72*/
	{0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00},/*"i",73*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0x80,0x80,0xC0,0x7F,0x3F,0x00,0x00,0x00},/*"j",74*/
	{0x00,0x20,0xE0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x80,0xC0,0xF4,0x1C,0x04,0x04,0x00,0x00,0x00,0x10,0x1F,0x1F,0x11,0x00,0x03,0x1F,0x1C,0x10,0x10,0x00},/*"k",75*/
	{0x00,0x00,0x20,0x20,0x20,0xE0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00},/*"l",76*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xFC,0xFC,0x08,0x04,0xFC,0xFC,0x08,0x04,0xFC,0xFC,0x00,0x10,0x1F,0x1F,0x10,0x00,0x1F,0x1F,0x10,0x00,0x1F,0x1F,0x10},/*"m",77*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xFC,0xFC,0x08,0x08,0x04,0x04,0xFC,0xF8,0x00,0x00,0x00,0x10,0x1F,0x1F,0x10,0x00,0x00,0x10,0x1F,0x1F,0x10,0x00},/*"n",78*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF0,0x18,0x0C,0x04,0x04,0x0C,0x18,0xF0,0xE0,0x00,0x00,0x03,0x0F,0x0C,0x10,0x10,0x10,0x10,0x0C,0x0F,0x03,0x00},/*"o",79*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xFC,0xFC,0x08,0x04,0x04,0x04,0x0C,0xF8,0xF0,0x00,0x00,0x80,0xFF,0xFF,0x88,0x90,0x10,0x10,0x1C,0x0F,0x03,0x00},/*"p",80*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xF8,0x1C,0x04,0x04,0x04,0x08,0xF8,0xFC,0x00,0x00,0x00,0x03,0x0F,0x18,0x10,0x10,0x90,0x88,0xFF,0xFF,0x80,0x00},/*"q",81*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0xFC,0xFC,0x10,0x08,0x04,0x04,0x0C,0x0C,0x00,0x10,0x10,0x10,0x1F,0x1F,0x10,0x10,0x10,0x00,0x00,0x00,0x00},/*"r",82*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x78,0xCC,0xC4,0x84,0x84,0x84,0x0C,0x1C,0x00,0x00,0x00,0x1E,0x18,0x10,0x10,0x10,0x11,0x19,0x0F,0x06,0x00},/*"s",83*/
	{0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0xFF,0xFF,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x1F,0x10,0x10,0x10,0x0C,0x00,0x00},/*"t",84*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xFC,0xFE,0x00,0x00,0x00,0x04,0xFC,0xFE,0x00,0x00,0x00,0x00,0x0F,0x1F,0x18,0x10,0x10,0x08,0x1F,0x0F,0x08,0x00},/*"u",85*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x0C,0x3C,0xFC,0xC4,0x00,0x00,0xC4,0x3C,0x0C,0x04,0x00,0x00,0x00,0x00,0x01,0x0F,0x1E,0x0E,0x01,0x00,0x00,0x00},/*"v",86*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x3C,0xFC,0xC4,0x00,0xE4,0x7C,0xFC,0x84,0x80,0x7C,0x04,0x00,0x00,0x07,0x1F,0x07,0x00,0x00,0x07,0x1F,0x07,0x00,0x00},/*"w",87*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x1C,0x7C,0xE4,0xC0,0x34,0x1C,0x04,0x04,0x00,0x00,0x10,0x10,0x1C,0x16,0x01,0x13,0x1F,0x1C,0x18,0x10,0x00},/*"x",88*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x0C,0x3C,0xFC,0xC4,0x00,0xC4,0x3C,0x04,0x04,0x00,0x00,0x00,0xC0,0x80,0xC1,0x37,0x0E,0x01,0x00,0x00,0x00,0x00},/*"y",89*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x04,0x04,0xC4,0xF4,0x7C,0x1C,0x04,0x00,0x00,0x00,0x00,0x10,0x1C,0x1F,0x17,0x11,0x10,0x10,0x18,0x0E,0x00},/*"z",90*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x0C,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x28,0xEF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x60,0x40,0x00,0x00},/*"{",91*/
	{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},/*"|",92*/
	{0x00,0x00,0x04,0x0C,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEF,0x28,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x60,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"}",93*/
	{0x00,0x18,0x06,0x02,0x02,0x04,0x08,0x10,0x20,0x20,0x30,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"~",94*/
};
#endif
