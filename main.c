#define F_CPU 8000000
#include <util/delay.h>
#include "STDTYPES.h"
#include "LCD_interface.h"
#include "DIO_Interface.h"
#include "KeyPAd_interface.h"
#include "number_conv_interface.h"
#include "Utils.h"



int main(void)
{
	DIO_Init();
	LCD_init();
	keypad_init();
	number_conv_init();
	u8 num=0;
	while (1)
	{
	   LCD_Clear();
	   LCD_SetCursor(FIRST,1);
	   LCD_writestring("convert from");
	   LCD_SetCursor(SECOND,0);
	   LCD_writestring("1.DEC 2.HEX 3.BIN");
	   while(1)
	   {
		  num=keypad_getnumber();
		  if(num>0 && num<=OPERATION_NUM)
		  {
			  LCD_Clear();
			  Get_Operation(num);
		
			  break;
		  }
	   }
	  
     }
}
