#ifndef MICROMOUSE_PINS_2023_H
#define MICROMOUSE_PINS_2023_H

// LEDS
#define YELLOW_LED 5  // LED0
#define BLUE_LED 6    // LED1
#define GREEN_LED 10  // LED2
#define RED_LED 11    // LED3

#define DEBUG_LED 13  // The LED on the teensy board

// I2C BUSES
#define I2C_LIDAR Wire2
#define I2C_GYRO Wire1

// LIDAR /CS PINS
#define LIDAR_CS1 28
#define LIDAR_CS2 26
#define LIDAR_CS3 27
#define LIDAR_CS4 8
#define LIDAR_CS5 7
#define LIDAR_CS6 9

#define SONIC_TRIG1 40
#define SONIC_TRIG2 38
#define SONIC_TRIG3 36
#define SONIC_ECHO1 41 
#define SONIC_ECHO2 39
#define SONIC_ECHO3 37

#define ENCODER_LEFT_1 22
#define ENCODER_LEFT_2 23
#define ENCODER_RIGHT_1 1
#define ENCODER_RIGHT_2 2

#define MOTORLEFT_1 3
#define MOTORLEFT_2 19
#define MOTORRIGHT_1 18
#define MOTORRIGHT_2 4

#define START_BUTTON SONIC_ECHO3
#endif

