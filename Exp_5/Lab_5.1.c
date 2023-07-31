#include <stdio.h>
int main()
{
    int n, z, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    z=n;
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    if(z==rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");




}
