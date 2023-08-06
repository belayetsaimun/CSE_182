#include<stdio.h>
int main()
{
    char ch;
    int a,b;
    printf("Enter an operator (+,-,*,/)\n");
    scanf("%c",&ch);
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
    case '+':
    {
        printf("Addition=%d",a+b);
        break;
    }
    case '-':
    {
        printf("Subtraction=%d",a-b);
        break;
    }
    case '*':
    {
        printf("Multiplication=%d",a*b);
        break;
    }
    case '/':
    {
        printf("Division=%d",a/b);
        break;
    }
    default:
        printf("Invalid operator\n");
    }
}
