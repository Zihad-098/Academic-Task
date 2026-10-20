#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int a[n] , maximum = INT_MIN , minimum = INT_MAX ,  pos ;
    for (int i = 0;i<n;i++)
    {
        cin >> a[i] ;
        if (maximum < a[i])
        {
            maximum = a[i];
            pos = i ;
        }
        if (minimum > a[i])
        {
            minimum = a[i] ;
            pos = i ;
        }
    }
    cout << maximum <<" " <<  pos  << " and" << " " << minimum << " " <<  pos << endl ;
}
