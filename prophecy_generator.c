//A magical prophecy generator based on the element and number you enter! Enjoy! - TS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void giveProphecy(char element, int num) {
    element = toupper(element);

    switch (element) {
        case 'A': // AIR
            if (num == 1)
                printf("A mysterious breeze will fix your hair for 0.5 seconds. Enjoy it.\n");
            else if (num == 2)
                printf("You will float through the day like a confused balloon.\n");
            else
                printf("A random idea will hit you today. It will be useless but entertaining.\n");
            break;

        case 'E': // EARTH
            if (num == 1)
                printf("You will trip over absolutely nothing. The ground is testing you.\n");
            else if (num == 2)
                printf("A magical snack will restore your energy today.\n");
            else
                printf("You will feel sleepy for no reason. Earth energy is hugging you.\n");
            break;

        case 'F': // FIRE
            if (num == 1)
                printf("Your inner flame will burn bright… mostly because someone will annoy you.\n");
            else if (num == 2)
                printf("You will gain +10 charisma when angry. Use wisely.\n");
            else
                printf("A spark of inspiration will appear. Try not to set anything on fire.\n");
            break;

        case 'W': // WATER
            if (num == 1)
                printf("Your emotions will be dramatic but aesthetic. Very main-character.\n");
            else if (num == 2)
                printf("A wave of motivation will hit you… then leave immediately.\n");
            else
                printf("You will vibe like a calm river until someone irritates you.\n");
            break;

        default:
            printf("Invalid element! Retry!\n");
    }
}

int main() {
    char element, choice;
    int num;

    printf("✨ Welcome to the Magical Prophecy Generator! ✨\n");

    while (1) {   // LOOP STARTS HERE

        printf("\nChoose your element (A=Air, E=Earth, F=Fire, W=Water): ");
        scanf(" %c", &element);

        printf("Enter a number (1/2/3): ");
        scanf("%d", &num);

        printf("\n🔮 Your Prophecy is:\n");
        giveProphecy(element, num);

        printf("\nPress P to receive another prophecy or Q to exit: ");
        scanf(" %c", &choice);

        if (choice == 'Q' || choice == 'q') {
            printf("\nGoodbye! May the stars guide you! 🌟\n");
            break;   // EXIT LOOP
        }
        else if (choice == 'P' || choice == 'p') {
            continue; // REPEAT LOOP
        }
        else {
            printf("Invalid choice! Exiting the program.\n");
            break;
        }
    }

    return 0;
}
//End of program
