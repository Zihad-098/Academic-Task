#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    vector<int> v ;
    v.push_back(10);
    v.push_back(1) ;
    v.push_back (9) ;
    v.push_back (78) ;
    v.push_back (86) ;
    v.push_back (56) ;
    v.push_back(2);

    cout << "Before sorting " << endl ;
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] <<" " ;
    }
    cout << endl ;
    cout << "After sorting " << endl ;

    sort (v.begin () ,v.end());
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << " " ;
    }
}