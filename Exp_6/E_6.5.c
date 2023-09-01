#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Reverse elements of the array:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",array[i]);
        printf("\n");
    }
}
