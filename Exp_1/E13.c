#include <stdio.h>
#include <math.h>

int main() {
    float base = 8.0; // Pre-defined base length
    float height = 3.0; // Pre-defined height
    float area, perimeter;

    area = 0.5 * base * height;
    perimeter = base + height + sqrt(base*base + height*height);

    printf("The area of the triangle is: %f\n", area);
    printf("The perimeter of the triangle is: %f\n", perimeter);

    return 0;
}
