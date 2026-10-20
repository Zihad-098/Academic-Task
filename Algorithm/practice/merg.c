#include <stdio.h>

int cout;

void merge(int arr[], int lb, int mid, int rb)
{
    int n1 = mid - lb + 1;
    int n2 = rb - mid;

    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[lb + i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = lb;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int lb, int rb)
{
    if (lb < rb)
    {
        int mid = lb + (rb - lb) / 2;
        mergeSort(arr, lb, mid);
        printf("%d %d %d\n", lb, mid, rb);
        cout++;
        mergeSort(arr, mid + 1, rb);
       // printf("%d %d %d\n", lb, mid, rb);
        cout++;
        merge(arr, lb, mid, rb);
        //printf("%d %d %d\n", lb, mid, rb);
        cout++;
    }
}
int main()
{
    int arr[] = {8,-9,2,4,6,1,5};
    int len = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, len - 1);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("total cout = %d ", cout);
}
