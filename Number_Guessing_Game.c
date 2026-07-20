// number_guessing_game.c
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>   

int main() {

    int secretNumber; 
    int guess;        
    int attempts = 0; 

       srand(time(NULL));

    secretNumber = (rand() % 10) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a number between 1 and 100. Try to guess it.\n");

   do {
        printf("Enter your guess: ");
        
        scanf("%d", &guess);
        attempts++; 

       
        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCongratulations! You guessed the number %d in %d attempts.\n", secretNumber, attempts);
        }
    } while (guess != secretNumber); 
    return 0; 
}
