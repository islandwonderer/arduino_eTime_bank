/* Time Bank
 *  This is a software to use in conjunction with an Arduino
 *  build of hardware. The purpose of the software is to allow 
 *  a child to record time spent in set ativities and exange the
 *  acumulated time for electronics usage time.
 *  Software and Hardware Configuration by Gabriel & Ramses Ruiz
*/

// Imported Libraries
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SPI.h>

// LCD Settings
#define I2C_ADDR    0x27  
#define BACKLIGHT_PIN 3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7
LiquidCrystal_I2C lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,
                      D6_pin,D7_pin,BACKLIGHT_PIN, POSITIVE);

// Alarm Settings
const int buzzer = 13;

// Buttons Settings
#define button_1  2
#define button_2  3  
#define button_3  4  
#define button_4  5  
#define button_5  6  
#define button_6  7  
#define button_7  8  
#define button_8  9  
#define button_9  10 

#define array_list_size 9

int button_list[array_list_size] = {button_1,button_2,button_3,
                                    button_4,button_5,button_6,
                                    button_7,button_8,button_9};

// Time and Time Multipliers
int avail_time = 0;
const unsigned long bounce_interval = 50;
const unsigned int min_interval = 60000;
const int read_multiplier = 1;
const int code_multiplier = 2;
const int yard_multiplier = 3;
const int cook_multiplier = 1;
const int math_multiplier = 3;
const int clean_multiplier = 2;
const int other_multiplier = 1;
