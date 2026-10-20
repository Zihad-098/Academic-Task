#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        // int current_value ;
        int min_value = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int current_value = ar[i] + ar[j] + (j - i);
                if (current_value < min_value)
                {
                    min_value = current_value;
                }
            }
        }
        printf ("%d\n",min_value);
    }
}