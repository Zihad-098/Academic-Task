#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int ar [1000];

    vector <int > v; 
    v.push_back (5) ;
    v.push_back (8);
    v.push_back (67) ;
    v.push_back (87) ;
    v.push_back (90) ;
    v.push_back (65) ;

    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl ;

    v.pop_back () ;
    for (int i=0;i<v.size() ;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl ;
    v.pop_back () ;

    for (int i=0;i<v.size ();i++)
    {
        cout << v[i] << " " ;
    }
}