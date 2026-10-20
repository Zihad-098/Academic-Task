#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ,mn,id;
    cin >> n ;
    int a[n];
    for (int i =0;i<n;i++)
    {
        cin >> a[i];
        if (a[i]<mn || i==0 ){
            mn=a[i];
            id = i ;
        }

    }
    cout << mn << " " << id+1 << endl ;
}
