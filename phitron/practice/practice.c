#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            for (int j = 0; j < 3; j++)
            {
                count = count + 1;
            }
        }
    }
    printf("n = %d,count = %d", n, count);
}