#include <stdio.h>

 int main() { 
 	int guess;
 	int OutOfGuess = 0;
 	int countOfGuess = 0;
 	int LimitOfGuess = 3;
	int SecretNumber = 5;
	while (guess != SecretNumber && OutOfGuess == 0) {
	if (countOfGuess < LimitOfGuess) {
		printf("Enter the secret number: ");
		scanf("%d", &guess);
		countOfGuess++;
	} else {
		OutOfGuess = 1;
	}
	}if (OutOfGuess == 1) {
		printf("You are out of guesses.\n");
	} else {
		printf("You are the winner!\n");
	} return 0;
 }
											             OutOfGuess =  }
