#include <stdio.h>

int main()

{

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("Leap year\n") : printf("Not a leap year\n");

    return 0;
}
