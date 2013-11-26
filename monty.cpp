#include "Monty-hall.h"

int main() {

	double counter = 0;

	for (int i = 0; i < 10000; i++) {

		monty m;
		m.preguess();
		m.reveal();
		counter += m.reguess();

	}

	cout << counter / 10000 << endl;
	counter = 0;

	for (int i = 0; i < 10000; i++) {

		monty m;
		m.preguess();
		m.reveal();
		counter += m.stay();

	}

	cout << counter / 10000 << endl;

}