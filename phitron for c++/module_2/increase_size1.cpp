// incraseing_ array
#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int *a = new int [5] ;
    int *b = new int [5] ;
    for (int i =0 ;i <5 ;i++)
    {
        cin >> a[i] ;
        b[i]=a[i] ; // ekhane array of a er maan b array te rakha hoice
    }
    delete [] a ;  // array a delete kore dilam
    a = new int [7] ; // notun array add korlam
    for (int i =0 ;i<5;i++)
    {
        a[i] = b[i] ; // ekhn oi b of array ta a array modde save koralm
    }
    delete [] b ; // b array delete korlam
    a[5] = 60 ;
    a[6] = 70 ;
    for (int i=0;i<7;i++)
    {
        cout << a[i] << " " ; // now this is the final array
    }
    return 0 ;
}
