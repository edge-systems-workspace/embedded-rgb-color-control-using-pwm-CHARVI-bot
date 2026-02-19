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
void setup(){
    pinMode(red,OUTPUT);
    pinMode(green,OUtPUT);
    pinMode(blue,OUTPUT);
}
/**
 * @brief Run the LED demo loop: digital blink and PWM color cycle.
 *
 * @details
 * First toggles the red LED using digitalWrite with 1 second intervals.
 * Then cycles full-brightness red, green, and blue using analogWrite (PWM),
 * each shown for 1 second. A short pause separates cycles.
 *
 * @return void
 */
//White
void loop(){
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(green, HIGH);
    delay(1000);
}
//Red
void loop(){
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    delay(1000);
}
//Blue
void loop(){
    digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
    delay(1000);
}
//Green
void loop(){
    digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
    delay(1000);
}
//Red & Blue combination
void loop(){
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
    delay(1000);
}
//Blue & Green combination
void loop(){
    digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(green, HIGH);
    delay(1000);
}
//Red & Green combination
void loop(){
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
    delay(1000);
}
