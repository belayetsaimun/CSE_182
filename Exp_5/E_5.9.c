#include<stdio.h>
int main()
{
    int n,i,a=-1,b=1,c;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

}
