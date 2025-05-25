#include <stdio.h>

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference using direct value of PI
    area = 3.14159 * radius * radius;       // Formula: πr²
    circumference = 2 * 3.14159 * radius;   // Formula: 2πr

    // Display results
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}