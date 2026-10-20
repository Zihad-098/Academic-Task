#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    list <int> v ;
    v.push_back(1);
    v.push_back (2);
    v.push_back(3);
    v.push_front (5);
    v.push_front (8) ;

    // list <int>::iterator it ;
    // for (it=v.begin() ;it !=v.end();it++)
    // {
    //     cout << *it << " " ;
    // }
    // cout << endl ;

    //or 

    for (auto it : v)
    {
        cout << it << " " ;
    }
    cout << endl ;

}