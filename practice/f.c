#include <stdio.h>
#include <limits.h>

int main()
{
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int A[N]; // Array to hold the elements
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        int min_value = INT_MAX; // To store the smallest result

        // Traverse all pairs (i, j) where i < j
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int current_value = A[i] + A[j] + (j - i);
                if (current_value < min_value)
                {
                    min_value = current_value;
                }
            }
        }

        printf("%d\n", min_value);
    }

    return 0;
}

