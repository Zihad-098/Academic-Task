#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int ar[n] ;
    for (int i = 0 ;i< n ;i++)
    {
        cin >> ar[i] ;
    }
    int x ; // finding the value
    cin >> x ;
    int pos , count = 0;
    for (int i =0 ;i<n;i++)
    {
        if (ar[i] == x)
        {
            pos = i + 1 ;
            count = 1 ;
            break ;
        }
    }
    if (count == 0)
    {
        cout << "this value is not available in this array  " << endl ;
    }
     else
    {
        cout << "\nElement = " << x << endl << "and position = " << pos << endl ;
    }
    return 0 ;
}
