#include"DIO.h"
#include"lcd_cfg.h"
#include"types.h"
#include"lcd.h"
#include"BIT_MATH.h"
#include"DIO_int.h"
//#define F_CPU 12000000
#include"delay.h"
#include "registers.h"
int main()
{
lcd_init();
while (1) {
u16 Arsani,Amr,Hassan,Shady,Shahd,Lourin,Mazen,Mohamed,attendance;
u16 Arsanit,Amrt,Hassant,Shadyt,Shahdt,Lourint,Mazent,Mohamedt,counter,undef;
u8 lcd[30];
//if undef tag passed:
if (undef==1)
{ lcd[30]="undef id";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Arsani tag
if (Arsanit==1)
{ lcd[30]="Arsani";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Aersani keypad
if (Arsani==1)
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
//Amr tag
if (Amrt==1)
{ lcd[30]="Amr";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Amr keypad
if (Amr==1)
{ lcd[30]="Amr Checked";
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
//Hassan tag
if (Hassant==1)
{ lcd[30]="Hassan";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Hassan keypad
if (Hassan==1)
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
//Shady tag
if (Shadyt==1)
{ lcd[30]="Shady";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Shady keypad
if (Shady==1)
{ lcd[30]="Shady Checked";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
if (Shady==0)
{ lcd[30]="Shady Unchecked";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Shahd tag
if (Shahdt==1)
{ lcd[30]="Shahd";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Shahd keypad
if (Shahd==1)
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
//Lourin tag
if (Lourint==1)
{ lcd[30]="Lourin";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Lourin keypad
if (Lourin==1)
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
//Mohamed tag
if (Mohamedt==1)
{ lcd[30]="Mohamed";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Mohamed keypad
if (Mohamed==1)
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
//Mazen tag
if (Mazent==1)
{ lcd[30]="Mazen";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
}
//Mazen keypad
if (Mazen==1)
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
//attendance
if (attendance==1)
{lcd[30]="attendance= ";
lcd_write_string (lcd);
_delay_ms(1000);
lcd_write_command(1);
lcd_write_data (counter);
_delay_ms(1000);
lcd_write_command(1);
}
}
return 0;
}
