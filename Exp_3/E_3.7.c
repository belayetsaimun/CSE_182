#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, x, y;
    printf("Enter the value of a,b,c\n");
    scanf("%f%f%f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d >= 0)
    {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("%.2fx^2 + %.2fx + %.2f roots are %.2f and %.2f", a, b, c, x, y);
    }
    else
    {
        printf("%.2fx^2 + %.2fx + %.2f this euation have imaginary roots", a, b, c);
    }

}
