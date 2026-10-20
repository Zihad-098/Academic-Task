#include <stdio.h>

// Function to perform binary search and display mid-point value for each iteration
void binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int iteration = 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the mid-point
        printf("Iteration %d, Mid = %d\n", iteration, arr[mid]);

        if (arr[mid] == target) {
            printf("Target %d found at index %d\n", target, mid);
            return;
        }

        // If the target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        } else { // If the target is smaller, ignore the right half
            right = mid - 1;
        }

        iteration++;
    }

    printf("Target %d not found\n", target);
}

int main() {
    int arr[] = {2, 3, 4, 7, 9, 15, 21, 23}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 15; // Set the target value

    binarySearch(arr, size, target);

    return 0;
}

