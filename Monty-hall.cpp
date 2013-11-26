#include "Monty-hall.h"


monty::monty() {

	car = rand() % 3;

	if (car == 0) {
		goat[0] = 1;
		goat[1] = 2; }
	else if (car == 1) {
		goat[0] = 0;
		goat[1] = 2; }
	else if (car == 2) {
		goat[0] = 0;
		goat[1] = 1; }

	
}

void monty::preguess() {

	guess = rand() % 3;

}

void monty::reveal() {

	// make sure it isn't the guess
	revealed = goat[rand() % 2];

	while (revealed == guess) {

		revealed = goat[rand() % 2];
		
	}

}

int monty::reguess() {

	// not the guess or the revealed

	if (guess != 0 && revealed != 0) { guess = 0; }
	else if (guess != 1 && revealed != 1) { guess = 1; }
	else if (guess != 2 && revealed != 2) { guess = 2; }
	else {cerr << "woops" << endl;}

	if (guess == car) {return 1;}
	else {return 0;}

}

int monty::stay() {

	if (guess == car) {return 1;}
	else {return 0;}

}

