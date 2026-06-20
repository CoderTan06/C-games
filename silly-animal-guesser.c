//A simple game that reveals what animal you are based on what color and number to enter! 
#include <stdio.h>

int main() {
    char a;
    int b;
    printf("Hello! Welcome to my game! \n");
    printf("Choose a color (R/B/G/Y) : ");
    scanf(" %c", &a);
    printf("Choose a number (1/2/3/4) : ");
    scanf("%d",&b);
    
    // Nested switch
    switch(a) {
        case 'R':
            switch(b){
                case 1 : printf("You are a Hyena! Haha!"); break;
                case 2 : printf("You are a Chinese Panda!"); break;
                case 3 : printf("You are a Macaw! Haha!"); break;
                case 4 : printf("You are a Goat! Haha!"); break;
                default : printf("Invalid number, retry!");
            }
            break;
        case 'B':
            switch(b){
                case 1 : printf("You are a Hippo! Haha!"); break;
                case 2 : printf("You are a Flamingo! Haha!"); break;
                case 3 : printf("You are a Sloth! Haha!"); break;
                case 4 : printf("You are a T-rex! Haha!"); break;
                default : printf("Invalid number, retry!");
            }
            break;
        case 'G':
            switch(b){
                case 1 : printf("You are a Stork! Haha!"); break;
                case 2 : printf("You are a Lizard! Haha!"); break;
                case 3 : printf("You are a Bear! Haha!"); break;
                case 4 : printf("You are a Snake! Haha!"); break;
                default : printf("Invalid number, retry!");
            }
            break;
        case 'Y':
            switch(b){
                case 1 : printf("You are a Jaguar! Haha!"); break;
                case 2 : printf("You are a Tiger! Haha!"); break;
                case 3 : printf("You are a Pelican! Haha!"); break;
                case 4 : printf("You are a Pigeon! Haha!"); break;
                default : printf("Invalid number, retry!");
            }
            break;
        default:
            printf("Invalid color!");
    }
    
    return 0;
}
//End of program
