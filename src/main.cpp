#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author CHARVI
 * @date 2026-01-16
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

int red=9;
int green=10;
int blue=11;
/**
 * @brief Initialize serial communication and configure LED pins.
 *
 * @details
 * Starts the hardware Serial at 9600 baud and sets the RGB pins as OUTPUT.
 * Prints an initialization message to the serial console.
 *
 * @return void
 */
