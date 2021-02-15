// List the libraries necessary for the pico
#include <stdio.h>//standard input output library
#include "pico/stdlib.h"//pico input output library
#include "hardware/gpio.h"//pico hardware library
#include "pico/binary_info.h"// binary viewing library
#include "string.h"// string operaations library
/*
Project Description: This is the beginning of a code running in C/C++ on the rapsberry pi pico
*/

// this function returns the morse code signal
char morse_code (char text[]) {
	int len = strlen(text);// get the length of the string
	char signal[]; // declare a string of the signal
	char chrtr[]; //declare a string of the character
	char command[]; // declare a command string
	int cmnd_len; // declera a command string

	// loop throught the text and make a vector
	for (int i = 0; i <= len; i++ ){
		chrtr = text[i]; //character in the text

		//encode the signal into binary strings
		switch (chrtr){
			case 'A' :
				command = '10111000';
                        case 'a' :
                                command = '10111000';
                        case 'B' :
                                command = '111010101000';
                        case 'b' :
                                command = '111010101000';
                        case 'C' :
                                command = '11101011101000';
                        case 'c' :
                                command = '111010101000';
                        case 'D' :
                                command = '1110101000';
                        case 'd' :
                                command = '1110101000';
			case 'E' :
				command = '1000';
                        case 'e' :
                                command = '1000';
			case 'F' :
				command = '101011101000;
                        case 'f' :
                                command = '101011101000;
			case 'G' :
				command = '111011101000';
			case 'g' :
				command = '111011101000'
			case 'H' :
				command = '1010101000';
			case 'h' :
				command = '1010101000';
			case 'I' :
				command = '101000';
			case 'i' :
				command = '101000';
			case 'J' :
				command = '1011101110111000';
			case 'j' :
				command = '1011101110111000';
			case 'K' :
				command = '111010111000';
			case 'k' :
				command = '111010111000';
			case 'L' :
				command = '101110101000';
			case 'l' :
				command = '101110101000';
			case 'M' :
				command = '1110111000';
			case 'm' :
				command = '1110111000';
			case 'N' :
				command = '11101000';
			case 'n' :
				command = '11101000';
			case 'O' :
				command = '11101110111000';
			case 'o' :
				command = '11101110111000';
			case 'P' :
				command = '10111011101000';
			case 'p' :
				command = '10111011101000';
			case 'Q' :
				command = '1110111010111000';
			case 'q' :
				command = '1110111010111000';
			case 'R' :
				command = '1011101000';
			case 'r' :
				command = '1011101000';
			case 'S' :
				command = '10101000';
			case 's' :
				command = '10101000';
			case 'T' :
				command = '111000';
			case 't' :
				command = '111000';
			case 'U' :
				command = '1010111000';
			case 'u' :
				command = '1010111000';
			case 'V' :
				command = '101010111000';
			case 'v' :
				command = '101010111000';
			case 'W' :
				command = '101110111000';
			case 'w' :
				command = '101110111000';
			case 'X' :
				command = '11101010111000';
			case 'x' :
				command = '11101010111000';
			case 'Y' :
				command = '1110101110111000';
			case 'y' :
				command = '1110101110111000';
			case 'Z' :
				command = '11101110101000';
			case 'z' :
				command = '11101110101000';
			case '0' :
				command = '1110111011101110111000';
			case '1' :
				command = '10111011101110111000';
			case '2' :
				command = '101011101110111000';
			case '3' :
				command = '1010101110111000;
			case '4' :
				command = '10101010111000';
			case '5' :
				command = '101010101000';
			case '6' :
				command = '11101010101000';
			case '7' :
				command = '1110111010101000';
			case '8' :
				command = '111011101110101000';
			case '9' :
				command = '11101110111011101000';
			case '.' :
				command = '10111010111010111000';
			case ',' :
				command = '1110111010101110111000';
			case '?' :
				command = '101011101110101000';
			case '\'' :
				command = '1011101110111011101000';
			case '!' :
				command = '1110101110101110111000';
			case '/' :
				command = '1110101011101000';
			case '(' :
				command = '1110101011101000';
			case ')' :
				command = '1110101110111010111000';
			case '&' :
				command = '10111010101000';
			case ':' :
				command = '11101110111010101000';
			case ';' :
				command = '11101011101011101000';
			case '=' :
				command = '1110101010111000';
			case '+' :
				command = '1011101011101000';
			case '-' :
				command = '111010101010111000';
			case '_' :
				command = '10101110111010111000';
			case '"' :
				command = '101110101011101000';
			case '$' :
				command = '10101011101010111000';
			case '@' :
				command = '10111011101011101000';
			case ' ' :
				command = '0000';
			default  :
				command = '101010101010101000';
		// measure the length of the command
		cmnd_len = strlen(command);

		//add the command to the signal
		strncat(signal, command, cmnd_len);
		}
	return signal;
	}
}


// The main part of the code
int main() {
	//intialize the input output libraries for the pico
	stdio_init_all();

	//define the output pins. Note, these pins are the GP number not on the board
	const uint LED_PIN = 25;
	// hint: look up what 792 is in Pophams signal telegraph
	const uint PIN_10 = 7, PIN_12 = 9, PIN_4 = 2;

	// test the led and the binary to check debugging
        bi_decl(bi_program_description ("This is a test binary."));
        bi_decl(bi_1pin_with_name(LED_PIN, "On-board LED"));
        bi_decl(bi_1pin_with_name(PIN_10, "Level-1"));
        bi_decl(bi_1pin_with_name(PIN_12, "Level-2"));
        bi_decl(bi_1pin_with_name(PIN_4, "Level-3"));

	// intialize the LED pins on the pico
	gpio_init(LED_PIN);
	gpio_init(PIN_10);
	gpio_init(PIN_12);
	gpio_init(PIN_4);

	// set the GPIO directions
	gpio_set_dir(LED_PIN, GPIO_OUT);
	gpio_set_dir(PIN_10, GPIO_OUT);
	gpio_set_dir(PIN_12, GPIO_OUT);
	gpio_set_dir(PIN_4, GPIO_OUT);

	// initialize the level of the game
	int level = 0;

	// While loop for the system to excute. 1 indicates the bool true
	while (1) {
		if (level == 0) {  // level 1
			gpio_put(LED_PIN, 1); // turn on LED
			sleep_ms(100); // sleep for 0.1s
			gpio_put(LED_PIN, 0); //turn ongpio_put(PIN_10, 0); // turn off pin 10
                        
			sleep_ms(100); // sleep for 0.1s

                        gpio_put(PIN_10, 1); // turn off pin 10
                        sleep_ms(100); // sleep for 0.1s
                        gpio_put(PIN_10, 0); //turn ongpio_put(PIN_10, 0); // t$
                        sleep_ms(100); // sleep for 0.1s

		} else if (level == 1){  // level 2
			gpio_put(PIN_10, 0); // turn off pin 10
                        sleep_ms(100); // sleep for 0.1s
                        gpio_put(PIN_10, 1); //turn on pin 10
                        sleep_ms(100); // slep for 0.1s

		} else {  // level 3
			gpio_put(PIN_10, 0); // turn off pin 10
                        sleep_ms(100); // sleep for 0.1s
                        gpio_put(PIN_10, 1); //turn on pin 10
                        sleep_ms(100); // slep for 0.1s
		}
	}
}
