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

    vector<int> :: iterator it ;

    // it=v.begin () + 2;
    // cout << *it << endl ;
    for (it =v.begin() ; it <v.end() ;it ++)
    {
        cout << *it << " ";
    }
}