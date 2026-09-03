#include <stdio.h>

int main() {
float principal,rate,time,si;

printf("principal : ");
scanf("%f",&principal);
printf("rate : ");
scanf("%f",&rate);
printf("time : ");
scanf("%f",&time);
 si=(principal*rate*time)/100;
printf("simple interest : %f",si);

    return 0;
}
