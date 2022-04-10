/*
 *  Created on: 15/05/2019
 *      Author: User_1
 */
#include"DIO.h"
#include"types.h"
#include"BIT_MATH.h"
#include"delay.h"
#include "registers.h"
#include"DIO_int.h"
#include"lcd_cfg.h"
#include"lcd.h"
//#ifndef F_CPU
//#define F_CPU 12000000
u8 Keypad_u8GetswNO(void);
int main()
{
u8 flag;
DIO_SetPortDirection (PORTC,0x0f);
DIO_SetPortValue (PORTC,0xf0);
u16 Arsani,Amr,Hassan,Shadi,Shahd,Lourin,Mazen,Mohamed,attendance,counter;
u8 lcd[30];
Shadi=1;
while (1)
{

switch(flag){
case 1: {if (Amr==1)
	{ lcd[30]='Amr Checked';
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	if (Amr==0)
	{ lcd[30]="Amr Unchecked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	break;}

case 2:{if (Arsani==1)
	{ lcd[30]="Arsani Checked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	if (Arsani==0)
	{ lcd[30]="Arsani Unchecked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	break;}

case 3:{if (Hassan==1)
	{ lcd[30]="Hassan Checked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	if (Hassan==0)
	{ lcd[30]="Hassan Unchecked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	break;}

case 4:{ if(Shadi==1)
	{ lcd[30]="Shadi Checked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	if (Shadi==0)
	{ lcd[30]="Shadi Unchecked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	break;}

case 5: {if (Shahd==1)
	{ lcd[30]="Shahd Checked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	if (Shahd==0)
	{ lcd[30]="Shahd Unchecked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	break;}

case 6: {if (Lourin==1)
	{ lcd[30]="Lourin Checked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	if (Lourin==0)
	{ lcd[30]="Lourin Unchecked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	break;}

case 7:{if (Mazen==1)
	{ lcd[30]="Mazen Checked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	if (Mazen==0)
	{ lcd[30]="Mazen Unchecked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	break;}

case 8:{if (Mohamed==1)
	{ lcd[30]="Mohamed Checked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	if (Mohamed==0)
	{ lcd[30]="Mohamed Unchecked";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	break;}

case 9: {if (attendance==1)
	{lcd[30]="attendance= ";
	lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	lcd[30]=counter;
    lcd_write_string (lcd);
	_delay_ms(1000);
	lcd_write_command(1);
	}
	break;}
	}
}
return 0;
}

u8 Keypad_u8GetswNO(void){
	u8 c,r;
	u8 PINValueNo=0;
	for (c=0;c<3;c++){
	     DIO_SetPinValue(PORTC,c,LOW);
	     for (r=0;r<3;r++)
	     {
	    	 if(DIO_GetPinValue(PORTC,r+5)==0)
	    	 {
	    		 PINValueNo=((r*3)+c)+1;
	    		// while(DIO_GetPinValue(PORTC,r+5)==0);
	    	 }
	     }
	     DIO_SetPinValue(PORTC,c,HIGH);
	}
	return PINValueNo;
}


