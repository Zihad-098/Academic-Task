#include<bits/stdc++.h>
using namespace std ;

void fib(int n) 
{
    int f1=0;
    int f2=1;
    for (int i=0;i<=n;i++)
    {
       int f3 = f1  ;
       cout << f3 << " " ;
       f3 = f1+f2 ;
       f1=f2 ;
       f2=f3 ;
    }
}

int main ()
{
    int n ;
    cin >> n ;
    fib (n) ;
}