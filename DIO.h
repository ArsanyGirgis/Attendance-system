/*
 * DIO.h
 *
 *  Created on: Aug 18, 2018
 *      Author: Medhat
 */

#ifndef DIO_H_
#define DIO_H_
#include"types.h"

void DIO_setportdirection(u8 ,u8 );
void DIO_setportvalue(u8 , u8 );
void DIO_setpindirection(u8 , u8 , u8 );
void DIO_setpinvalue(u8 , u8 , u8 );
u8 DIO_readport(u8);
u8 DIO_readpin(u8 , u8 );
#endif /* DIO_H_ */
