#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h>
#include <time.h>

int main() {
	time_t tnow;
	struct tm* t;
	int milk = 0; 
	bool avocado = false;

	// Will there be avocados?
	time(&tnow);
	t = (struct tm*) localtime(&tnow);

	int num = (t->tm_sec)+1;

	if ((num % 2) == 1) {
		avocado = true;
	}


	
	//Get a carton of milk
	milk++; 
	

	//Are there avocados?
	if (avocado == true) {
		milk = 6; 

	}
	
	printf("Honey! I bought milk! \n\n"); 

	if (avocado == true) {
		printf("They had avocados! So I bought SIX cartons of milk :) \n\n ");
	}
	else {
		printf("There were no avocados. So I bought A carton of milk :) \n\n");
	}

	return 0;

}