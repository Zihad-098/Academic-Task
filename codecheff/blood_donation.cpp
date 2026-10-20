#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t  ;
    cin >> t ;
    while (t--)
    {
        int n,x ;
        cin >> n >> x ; // n=donations , x= collected ;
        int target = (n-x);
        cout << target << endl ;
    }
    return 0 ;
}
