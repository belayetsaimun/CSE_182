#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
        printf("The triangle is equilateral");
    else if (a=b || b==c || a==c)
        printf("The triangle is isosceles");
    else
        printf("The triangle is scalene");



}
