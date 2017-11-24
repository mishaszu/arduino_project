# Arduino Projects
Working with basic Arduino sensors, modules and elements

1) [Potentiometer wiki page](https://github.com/mishaszu/arduino_project/wiki/01-Potentiometer)
2) RGB led
3) Buzzer
4) Wet sensor
5) Photo resistor
6) Temperature & humidity sensor
7) Joystick with leds
8) Distance sensor
9) Movment sensor
10) Dump sensor
11) Keypad
12) Seven segment display
13) 8x8 LED panel
14) Micro servo
15) Step motor
16) Flame sensor
17) RTC module
18) RFID module
19) Infrared receiver
20) Infrared pilot
21) Bluetooth (HM10) module
22) Slider recorder chip
23) Bluetooth HID module
24) 2x16 LCD display with I2C
25) Relay module
26) Arduino gamepad shell
27) TFT SPI LCD
28) WiFi module
29) Pressure sensor (barometer)
30) Logic converter
31) OLED display
32) SD card reader
33) Programing ATMEGA328P-PU
34) Programing ATMEGA8-16PU

## HOW TO
### 1
Every project based on Platform IO.
To run project install it first from [Official website](http://docs.platformio.org/en/latest/installation.html)

### 2
By default projects are configured for Arduino Uno.
To add your board you need to configure it first.
1) find your board from platformio list:
```
pio boards
```
2) add your board configuration
```
pio init -b [yourboard]
```

### 3
To install libraries download to the "lib" directory.
To install libraries from this repo type:
```
git submodule init
```
To update libraries from this repo:
```
git submodule update
```

### 4
To upload your code on board:
```
pio run --target upload
```
To start serial monitor:
```
pio device monitor
```

### 5
Checkout section wiki page


## 1 Potentiometer
[Potentiometer wiki page](https://github.com/mishaszu/arduino_project/wiki/01-Potentiometer)
Compontents:
- Arduino Uno
- Potentiometer
- Bread board
- Wire cables
- **LED** red LED
- **LED** yellow LED
- **LED** green LED
- **LED** 3x220om resistor
