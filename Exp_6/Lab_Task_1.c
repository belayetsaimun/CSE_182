#include<stdio.h>
int main()
{
    int array[15];
    char i;

    printf("Enter name:");
    for(i=0; i<15; ++i)
    {

        scanf("%c",&array[i]);
    }
    printf("\nDisplaying name:");
    for(i=0; i<15; ++i)
    {
        printf("%c",array[i]);
    }
}


