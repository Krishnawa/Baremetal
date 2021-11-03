#define F_CPU 16000000UL // CPU frequency

#include <avr/io.h>
#include <util/delay.h>
int8_t state = 0b00100000;
int main(void) {
  // -------- Inits --------- //
  DDRB |= (1 << PB5);           /* Data Direction Register B:
                                   writing a one to the bit
                                   enables output. */
  // ------ Event loop ------ //
  while (1) {
    PORTB = state;          /* Turn on 4th  bit/pin in PORTB */
    _delay_ms(100);                                           /* wait */
    PORTB ^= (1<<5);          /* Turn off all B pins, including LED */
    _delay_ms(1000);                                           /* wait */
  }                                                  /* End event loop */
  return (0);
}