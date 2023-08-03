#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    r=b%a;
    while(r!=0)
    {
        b=a;
        a=r;
        r=b%a;
    }
    printf("HCF of two numbers is %d",a);
}
