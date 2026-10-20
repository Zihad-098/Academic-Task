#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int a[n] ;
    for (int i  =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    }
    int x , count = -1;
    cin >> x ;
    for (int i = 0 ;i <n;i++)
    {
        if (a[i] == x)
        {
            count = i ;
            break ;
        }
    }
    cout << count << endl ;
    return 0 ;
}
