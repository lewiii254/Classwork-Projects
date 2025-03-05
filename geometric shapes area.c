#include <stdio.h>
#include <math.h>

// Function prototypes
float calculateCircleArea(float radius);
float calculateRectangleArea(float length, float width);
float calculateSquareArea(float side);
float calculateTriangleArea(float base, float height);

int main() {
    int choice;
    float area;

    printf("Calculate the area of different geometric shapes:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("4. Triangle\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = calculateCircleArea(radius);
            printf("The area of the circle is: %.2f\n", area);
            break;
        }
        case 2: {
            float length, width;
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = calculateRectangleArea(length, width);
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        }
        case 3: {
            float side;
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = calculateSquareArea(side);
            printf("The area of the square is: %.2f\n", area);
            break;
        }
        case 4: {
            float base, height;
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = calculateTriangleArea(base, height);
            printf("The area of the triangle is: %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice. Please select a number between 1 and 4.\n");
    }

    return 0;
}

// Function definitions
float calculateCircleArea(float radius) {
    return M_PI * radius * radius; // Area = pr²
}

float calculateRectangleArea(float length, float width) {
    return length * width; // Area = length * width
}

float calculateSquareArea(float side) {
    return side * side; // Area = side²
}

float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height; // Area = 0.5 * base * height
}
