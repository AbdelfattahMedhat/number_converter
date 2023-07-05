#include "Registers.h"
#include "Utils.h"
#include "STDTYPES.h"


u8 sev_seg_Display_hex(u8 n)
{
	unsigned char seven_segment[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0X07,0x7F,0x6F,0x77,0x7C,0x58,0x5E,0x79,0x71};
	return seven_segment[n];
	
}