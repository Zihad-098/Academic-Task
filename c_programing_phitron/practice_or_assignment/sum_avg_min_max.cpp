#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int ar [n] ;
    for (int i =0 ;i<n ;i++)
    {
        cin >> ar[i];
    }
    int minimum = ar[0];
    int maximum = ar[0];
    for (int i =0 ;i<n;i++)
    {
        if (minimum > ar[i])
        {
            minimum = ar[i];
        }
        else {
            maximum = ar[i];
        }
    }
    cout << "minimum = " << minimum << endl << "maximum = " << maximum << endl ;

    int sum = 0 ;
    for (int i = 0;i<n;i++)
    {
        sum+=ar[i];
    }
    cout <<  "sum = "<<sum << endl ;
    int avg = sum / n ;
    cout << "average = " << avg << endl ;


    return  0 ;
}

