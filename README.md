# 🔌 Arduino Project Playground

A comprehensive collection of Arduino projects for the **Elegoo Uno R3 Super Starter Kit**. Each project demonstrates both high-level Arduino programming and low-level AVR microcontroller programming techniques.

## 🚀 Project Overview

This repository showcases Arduino projects with dual implementations:

- **🟦 Arduino IDE Sketches** (`.ino`) - High-level, beginner-friendly code using Arduino functions
- **🟨 AVR C/C++** (`.cpp`) - Low-level register manipulation using `avr/io.h` for deeper hardware understanding

## �️ Development Environment

- **Toolchain:** [arduino-cli](https://arduino.github.io/arduino-cli) for command-line compilation and uploading
- **Board:** Arduino Uno R3 (ATmega328P microcontroller)
- **IDE:** Arduino IDE or VS Code with Arduino extensions
- **Hardware:** Elegoo Uno R3 Super Starter Kit

## 🎨 Circuit Diagrams

All circuit diagrams are professionally created using **[Fritzing](https://fritzing.org/)** and include:

- **`.fzz` files** - Editable Fritzing project files for circuit modification
- **`.png` exports** - High-quality breadboard view images for quick reference
- **Component layouts** - Clear visual representation of wiring and connections

Each project's `diagram/` folder contains both the source Fritzing file and the exported breadboard image.

## � Repository Structure

```
arduino/
├── README.md                    # This file
├── .gitignore                   # Git ignore rules
├── tools/                       # Build scripts and utilities
├── shared/                      # Common libraries and components
└── projects/                    # Individual project folders
    └── 01-blink-led/            # LED blinking project
        ├── README.md            # Project-specific documentation
        ├── ino/                 # Arduino sketch implementation
        │   └── blink-led-ino.ino
        ├── cpp/                 # AVR C++ implementation
        │   ├── blink-led-cpp.cpp    # Pure C++ source
        │   └── blink-led-cpp.ino    # Arduino-compatible wrapper
        └── diagram/             # Circuit diagrams
            ├── blink-led-breadboard.fzz    # Fritzing project
            └── blink-led-breadboard.png    # Breadboard view
```

## 🏗️ Getting Started

### Prerequisites

```bash
# Install arduino-cli
brew install arduino-cli

# Initialize and install core
arduino-cli core update-index
arduino-cli core install arduino:avr
```

### Compilation & Upload

```bash
# Navigate to project directory
cd projects/01-blink-led/ino/

# Compile and upload Arduino sketch
arduino-cli compile --fqbn arduino:avr:uno blink-led-ino.ino
arduino-cli upload -p /dev/cu.usbmodem* --fqbn arduino:avr:uno blink-led-ino.ino
```

## 📚 Learning Objectives

- **Arduino Programming:** Master high-level Arduino functions and libraries
- **AVR Programming:** Understand low-level microcontroller register manipulation
- **Circuit Design:** Learn electronic circuit construction and troubleshooting
- **Hardware Interfacing:** Connect sensors, actuators, and displays
- **Embedded Systems:** Develop real-time embedded applications

## � Project List

| Project                                | Description                         | Arduino | AVR C++ | Circuit |
| -------------------------------------- | ----------------------------------- | ------- | ------- | ------- |
| [01-blink-led](projects/01-blink-led/) | Basic LED blinking with onboard LED | ✅      | ✅      | ✅      |

## 🤝 Contributing

Feel free to explore, fork, and contribute! If you have suggestions for improvements or new project ideas, please open an issue or submit a pull request.

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

## �📫 Contact

- **Name:** Neil Mahajan
- **Email:** neilsmahajan@gmail.com
- **Website:** [neilsmahajan.com](https://neilsmahajan.com)
- **GitHub:** [@Neilsmahajan](https://github.com/Neilsmahajan)
