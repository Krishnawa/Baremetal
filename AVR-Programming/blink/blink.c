#define F_CPU 16000000UL // CPU frequency
#define LED_PIN 5 //Arduino BUILTIN_LED pin

#include <avr/io.h>
#include <util/delay.h>

void main(void)
{
	DDRB |= (1 << LED_PIN); // set pin as output
    while (1) // infinite loop
    {
		PORTB ^= (1 << LED_PIN); // toggles  pin		
		_delay_ms(100); // busy wait, 100ms
    }
}