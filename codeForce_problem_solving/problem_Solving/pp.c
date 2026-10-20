#include <stdio.h>

int main() {
    int N;

    // Step 1: Input the number of elements
    scanf("%d", &N);

    int A[N];
    
    // Step 2: Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Step 3: Initialize min and max indices and values
    int min_index = 0, max_index = 0;

    // Step 4: Find the indices of the minimum and maximum elements
    for (int i = 1; i < N; i++) {
        if (A[i] < A[min_index]) {
            min_index = i;
        }
        if (A[i] > A[max_index]) {
            max_index = i;
        }
    }

    // Step 5: Swap the minimum and maximum elements
    int temp = A[min_index];
    A[min_index] = A[max_index];
    A[max_index] = temp;

    // Step 6: Output the modified array
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
