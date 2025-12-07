// // 
// #include <stdio.h>

// int main() {
//     float a, b, c;

//     // Input sides
//     printf("Enter the three sides of a triangle:\n");
//     scanf("%f %f %f", &a, &b, &c);

//     // Check triangle validity
//     if (a + b > c && b + c > a && c + a > b) {
//         // Determine type of triangle
//         if (a == b && b == c) {
//             printf("The triangle is Equilateral.\n");
//         } else if (a == b || b == c || c == a) {
//             printf("The triangle is Isosceles.\n");
//         } else {
//             printf("The triangle is Scalene.\n");
//         }
//     } else {
//         printf("The triangle is NOT valid.\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    float a, b, c;

    // Input sides
    printf("Enter the three sides of a triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity
    if (a + b > c && b + c > a && c + a > b) {
        // Determine type of triangle
        if (a== b == c==a) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || c == a) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}