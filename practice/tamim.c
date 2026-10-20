#include <stdio.h>
int main()
{
    int n; // size ;
    //  scanf ("%d",&size);
    scanf("%d", &n);
    int ar[n];

    //  if (size >= n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ar[i]);
        }
    }
}