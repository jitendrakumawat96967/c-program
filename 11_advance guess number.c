#include <stdio.h>
int main() {
    int n;
    printf("Guess the number between(1-10) :\n ");
    while(1){
        scanf("%d",&n);
     if(n==9)
     {
        printf("\nyou gussed it right");
        break;
     }
     else{
        printf("\nworng guess, try again : ");
     }
    }

    return 0;
}
