#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n ;
        cin >> n ;
        long long int sum = 0  , a ;
        //int a ;
        for (int i=0;i<n;i++)
        {
            cin >> a;
            sum+=a;
        }
        long long int k = sqrt (sum) ;
        if (k*k==sum)
        {
            cout << "YES" << endl ;
        }
        else 
        {
            cout << "NO" << endl ;
        }

    }
    return 0 ;
}