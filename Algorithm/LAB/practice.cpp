#include <bits/stdc++.h>

void sumDiagonal(int n, int array[][4]) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += array[i][i];  // Summing main diagonal elements
    }

    printf("Sum of diagonal elements: %d\n", sum);
}

// Driver code to test the function
int main() {
    int n = 4;
    int array[4][4] = {
        {10, 2,  3,  4},
        {5,  -2, 6,  7},
        {8,  9,  -1, 10},
        {11, 12, 13, -4}
    };

    sumDiagonal(n, array);

    return 0;
}
