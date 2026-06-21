//Simple dice rolling simulation game - TS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printDice(int n){
    switch(n){
        case 1:
            printf("+-------+\n");
            printf("|       |\n");
            printf("|   *   |\n");
            printf("|       |\n");
            printf("+-------+\n");
            break;
        case 2:
            printf("+-------+\n");
            printf("|*      |\n");
            printf("|       |\n");
            printf("|      *|\n");
            printf("+-------+\n");
            break;
        case 3:
            printf("+-------+\n");
            printf("|*      |\n");
            printf("|   *   |\n");
            printf("|      *|\n");
            printf("+-------+\n");
            break;
        case 4:
            printf("+-------+\n");
            printf("|*     *|\n");
            printf("|       |\n");
            printf("|*     *|\n");
            printf("+-------+\n");
            break;
        case 5:
            printf("+-------+\n");
            printf("|*     *|\n");
            printf("|   *   |\n");
            printf("|*     *|\n");
            printf("+-------+\n");
            break;
        case 6:
            printf("+-------+\n");
            printf("|*     *|\n");
            printf("|*     *|\n");
            printf("|*     *|\n");
            printf("+-------+\n");
            break;
        default:
            break;
    }
}

int main(){
    char choice;
    int roll;
    int points = 0;

    srand(time(0)); // Seed the random number generator

    printf("Welcome to the Dice Roller Simulator!\n");
    printf("\n");
    printf("Press R to roll the dice! \n");
    printf("Press P to check your points! \n");
    printf("Press Q to quit the game! \n");
    printf("\n");
    printf("Let's begin!\n");
    
    while(1){
        printf("\nEnter your choice (R/P/Q): ");
        scanf(" %c", &choice);

        if (choice == 'R' || choice == 'r') {
            roll = rand() % 6 + 1; // Roll a dice (1-6)
            printf("You rolled a %d!\n", roll);
            printDice(roll);
            
            if (roll == 6) {
                points ++; // Award points for rolling a 6
                printf("Congrats! You earned 1 point!\n");
            }
        }
        else if (choice == 'P' || choice == 'p') {
            printf("You have %d points.\n", points);
        }
        else if (choice == 'Q' || choice == 'q') {
            printf("Thanks for playing! You earned %d points.\n", points);
            break;
        }
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;

}
//End of program