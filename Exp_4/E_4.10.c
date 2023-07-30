#include<stdio.h>
int main()
{
    int i,num,sum=1;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum*i;
    }
    printf("Factorial is %d",sum);
}
