#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]%2==0)
            even++;
            else
            odd++;
    }
    printf("\nTotal Even=%d and total odd=%d",even,odd);
}

