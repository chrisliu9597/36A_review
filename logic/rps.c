// rock paper scissors
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// using the time library and the randommizer

int main(){
    srand(time(NULL));
    printf("0 for rock\n1 for paper\n2 for scissors\n");
    int choice;
    if (scanf("%d", &choice) != 1){
        printf("Error reading input, terminating program\n");
        return 1;
    }
    int otherChoice = rand() % 3; // opponent makes their play
    if (choice > 3 || choice < 0){
        printf("Error reading input, terminating program\n");
        return 1;
    }
    char player[30];
    char opponent[30];
    strcpy(player, (choice == 1 ? "paper" : (choice == 0 ? "rock":"scissors")));
    strcpy(opponent, (otherChoice == 1 ? "paper" : (otherChoice == 0 ? "rock":"scissors")));
    printf("You played: %s\n", player); // prints out what you played
    printf("Opponent played: %s\n", opponent); // prints out what the opponent played

    if (otherChoice == choice){
        printf("Tie\n");
        return 0;
    }
    else if ((otherChoice == 1 && choice == 0) || 
    (otherChoice == 2 && choice == 1) || 
    (otherChoice == 0 && choice == 2)){
        printf("You lose\n");
    }  // the possible cases for when you lose
    else 
        printf("You win\n"); // otherwise, you win
    return 0;
}