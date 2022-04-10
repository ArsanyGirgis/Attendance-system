/*
 * lcd.h
 *
 *  Created on: Aug 31, 2018
 *      Author: Medhat
 */

#ifndef LCD_H_
#include"types.h"
#define LCD_H_
void lcd_write_data(u8 data);
void lcd_write_command(u8 command);
void lcd_init(void);
void lcd_write_string(u8 arr[]);
void lcd_write_number(u64 x);
void lcd_set_position(u8 row, u8 col);
#endif /* LCD_H_ */
