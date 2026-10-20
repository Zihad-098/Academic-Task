#include<iostream>
using namespace std;
void arrayy(int a[],int l,int r)
{
    int i;
    for(i=l; i<=r; i++)
    {
        cout<<a[i]<<" ";
    }
}
void mergee(int arr[],int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int a[n1], b[n2];
    for(int i=0; i<n1; i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        b[i]=arr[m+1+i];
    }
    int i=0, j=0, k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;

    }
    while(j<n2)
    {
        arr[k]=b[j];
        k++;
        j++;

    }
}

void mergesort(int a[],int l, int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        mergee(a,l,m,r);
    }
}
int main()
{
    int n=10;
    int arr[n]= {9,1,3,6,4,5,7,2,8};
    arrayy(arr,0,n-1);
    cout<<endl;
    mergesort(arr,0,n-1);
    cout<<"after merge-"<<endl;
    arrayy(arr,0,n-1);
}