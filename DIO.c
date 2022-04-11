/*
 * DIO.c
 *
 *  Created on: Aug 18, 2018
 *      Author: Medhat
 */

#include "types.h"
#include "registers.h"
#include "macros.h"
#include"DIO.h"

void DIO_setportdirection(u8 port,u8 direction)
{
	switch(port)
	{
	case 0:
	{
		DDRA = direction;
		break;
	}
	case 1:
	{
		DDRB = direction;
		break;
	}

	case 2:
	{
		DDRC = direction;
		break;
	}
	case 3:
	{
		DDRD = direction;
		break;
	}

	}
}
void DIO_setportvalue(u8 port, u8 value)
{
	switch(port)
	{
	case 0:
	{
		PORTA = value;
		break;
	}
	case 1:
	{
		PORTB = value;
		break;
	}
	case 2:
	{
		PORTC = value;
		break;
	}
	case 3:
	{
		PORTD = value;
		break;
	}

	}

}
void DIO_setpindirection(u8 port, u8 pin, u8 direction)
{
	switch(port)
	{
	case 0:

		if(direction == 1)
		{
			set_bit(DDRA,pin);
		}
		else if(direction == 0)
		{
			clear_bit(DDRA,pin);
		}
		break;

	case 1:

		if(direction == 1)
		{
			set_bit(DDRB,pin);
		}
		else if(direction == 0)
		{
			clear_bit(DDRB,pin);
		}
		break;


	case 2:

		if(direction == 1)
		{
			set_bit(DDRC,pin);
		}
		else if(direction == 0)
		{
			clear_bit(DDRC,pin);
		}
		break;


	case 3:

		if(direction == 1)
		{
			set_bit(DDRD,pin);
		}
		else if(direction == 0)
		{
			clear_bit(DDRD,pin);
		}
		break;

	}
}
void DIO_setpinvalue(u8 port, u8 pin, u8 value)
{
	switch (port)
	{
	case 0:
			if (value == 1)
		{
			set_bit(PORTA ,pin);
		}
		else if (value == 0 )
		{
			clear_bit(PORTA,pin);
		}
		break;
	case 1:
				if (value == 1)
			{
				set_bit(PORTB ,pin);
			}
			else if (value == 0 )
			{
				clear_bit(PORTB,pin);
			}
			break;
	case 2:
				if (value == 1)
			{
				set_bit(PORTC ,pin);
			}
			else if (value == 0 )
			{
				clear_bit(PORTC,pin);
			}
			break;
	case 3:
				if (value == 1)
			{
				set_bit(PORTD,pin);
			}
			else if (value == 0 )
			{
				clear_bit(PORTD,pin);
			}
			break;

	}
}
u8 DIO_readport(u8 port)
{
	u8 value;
	switch (port)
	{
	case 0:
		value = PINA;
		break;
	case 1:
		value = PINB;
		break;
	case 2:
		value = PINC;
		break;
	case 3:
		value = PIND;
		break;

	}
	return value;
}
u8 DIO_readpin(u8 port, u8 pin)
{
	u8 value;
	switch(port)
	{
	case 0:
		value = get_bit(PINA, pin);
		break;
	case 1:
		value = get_bit(PINB, pin);
		break;
	case 2:
		value = get_bit(PINC,pin);
		break;
	case 3:
		value = get_bit(PIND,pin);
		break;
	}
	return value;
}
