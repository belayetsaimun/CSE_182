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
    printf("\nNegative elements of the array are : \n");
    for(i=0; i<n; i++)
    {
        if(array[i]<0)
            printf("%d",array[i]);
        printf("\n");
    }

}
