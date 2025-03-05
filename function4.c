#include <stdio.h>

float area(int r) {
    float pie = 3.14;
    float ans = pie * r * r; // 'ans' should be a float to store the area
    return ans;
}

int main() {
    int rad;
    float ar;

    printf("Enter radius: ");
    scanf("%d", &rad);

    ar = area(rad); // Function call
    printf("Answer is %f\n", ar);

    return 0;
}
