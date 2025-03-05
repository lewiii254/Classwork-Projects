#include <stdio.h>

int main() {
    int x, y;
    float ans;
    char sign;

    printf("Enter Number: ");
    scanf("%d", &x);
    printf("Enter 2nd Number: ");
    scanf("%d", &y);
    
    // Consume the newline character left by the previous scanf
    getchar(); // This line consumes the newline character
    printf("Enter sign: ");
    scanf("%c", &sign);

    switch(sign) {
        case '+': ans = x + y; break;
        case '-': ans = x - y; break;
        case '*': ans = x * y; break;
        case '/': 
            if (y != 0) {
                ans = (float)x / y; // Cast to float for accurate division
            } else {
                printf("Error: Division by zero.\n");
                return 1; // Exit the program on error
            }
            break;
        default: 
            printf("Error: Invalid operator.\n");
            return 1; // Exit the program on error
    }

    printf("Answer: %f\n", ans);
    return 0;
}
