
#include <stdio.h>

int main(void) {
	double initialSavings;
	double interestRate;
	double currentSavings;
	int i;

	printf("What are your initial savings?\n");
	printf("Initial savings: ");
	scanf_s("%lf", &initialSavings);

	printf("What is your interest rate?\n");
	printf("Interest rate: ");
	scanf_s("%lf", &interestRate);

	printf("\nAnnual savings for 10 years: \n");

	// set currentSavings to initialSavings
	currentSavings = initialSavings;
	// create for loop with an iteration for each year
	for (i = 0; i < 10; ++i) {
		printf("$%.2lf\n", currentSavings);
		currentSavings += (currentSavings * interestRate);
	}

	return 0;
}