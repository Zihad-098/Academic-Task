#include <stdio.h>
int main()
{
    int ar[8] = {2, 4, 7, 9, 13, 15, 21, 23};
    printf("This is the array = ");
    
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", ar[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
     printf ("\n") ;
    printf ("Sorted array = ");
   
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", ar[i]);
    }
    int data = 4, low, high, mid;
    low = 0;
    high = 8 - 1;
    mid = (low + high) / 2;
    printf ("\n");
    printf ("Now searching the code !!\n");
    
    while (low <= high)
    {
        if (ar[mid] < data)
        {
            low = mid + 1;
        }

        else if (ar[mid] == data)
        {
            printf("%d found at the location %d.\n", data, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
    {
        printf("%d is not present in the array.", data);
    }
    return 0;
}