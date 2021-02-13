// List the libraries necessary for the pico
#include <stdio.h>//standard input output library
#include "pico/stdlib.h"//pico input output library
#include "hardware/gpio.h"//pico hardware library
#include "pico/binary_info.h"// binary viewing library

/*
Project Description: This is the beginning of a code running in C/C++ on the rapsberry pi pico
*/

int main() {
	// test the led and the binary to check debugging
	bi_decl(bi_program_description ('This is a test binary."));
	bi_decl(bi_1pin_with_name(LED_PIN, "On-board LED"));

	//intialize the input output libraries for the pico
	stdio_init_all();

	//initialize the gpio library
	gpio_init_all();

	// intialize the LED pins on the pico
	gpio_init(LED_pin);

	// initialize the level of the game
	int level = 0;
	// While loop for the system to excute. 1 indicates the bool true
	while (1) {
		gpio_put(LED_PIN, 0); // turn off the led
		sleep_ms(
