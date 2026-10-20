#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    vector <int > v;
    v.push_back(10) ;
    v.push_back (90) ;
    v.push_back (0) ;
    v.push_back(78) ;
    v.push_back (67) ;

    cout << "Before reversing " << endl ;

    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl ; 
    reverse (v.begin () ,v.end());
    cout << "After reversing " << endl ;
    for (int i=0;i<v.size();i++)
    {
        cout << v [i] << " " ;
    }
}