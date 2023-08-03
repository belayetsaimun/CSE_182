#include<stdio.h>
int main()
{
    int a,b,c,d,e,r;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    e=a*b;
    r=b%a;
    while(r!=0)
    {
        b=a;
        a=r;
        r=b%a;
    }
    d=e/a;
    printf("LCM of two numbers is %d",d);
}
