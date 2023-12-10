#include <stdio.h>

int main() {
    double radius;

    // Input the radius of the sphere
    scanf("%lf", &radius);

    // Calculate the volume of the sphere
    double volume = (4.0 / 3.0) * 3.14159 * (radius * radius * radius);

    // Output the result with 3 digits after the decimal point
    printf("VOLUME = %.3f\n", volume);

    return 0;
}
