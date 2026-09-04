
#include <stdio.h>
int main() {
    int num;
    int secret = 9;   

    printf("Guess the number between 1-10 (0 to exit):\n");

    while(1) {
        scanf("%d", &num);

        if(num == 0) {
            printf("Game exited!\n");
            break;
        } else if(num == secret) {
            printf("You guessed it right!\n");
            break;
        } else if(num < secret) {
            printf("Too low, try again:\n");
        } else {
            printf("Too high, try again:\n");
        }
    }

    return 0;
}
