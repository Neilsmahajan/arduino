# 01 - Blink LED

Blink the onboard LED on the Arduino Uno R3 using:

- `blink.ino`: High-level Arduino sketch
- `blink.cpp`: Low-level AVR C++ using registers (`<avr/io.h>` and `_delay_ms`)

### Hardware

- Arduino Uno R3 (Elegoo Super Starter Kit)

### Instructions

- Use `arduino-cli` to compile and upload `ino/blink.ino`
- Or compile `cpp/blink.cpp` using avr-gcc and flash via avrdude (optional)
