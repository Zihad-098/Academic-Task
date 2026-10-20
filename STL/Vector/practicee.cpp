#include<bits/stdtr1c++.h>
using namespace std ;
int main ()
{
    vector <int> v ;
    v.push_back (60);
    v.push_back (90);
    v.push_back (97);

    for (int i=0;i<v.size () ;i++)
    {
        cout << v[i] << " " ;
    }
    cout << endl ;
    vector <int> :: iterator it ;
    for (it =v.begin () ; it <v .end() ; it ++ )
    {
        cout << *it << " " ;
    }
}