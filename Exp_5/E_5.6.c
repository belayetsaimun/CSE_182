#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter a positive number\n");
    scanf("%d",&n);
    for(j=2; j<=n; j++)
    {
        for(i=2; i<j; i++)
        {
            if(j%i==0)
                break;
        }

        if(i==j)
        {

            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nSum of all prime numbers is %d",sum);

}
