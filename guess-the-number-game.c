//Guess the number game program - TS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;

    // generate a random number
    srand(time(0));
    secret = rand() % 100 + 1;  // number between 1 and 100

    printf("Hello! Welcome to my game!\n");
    printf("Guess a number between 1 and 100 : ");

    while (1) {
        scanf("%d", &guess);

        if (guess < 1 || guess > 100) {
            printf("Invalid! Enter between 1 and 100:\n");
        }
        else if (guess < secret) {
            printf("Too low! Try again:\n");
        }
        else if (guess > secret) {
            printf("Too high! Try again:\n");
        }
        else {
            printf("Correct! You guessed it!\n");
            break;
        }
    }

    return 0;
}
//End of program
