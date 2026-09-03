#include <stdio.h>
int main() {
    float x;
    printf("Enter float number :");
    scanf("%f",&x);
    int integerPart=(int)x;
    printf("integerPart=%d\n",integerPart);
    float FractionalPart= x-(int)x;
    printf("Fractional Part=%.2f",FractionalPart);
    return 0;
}
