#include <stdio.h>

int main() {
    float centimeter, meter, kilometer;

    printf("Enter the length in centimeters: ");
    scanf("%f", &centimeter);

    meter = centimeter / 100;
    kilometer = centimeter / 100000;

    printf("Length in meters: %f\n", meter);
    printf("Length in kilometers: %f\n", kilometer);

    return 0;
}
