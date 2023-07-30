#include<stdio.h>
int main()
{
    int i=0,num;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        i++;
    }
    printf("Digit=%d",i);

}




