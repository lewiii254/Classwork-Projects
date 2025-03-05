#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void readArray(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
float calculateAverage(int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size;

    // Read the size of the array
    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Check if size is within the limits
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // Read the array elements
    readArray(arr, size);

    // Find and display the maximum value
    int max = findMax(arr, size);
    printf("Maximum value: %d\n", max);

    // Find and display the minimum value
    int min = findMin(arr, size);
    printf("Minimum value: %d\n", min);

    // Calculate and display the average
    float average = calculateAverage(arr, size);
    printf("Average value: %.2f\n", average);

    return 0;
}

// Function to read array elements
void readArray(int arr[], int size) {
    printf("Enter %d integers:\n", size);
    int i; // Declare the loop variable here
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to find the maximum value in the array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum value in the array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to calculate the average of the array elements
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size; // Return the average
}
