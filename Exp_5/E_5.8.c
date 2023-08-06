#include<stdio.h>
int main()
{
    int n,sum=0,r,z,f,i;
    printf("Enter an integer\n");
    scanf("%d",&n);
    z=n;
    while(z!=0)
    {
        r=z%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        z=z/10;
    }
    if(sum==n)
        printf("%d is a strong number",n);
    else
        printf("%d is not a strong number",n);
}
