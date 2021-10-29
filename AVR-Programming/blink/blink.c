#define F_CPU 16000000UL // CPU frequency

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  // -------- Inits --------- //
  DDRB |= (1 << PB5);           /* Data Direction Register B:
                                   writing a one to the bit
                                   enables output. */
  // ------ Event loop ------ //
  while (1) {
    PORTB = 0b00100000;          /* Turn on 4th  bit/pin in PORTB */
    _delay_ms(1000);                                           /* wait */
    PORTB = 0b00000000;          /* Turn off all B pins, including LED */
    _delay_ms(1000);                                           /* wait */
  }                                                  /* End event loop */
  return (0);
}