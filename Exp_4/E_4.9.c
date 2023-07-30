#include<stdio.h>
int main()
{
    int i,num,r;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        r=num%i;
        if(r==0)
        {
            printf("% d",i);
        }

    }

}
