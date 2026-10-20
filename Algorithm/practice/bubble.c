#include<stdio.h>

void bubbleSort (int arr [] , int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
}

void selectionSort (int arr[] ,int n)
{
    for (int i=0;i<n-1;i++)
    {
        int smallidx = i ;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j] < arr[smallidx])
            {
                smallidx = j ;
            }
            int temp = arr[i] ;
            arr[i] = arr[smallidx] ;
            arr[smallidx] = temp ;
        }
    }
}
void insertionSort (int arr[] , int n)
{
    for (int i=1;i<n;i++)
    {
        int current = arr[i] ;
        int previous = i - 1 ;
        while (previous >=0 && arr[previous] > current)
        {
            arr[previous+1] = arr[previous];
            previous -- ;
        }
        arr[previous+1] = current ;
    }
}
void printArray (int arr[] , int n)
{
    //printf ("Bubble sort = ");
    for (int i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
}

void merge (int arr[] ,int l ,int mid ,int r)
{
    int n1 = mid -l+1 ;
    int n2 = r - mid ;

    int a[n1] ;
    int b[n2] ;
    for (int i=0;i<n1;i++)
    {
        a[i]=arr[l+i] ;
    }
    for (int i=0;i<n2;i++)
    {
        b[i] = arr[mid+i+1] ;
    }
    
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i] ;
            k++;i++;
        }
        else 
        {
            arr[k] = b[j] ;
            k++;j++;
        }
    }

    while (i<n1)
    {
         arr[k] = a[i] ;
            k++;i++;
    }
    while (j<n2)
    {
        arr[k] = b[j] ;
            k++;j++;
    }
}

void mergeSort (int arr [] , int l ,int r)
{
    if (l<r)
    {
        int mid = (l+r) / 2 ;
        mergeSort (arr,l,mid) ;
        mergeSort (arr,mid+1,r) ;

        merge (arr,l,mid,r) ;
    }
}
int main ()
{
    int n ;
    scanf ("%d",&n);
    int arr[n] ;
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
     bubbleSort (arr,n);
     printArray (arr,n) ;
    // selectionSort (arr,n) ;
    // printArray (arr,n) ;

    // insertionSort (arr,n) ;
    // printArray (arr,n) ;

   // mergeSort (arr,0,n-1);
    //printArray (arr,n);

}