#include<stdio.h>
int main()
{
    int r,num,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num!=0)

    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;

    }
    printf("Inverse is %d",sum);
}
