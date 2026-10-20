#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    list <int> v ;
    v.push_back (90) ;
    v.push_back (89) ;
    v.push_back(67) ;
    v.push_back (56) ;
    v.push_front (53) ;
    v.push_front (45) ;

    v.clear () ;

    for (auto it  : v ) 
    {
        cout << it << " " ;
    }

}