#include<stdio.h>
int main()
{
    int array[5],i;

    printf("Enter 5 integers:\n");
    for(i=0; i<5; ++i)
    {

        scanf("%d",&array[i]);
    }
    printf("Displaying integers:\n");
    for(i=0; i<5; ++i)
    {
        printf("%d\n",array[i]);
    }
}



