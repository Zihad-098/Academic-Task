#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    list <int> v ;
    v.push_back (2);
    v.push_back (5);
    v.push_back (6);
    v.push_front(9);

    for (auto it : v )
    {
        cout <<it << " ";
    }
    cout << endl ;
    cout << v.front () << endl ; 
    cout << v.back () << endl ;
}