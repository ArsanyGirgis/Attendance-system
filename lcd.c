/*
 * lcd.c
 *
 *  Created on: Aug 31, 2018
 *  Updated on: March 2019
 *      Author: Medhat
 */

#include "types.h"
#include "lcd.h"
#include "lcd_cfg.h"
#include "DIO.h"
#include <delay.h>
#include "lcd_cfg.h"

void lcd_write_command (u8 command)
{

	DIO_setpinvalue(control_port,RW,0); //write operation
	DIO_setpinvalue(control_port,RS,0); // 0 for IR 1 for DR
	DIO_setpinvalue(control_port,EN,1); //to enable sending data we give a pulse
	DIO_setportvalue(lcd_port,command); //send command to LCD
	_delay_ms(5);
	DIO_setpinvalue(control_port,EN,0); 
	_delay_ms(5);
	DIO_setpinvalue(control_port,EN,1);
	_delay_ms(10);
}

void lcd_init(void)
{
	//TO WRITE DATA EVERY TIME

	/* Delay 100ms to ensure the initialization of the LCD driver */
 	 _delay_ms(100);

	DIO_setportdirection(lcd_port,255); //lcd port output

	DIO_setpindirection(control_port,RS,1); //register select, HIGH to send data

	DIO_setpindirection(control_port,RW,1); //RW HIGH to read from register

	DIO_setpindirection(control_port,EN,1); //EN high to send data

	//COMMANDS WE NEED EVERY TIME WE LAUNCH THE LCD

	_delay_ms(1);
	lcd_write_command(0b00111000); //set function --> 2line & 8 bit & 5*8
	_delay_ms(1);
	lcd_write_command(0b00001100); //disp on off and cursor
	_delay_ms(1);
	lcd_write_command(0b00000001); //clear display
}

void lcd_write_data (u8 data)
{

	DIO_setpinvalue(control_port,RW,0); //write on register
	DIO_setpinvalue(control_port,RS,1); //data register -- DR
	DIO_setpinvalue(control_port,EN,1); //to enable sending data we give a pulse
	DIO_setportvalue(lcd_port,data); //sends your data to the lcd port
	DIO_setpinvalue(control_port,EN,0); //en low
	_delay_ms(5);
	DIO_setpinvalue(control_port,EN,1); //en high to send new data
	_delay_ms(10);
}

void lcd_write_string(u8 arr[])
{
	u8 i = 0;
	while (arr[i]!='\0')
	{
		lcd_write_data(arr[i]);
		i++;
	}
}

void lcd_set_position(u8 row, u8 col)
{
	if(row==0)
	{
		lcd_write_command(128+col);
	}
	else if(row==1)
	{
		lcd_write_command(128+64+col);
	}
}

void lcd_write_number(u64 x)
{
	u64 reversednumber=1;
	if(x==0)
	{
		lcd_write_data('0');
	}
	while(x!=0)
	{
		reversednumber = reversednumber*10 + (x%10);
		x = x/10;
	}
	while(reversednumber !=1)
	{
		lcd_write_data((reversednumber%10)+48);
		reversednumber = reversednumber /10;
	}
}



