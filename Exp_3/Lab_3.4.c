#include<stdio.h>
int main()
{
    int num;
    printf("Enter your marks\n");
    scanf("%d",&num);
    if (num>=101)
    {
        printf ("%d is invalid",num);
    }
    else if (num>=80)
    {
        printf("%d is A+",num);
    }

    else if (num>=70)
    {
        printf("%d is A",num);

    }
    else if (num>=60)
    {

        printf("%d is A-",num);
    }
    else if(num>=50)
    {
        printf("%d is B",num);
    }
    else if (num>=40)
    {
        printf("%d is C",num);

    }
    else if(num>=30)
    {
        printf("%d is fail",num);

    }
 else
    {
        printf("%d is invalid",num);
    }

}
