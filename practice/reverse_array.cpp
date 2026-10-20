#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int ar[n];
    for (int i =0 ;i<n;i++)
    {
        cin >> ar[i] ;
    }
    for (int i = 0 ;int j =0 ;i<j;i++;j--)
    {
        int temp = ar[i] ;
        ar[i] =ar[j];
        ar[j] = temp ;
    }
    for (int i =0 ;i<n;i++)
    {
        cout << ar[i] << " ";
    }
}
