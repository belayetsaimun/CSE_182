#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    int array1[n],array2[n];
    printf("Enter the array1 elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
       array2[i] =array1[i];
    }
    printf("Printing the elements of array2:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",array2[i]);
         printf("\n");
    }

}
