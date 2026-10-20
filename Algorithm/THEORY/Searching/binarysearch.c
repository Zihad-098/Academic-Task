#include <stdio.h>
int main()
{
    int n, a, low, high, mid;
    // printf ("Enter number of elements: ");
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    printf("sorted = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    // printf ("Enter the value to find: ");
    scanf("%d", &a);
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while (low <= high)
    {
        if (ar[mid] < a)
        {
            low = mid + 1;
        }

        else if (ar[mid] == a)
        {
            printf("%d found at the location %d.\n", a, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
    {
        printf("%d is not present in the array.", a);
    }
    return 0;
}