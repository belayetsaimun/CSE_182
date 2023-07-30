#include<stdio.h>
int main()
{
    int num,r,r1;
    printf("Enter the number\n");
    scanf("%d",&num);
    r=num%10;
    while(num!=0)
    {
        r1=num%10;
        num=num/10;


    }
    printf("First and last digit is %d and %d",r1,r);
}
