//
//  main.c
//  LCD Test
//
//  Created by Jan Babicky on 10/06/14.
//  Copyright (c) 2014 Jan Babicky. All rights reserved.
//

#include <stdio.h>
#include <avr/delay.h>

int pin;

void main ()
{
    DDRA = 0x00;
    PORTA = 0x00;
    
    
    while(0)
    {
        PINA1 = 0xFF;
        _delay_ms(500);
        PINA1 = 0x00;
        _delay_mx(500);
    }
}
