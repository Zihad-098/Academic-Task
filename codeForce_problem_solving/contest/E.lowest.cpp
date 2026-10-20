#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int a[n] , lowest_number =INT_MAX , pos ;
    for (int i  = 1 ; i<=n ;i++)
    {
        cin >> a[i] ;
        if (lowest_number > a[i])
        {
            lowest_number = a[i];
            pos = i ;
        }
    }
    cout << lowest_number << " " << pos << endl ;

}
