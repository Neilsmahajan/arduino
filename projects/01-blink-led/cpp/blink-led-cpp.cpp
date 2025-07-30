#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // Set pin 13 PORTB5 as output
    DDRB |= (1 << DDB5);

    while (1) {
        // Turn on the LED
        PORTB |= (1 << PORTB5);
        _delay_ms(500);

        // Turn off the LED
        PORTB &= ~(1 << PORTB5);
        _delay_ms(3000);
    }
}
