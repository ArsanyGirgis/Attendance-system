/*
 * macros.h
 *
 *  Created on: Aug 11, 2018
 *      Author: Medhat
 */

#ifndef MACROS_H_
#define MACROS_H_
#define 	set_bit(data,bit_no) 	data|=1<<bit_no
#define 	clear_bit(data, bit_no)	data&=~(1<<bit_no)
#define 	toggle_bit(data,bit_no) data^= 1<<bit_no
#define 	get_bit(data,bit_no) 	(data>>bit_no)&1
#endif /* MACROS_H_ */
