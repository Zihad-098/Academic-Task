#include<stdio.h>
int main ()
{
    int n ;
    scanf ("%d",&n);
    int arr[n] ;
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }

   for (int i=1;i<n;i++)
   {
        int current = arr[i] ;
        int previous = i-1;
        while (previous>=0 && arr[previous] > current)
        {
            arr[previous+1] = arr[previous] ;
            previous -- ;
        }
        arr[previous+1] = current ;
   }
   printf ("After sorting : ");
   for (int i=0;i<n;i++)
   {
        printf ("%d ",arr[i]);
   }
   printf ("\n");
   int data ;
   scanf ("%d",&data) ;
   int low = 0;
   int high = n-1 ;
   int mid = (low+high) / 2 ;
   while (low<=high)
   {
        if (arr[mid] < data)
        {
           low = mid + 1 ;
        }
        else if (arr[mid] == data)
        {
            printf ("%d found at the location %d.\n",data,mid+1);
            break;
        }
        else 
        {
            high = mid - 1 ;
            //mid =(low+high) / 2 ;
        }
   }
   if (low > high) 
   {
        printf ("This number is not present in this array.\n");
   }
   return 0 ;
}