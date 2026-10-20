#include<bits/stdc++.h>
using namespace std ;
void fib (int n )
{
    int pev1 = 0 ;
    int pev2 = 1 ;
    for (int i=0;i<=n;i++)
    {
        int pev3 = pev1 ;
        cout << pev3 << " ";

        pev3 = pev1 + pev2 ;
        pev1 = pev2 ;
        pev2 = pev3 ;

    }
}
int main ()
{
    int n ; 
    cin >> n ;
    fib (n) ;
}