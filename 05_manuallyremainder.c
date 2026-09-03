#include <stdio.h>
int main()
{
    int a,b;
    printf("value of a :");
    scanf("%d",&a);
    printf("value of b :");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(q*b);
    printf("quotient =%d\n",q);
    printf("remainder =%d\n",r);
    
    }
