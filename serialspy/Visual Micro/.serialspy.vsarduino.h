//Board = Arduino Duemilanove w/ ATmega328
#define __AVR_ATmega328P__
#define ARDUINO 105
#define F_CPU 16000000L
#define __AVR__
extern "C" void __cxa_pure_virtual() {;}

//
//
String getValue(String data, char separator, int index);
void parseCommand(String line);
void parse_command_line(String line);
void parseLine(String line);
void parse_status_line(String line);
void parse_state_line(String myBuffer);
void FUNC_init_screen(void);
void FUNC_information(void);
void FUNC_timer_info(void);
void FUNC_p2(void);

#include "C:\Users\c5125630\Dropbox\arduino-1.0.5\hardware\arduino\variants\standard\pins_arduino.h" 
#include "C:\Users\c5125630\Dropbox\arduino-1.0.5\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Users\c5125630\Dropbox\GitHub\XStepperLCD\serialspy\serialspy.ino"
#include "C:\Users\c5125630\Dropbox\GitHub\XStepperLCD\serialspy\MENU_FUNCTION.ino"
