#include <stdio.h>

int main() {
    float length = 4.0,width = 2.0; // Pre-defined length
    float area, perimeter;

    area = length * width;
    perimeter = 2 * (length + width);

    printf("The area of the rectangle is: %f\n", area);
    printf("The perimeter of the rectangle is: %f\n", perimeter);

    return 0;
}
