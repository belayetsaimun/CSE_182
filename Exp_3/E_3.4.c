#include<stdio.h>
int main()
{
    int a;
    printf("Enter a year\n");
    scanf("%d",&a);
    if(a%400==0  &&  a%4==0)
    {
        printf("Leap Year");

    }
    else if(a%100==0)
    {
        printf("Not leap year");
    }
    else
    {
        printf("Not leap year");
    }

}
