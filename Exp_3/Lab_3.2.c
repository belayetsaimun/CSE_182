#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value\n");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d is an even integer",num);

    }
    else
    {
        printf("%d is an odd integer",num);
    }
}
