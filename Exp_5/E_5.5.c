#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a positive number\n");
    scanf("%d",&n);
    for(j=2; j<=n; j++)
    {
        for(i=2; i<=j; i++)
        {

            if(j%i==0)
                break;
        }

        if(j==i)
            printf("%d ",i);
    }
}
