
// List the libraries necessary for the pico
#include <stdio.h>//standard input output library
#include "pico/stdlib.h"//pico input output library
#include "hardware/gpio.h"//pico hardware library
#include "pico/binary_info.h"// binary viewing library
#include "string.h"// string operaations library
#include <stdlib.h>
#include <time.h> // include the time library

/*
Project Description: This is the beginning of a code running in C/C++ on the rapsberry pi pico
*/

char *morse_code (char text[]) {// retrun a pointer to the code
        char mcsignal[10000] = "1110101110101110000000"; // declare a string of the signal
        char command[30]; // declare a command string
        char* p;// make a pointer to the string character
        int i = 0; // declare an index

	int clen;// length of the code
	int len = strlen(text); // length  of the text
	int siglen; // length of the singal
        // loop throught the text and make a vector
        for (i = 0; i < len; i++ ){
                //encode the signal into binary string
                if (text[i] == 'A'){
                                strcpy(command, "10111000");
                } else  if (text[i] == 'a'){
                                strcpy(command, "10111000");
                } else  if (text[i] == 'B'){
                                strcpy(command, "111010101000");
                } else  if (text[i] == 'b'){
                                strcpy(command, "111010101000");
                } else  if (text[i] == 'C'){
                                strcpy(command, "11101011101000");
                } else  if (text[i] == 'c'){
                                strcpy(command, "11101011101000");
                } else  if (text[i] == 'D'){
                                strcpy(command, "1110101000");
                } else  if (text[i] == 'd'){
                                strcpy(command, "1110101000");
                } else  if (text[i] == 'E'){
                                strcpy(command, "1000");
                } else  if (text[i] == 'e'){
                                strcpy(command, "1000");
                } else  if (text[i] == 'F'){
                                strcpy(command, "101011101000");
                } else  if (text[i] == 'f'){
                                strcpy(command, "101011101000");
                } else  if (text[i] == 'G'){
                                strcpy(command, "111011101000");
                } else  if (text[i] == 'g'){
                                strcpy(command, "111011101000");
                } else  if (text[i] == 'H'){
                                strcpy(command, "1010101000");
                } else  if (text[i] == 'h'){
                                strcpy(command, "1010101000");
                } else  if (text[i] == 'I'){
                                strcpy(command, "101000");
                } else  if (text[i] == 'i'){
                                strcpy(command, "101000");
                } else  if (text[i] == 'J'){
                                strcpy(command, "1011101110111000");
                } else  if (text[i] == 'j'){
                                strcpy(command, "1011101110111000");
                } else  if (text[i] == 'K'){
                                strcpy(command, "111010111000");
                } else  if (text[i] == 'k'){
                                strcpy(command, "111010111000");
                } else  if (text[i] == 'L'){
                                strcpy(command, "101110101000");
                } else  if (text[i] == 'l'){
                                strcpy(command, "101110101000");
                } else  if (text[i] == 'M'){
                                strcpy(command, "1110111000");
                } else  if (text[i] == 'm'){
                                strcpy(command, "1110111000");
                } else  if (text[i] == 'N'){
                                strcpy(command, "11101000");
                } else  if (text[i] == 'n'){
                                strcpy(command, "11101000");
                } else  if (text[i] == 'O'){
                                strcpy(command, "11101110111000");
                } else  if (text[i] == 'o'){
                                strcpy(command, "11101110111000");
                } else  if (text[i] == 'P'){
                                strcpy(command, "10111011101000");
                } else  if (text[i] == 'p'){
                                strcpy(command, "10111011101000");
                } else  if (text[i] == 'Q'){
                                strcpy(command, "1110111010111000");
                } else  if (text[i] == 'q'){
                                strcpy(command, "1110111010111000");
                } else  if (text[i] == 'R'){
                                strcpy(command, "1011101000");
                } else  if (text[i] == 'r'){
                                strcpy(command, "1011101000");
                } else  if (text[i] == 'S'){
                                strcpy(command, "10101000");
                } else  if (text[i] == 's'){
                                strcpy(command, "10101000");
                } else  if (text[i] == 'T'){
                                strcpy(command, "111000");
                } else  if (text[i] == 't'){
                                strcpy(command, "111000");
                } else  if (text[i] == 'U'){
                                strcpy(command, "1010111000");
                } else  if (text[i] == 'u'){
                                strcpy(command, "1010111000");
                } else  if (text[i] == 'V'){
                                strcpy(command, "101010111000");
                } else  if (text[i] == 'v'){
                                strcpy(command, "101010111000");
                } else  if (text[i] == 'W'){
                                strcpy(command, "101110111000");
                } else  if (text[i] == 'w'){
                                strcpy(command, "101110111000");
                } else  if (text[i] == 'X'){
                                strcpy(command, "11101010111000");
                } else  if (text[i] == 'x'){
                                strcpy(command, "11101010111000");
                } else  if (text[i] == 'Y'){
                                strcpy(command, "1110101110111000");
                } else  if (text[i] == 'y'){
                                strcpy(command, "1110101110111000");
                } else  if (text[i] == 'Z'){
                                strcpy(command, "11101110101000");
                } else  if (text[i] == 'z'){
                                strcpy(command, "11101110101000");
                } else  if (text[i] == '0'){
                                strcpy(command, "1110111011101110111000");
                } else  if (text[i] == '1'){
                                strcpy(command, "10111011101110111000");
                } else  if (text[i] == '2'){
                                strcpy(command, "101011101110111000");
                } else  if (text[i] == '3'){
                                strcpy(command, "1010101110111000");
                } else  if (text[i] == '4'){
                                strcpy(command, "10101010111000");
                } else  if (text[i] == '5'){
                                strcpy(command, "101010101000");
                } else  if (text[i] == '6'){
                                strcpy(command, "11101010101000");
                } else  if (text[i] == '7'){
                                strcpy(command, "1110111010101000");
                } else  if (text[i] == '8'){
                                strcpy(command, "111011101110101000");
                } else  if (text[i] == '9'){
                                strcpy(command, "11101110111011101000");
                } else  if (text[i] == '.'){
                                strcpy(command, "10111010111010111000");
                } else  if (text[i] == ','){
                                strcpy(command, "1110111010101110111000");
                } else  if (text[i] == '?'){
                                strcpy(command, "101011101110101000");
                } else  if (text[i] == '\''){
                                strcpy(command, "1011101110111011101000");
                } else  if (text[i] == '!'){
                                strcpy(command, "1110101110101110111000");
                } else  if (text[i] == '/'){
                                strcpy(command, "1110101011101000");
                } else  if (text[i] == '('){
                                strcpy(command, "1110101011101000");
                } else  if (text[i] == ')'){
                                strcpy(command, "1110101110111010111000");
                } else  if (text[i] == '&'){
                                strcpy(command, "10111010101000");
                } else  if (text[i] == ':'){
                                strcpy(command, "11101110111010101000");
                } else  if (text[i] == ';'){
                                strcpy(command, "11101011101011101000");
                } else  if (text[i] == '='){
                                strcpy(command, "1110101010111000");
                } else  if (text[i] == '+'){
                                strcpy(command, "1011101011101000");
                } else  if (text[i] == '-'){
                                strcpy(command, "111010101010111000");
                } else  if (text[i] == '_'){
                                strcpy(command, "10101110111010111000");
                } else  if (text[i] == '"'){
                                strcpy(command, "101110101011101000");
                } else  if (text[i] == '$'){
                                strcpy(command, "10101011101010111000");
                } else  if (text[i] == '@'){
                                strcpy(command, "10111011101011101000");
                } else  if (text[i] == ' '){
                                strcpy(command, "0000");
                } else {
                                strcpy(command, "101010101010101000");

                //add the command to the signal
                 // test print the command
                }
		clen = strlen(command);
		strncat(mcsignal, command, clen);
        }
        char *code = malloc(strlen(mcsignal));
        strcpy(code,mcsignal);
        return code;
}


// The main part of the code
int main() {
	//intialize the input output libraries for the pico
	stdio_init_all();

	//define the output pins. Note, these pins are the GP number not on the board
	const uint LED_PIN = 25;
	// hint: look up what 792 is in Pophams signal telegraph
	const uint PIN_10 = 7, PIN_12 = 9, PIN_4 = 2, PIN_14 = 10, PIN_34 = 28, PIN_24 = 18;

	// test the led and the binary to check debugging
        bi_decl(bi_program_description ("This is a test binary."));
        bi_decl(bi_1pin_with_name(LED_PIN, "On-board LED"));
        bi_decl(bi_1pin_with_name(PIN_10, "Level-1"));
        bi_decl(bi_1pin_with_name(PIN_12, "Level-2"));
        bi_decl(bi_1pin_with_name(PIN_4, "Level-3"));
	bi_decl(bi_1pin_with_name(PIN_14, "In-1"));
	bi_decl(bi_1pin_with_name(PIN_34, "In-2"));
	bi_decl(bi_1pin_with_name(PIN_24, "In-3"));

	// intialize the LED pins on the pico
	gpio_init(LED_PIN);
	gpio_init(PIN_10);
	gpio_init(PIN_12);
	gpio_init(PIN_4);
	gpio_init(PIN_14);
	gpio_init(PIN_34);
	gpio_init(PIN_24);

	// set the GPIO directions
	gpio_set_dir(LED_PIN, GPIO_OUT);
	gpio_set_dir(PIN_10, GPIO_OUT);
	gpio_set_dir(PIN_12, GPIO_OUT);
	gpio_set_dir(PIN_4, GPIO_OUT);
	gpio_set_dir(PIN_14, GPIO_IN);
	gpio_set_dir(PIN_34, GPIO_IN);
	gpio_set_dir(PIN_24, GPIO_IN);

	// initialize the level of the game
	int level = 0;
	char *h;

	double old, now , diff;// used for measuring the timestaps
	old =  time_us_32(); // measure the time at the beginning of the code

	double oldc, nowc, diffc; // use these for measuring the signal

	int timestep = 1; // tmistemp of the morse code signal
	char signal[10000]; // return the character of the signal
	char value;

	int i; //declare and indexicng variable

	//give the instruction
	sleep_ms(2000); // wait to connect to minicom
	printf("Start listening to pin number 10.\n");

	// While loop for the system to excute. 1 indicates the bool true
	while (1) {
		if (level == 0) {
			h = morse_code("DE Oli. Next? Power pin 14. Nelson says: England expects pin 12.");
			strcpy(signal,h);
			free(h);
			i = 0;
			while (i <= strlen(signal)) {
				now =  time_us_32();
				nowc = now;
				diff = (double)(now - old)/1000;
				diffc = (double)(nowc -oldc)/1000;
				if (diffc > timestep){
					i = i + 1;
					oldc = time_us_32();
				}
				if (signal[i] == '0') {
					gpio_put(PIN_10, 0);
				} else {
					gpio_put(PIN_10, 1);
				}
				if (diff > 1000) {
					gpio_put(LED_PIN, 1);
					old = time_us_32();
				} else if (diff > 100) {
					gpio_put(LED_PIN, 0);
				} else {
					gpio_put(LED_PIN, 1);
				}
				if (gpio_get(PIN_14)) {
					level = 1;
					gpio_put(PIN_10 ,1);
					i = strlen(signal) + 1;
				}
	               	}
                } else if (level == 1) {
                        h = morse_code("2762 1863 630 15 9 13 34 1542 2220 15 9 13 4 46 K");
			/*
			Do you understand? Then power p i n number 34. Go for dispatches at pin number 4 Africa 
			*/
                        strcpy(signal,h);
                        free(h);
                        i = 0;
                        while (i <= strlen(signal)) {
                                now =  time_us_32();
                                nowc = now;
                                diff = (double)(now - old)/1000;
                                diffc = (double)(nowc -oldc)/1000;
                                if (diffc > timestep){
                                        i = i + 1;
                                        oldc = time_us_32();
                                }
                                if (signal[i] == '0') {
                                        gpio_put(PIN_12, 0);
                                } else {
                                        gpio_put(PIN_12, 1);
                                }
                                if (diff > 1000) {
                                        gpio_put(LED_PIN, 1);
                                        old = time_us_32();
				} else if (diff > 300) {
					gpio_put(LED_PIN,0);
				} else if (diff > 200) {
					gpio_put(LED_PIN,1);
                                } else if (diff > 100) {
                                        gpio_put(LED_PIN, 0);
                                } else {
                                        gpio_put(LED_PIN, 1);
                                }
				if (gpio_get(PIN_34 )) {
					gpio_put(PIN_12, 1);
                                        level = 2;
					i = strlen(signal) + 1;
                                }
                        }
                } else if (level == 2) {
                        h = morse_code("22 5 10 1 18 19 9 19 1 10 22 1 13 1 19 2 1 24 9 24 K");
			/* W e k a s t i m a k w a n a m b a r i 24 */
                        strcpy(signal,h);
                        free(h);
                        i = 0;
                        while (i <= strlen(signal)) {
                                now =  time_us_32();
                                nowc = now;
                                diff = (double)(now - old)/1000;
                                diffc = (double)(nowc -oldc)/1000;
                                if (diffc > timestep){
                                        i = i + 1;
                                        oldc = time_us_32();
                                }
                                if (signal[i] == '0') {
                                        gpio_put(PIN_4, 0);
                                } else {
                                        gpio_put(PIN_4, 1);
                                }
                                if (diff > 1000) {
                                        gpio_put(LED_PIN, 1);
                                        old = time_us_32();
				} else if (diff > 500) {
                                        gpio_put(LED_PIN, 0);
				} else if (diff > 400) {
                                        gpio_put(LED_PIN, 1);
				} else if (diff > 300) {
                                        gpio_put(LED_PIN, 0);
				} else if (diff > 200) {
                                        gpio_put(LED_PIN, 1);
                                } else if (diff > 100) {
                                        gpio_put(LED_PIN, 0);
                                } else {
                                        gpio_put(LED_PIN, 1);
                                }
				if (gpio_get(PIN_24)) {
                                        level = 3;
					gpio_put(PIN_4,1);
					i = strlen(signal) + 1;

                                }
                        }
                } else {
			printf("f314657a25bd7b87d4de264fa99722b600f7676d30be79d6bcc1fc82ae407f9a"); // insert hash here.
			oldc = time_us_32();
			old = oldc;
			while (1) {
                                now =  time_us_32();
                                nowc = now;
                                diff = (double)(now - old)/1000;
                                diffc = (double)(nowc -oldc)/1000;
                                if (diff > 200) {
                                        gpio_put(LED_PIN,1);
					oldc = time_us_32();
					old = oldc;
                                } else if (diff > 100) {
                                        gpio_put(LED_PIN, 0);
                                } else {
                                        gpio_put(LED_PIN, 1);
                                }
                        }
		}
	}
}
