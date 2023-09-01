#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Sum of array elements:\n");
    for(i=0; i<n; i++)
    {
        sum=sum+array[i];
    }
    printf("%d",sum);
}

