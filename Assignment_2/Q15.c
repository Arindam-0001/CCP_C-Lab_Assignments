// Checking a triangle is valid or not using angle
#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Input angles 
    printf("Enter three angles of a triangle:\n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    // Check validity
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}