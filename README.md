# Arduino Projects
Working with basic Arduino sensors, modules and elements

1) [Potentiometer wiki page](https://github.com/mishaszu/arduino_project/wiki/01-Potentiometer)
2) [RGB LED](https://github.com/mishaszu/arduino_projects/wiki/02-RGB-LED)
4) Buzzer
5) Wet sensor
6) Photo resistor
7) Temperature & humidity sensor
8) Joystick with leds
9) Distance sensor
10) Movment sensor
11) Dump sensor
12) Keypad
13) Seven segment display
14) 8x8 LED panel
15) Micro servo
16) Step motor
17) Flame sensor
18) RTC module
19) RFID module
20) Infrared receiver
21) Infrared pilot
22) Bluetooth (HM10) module
23) Slider recorder chip
24) Bluetooth HID module
25) 2x16 LCD display with I2C
26) Relay module
27) Arduino gamepad shell
28) TFT SPI LCD
29) WiFi module
30) Pressure sensor (barometer)
31) Logic converter
32) OLED display
33) SD card reader
34) Programing ATMEGA328P-PU
35) Programing ATMEGA8-16PU

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
