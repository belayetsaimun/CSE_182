#include<stdio.h>

void main()
{
    int a, b, max;

    printf("Enter Two numbers: \n");

    scanf("%d %d",&a, &b);

    max = (a>b)? (printf("Max = %d", a)): (printf("Max = %d",b));

}
