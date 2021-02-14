// List the libraries necessary for the pico
#include <stdio.h>//standard input output library
#include "pico/stdlib.h"//pico input output library
#include "hardware/gpio.h"//pico hardware library
#include "pico/binary_info.h"// binary viewing library

/*
Project Description: This is the beginning of a code running in C/C++ on the rapsberry pi pico
*/

//define the output pins. Note, these pins are the GP number not on the board
const uint LED_PIN = 25;
// hint: look up what 792 is in Pophams signal telegraph
const uint PIN_10 = 7;
const uint PIN_12 = 9;
const uint PIN_4 = 2;


// The main part of the code
int main() {
	// test the led and the binary to check debugging
	bi_decl(bi_program_description ("This is a test binary."));
	bi_decl(bi_1pin_with_name(LED_PIN, "On-board LED"));
	bi_decl(bi_1pin_with_name(PIN_10, "Level-1"));
	bi_decl(bi_1pin_with_name(PIN_12, "Level-2"));
	bi_decl(bi_1pin_with_name(PIN_4, "Level-3"));

	//intialize the input output libraries for the pico
	stdio_init_all();

	//initialize the gpio library
	gpio_init_all();

	// intialize the LED pins on the pico
	gpio_init(LED_PIN);

	// initialize the level of the game
	int level = 0;

	// While loop for the system to excute. 1 indicates the bool true
	while (1) {
		gpio_put(LED_PIN, 0); // turn off the led
		sleep_ms(100); // sleep for 0.1s
		gpio_put(LED_PIN, 1);
		sleep_ms(100); // slep for 0.1s
	}
}
