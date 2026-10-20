#include<bits/stdc++.h>
using namespace std ;
int *fun ()
{
    int *a = new int ;
    cout << "fun : " << a << endl ;
    *a = 10 ;
    return a ;
}
int main ()
{
    int *p = fun ();
    cout << "main : " << *p << endl ;
}
