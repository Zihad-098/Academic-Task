#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ,i ;
    cin >> n ;
    int *a = new int [n];
    for (i = 0 ; i<n ; i++){
        cin >> a[i] ;
    }
    cout <<"\n ";
    for (i = 0 ; i<n ; i++)
    {
        cout << a[i] << endl ;
    }
    return 0 ;
}
