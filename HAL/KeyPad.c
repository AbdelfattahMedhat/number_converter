#include "STDTYPES.h"
#include "DIO_Interface.h"
#include "LCD_interface.h"
#include "KeyPAd_interface.h"

extern const u8 KeypadCols[];
extern const u8 KeypadRows[];
extern const u8 keypadChar[][COLUMNS];

void keypad_init(void)
{
	for(u8 i=0;i<ROWS;i++)
	{
		DIO_WritePin(KeypadRows[i],HIGH);
	}
}
u8 keypad_getnumber(void)
{
	u8 i,j,character=NO_KEY;
	for(i=0;i<ROWS;i++)
	{
		DIO_WritePin(KeypadRows[i],LOW);
		for(j=0;j<COLUMNS;j++)
		{
			if(DIO_ReadPin(KeypadCols[j])==LOW)
			{
				character=keypadChar[i][j];
				while(DIO_ReadPin(KeypadCols[j])==LOW);
			}
		}
		DIO_WritePin(KeypadRows[i],HIGH);
	}
	return character;
}
