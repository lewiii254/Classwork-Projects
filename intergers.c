#include <stdio.h>

// Function prototypes
int findMax(int arr[], int size);
int findMin(int arr[], int size);
float calculateAverage(int arr[], int size);

int main() {
    int size;

    // Ask the user for the number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &size);

    int arr[size];

    // Read the integers into the array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

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
    return (float)sum / size; // Cast to float for accurate average
}