#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    unsigned int upper, lower;
    printf("Lower bound: ");
    if (scanf("%u", &lower) != 1){
        printf("Format error. Terminating program\n");
        return 1;
    }

    printf("Upper bound: ");
    if (scanf("%u", &upper) != 1){
        printf("Format error. Terminating program\n");
        return 1;
    }
    srand(time(NULL));
    unsigned int target = rand() % (upper - lower + 1) + lower;
    unsigned int guess;
    int numGuesses = 0;
    do{
        do{
            printf("Enter your guess: ");
        } while(scanf("%u", &guess) != 1);
        if (guess > target)
            printf("Lower\n");
        else if (guess < target)
            printf("Higher\n");
        numGuesses++;
        
        printf("You have made %d guesses so far\n", numGuesses);
    } while(guess != target);
    printf("You win! It took you %d guesses\n", numGuesses);
    return 0;


}