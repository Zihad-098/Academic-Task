#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100];
    vector<int> v;

    v.push_back(1); // v[0]
    v.push_back(2); // v[1]
    v.push_back(3); // v[2]
    v.push_back(4); // v[3]
    v.push_back(5); // v[4]

    // cout << v[0] << " ";
    // cout << v[1]<< " " ;
    // cout << v[2] << endl ;

    // cout << v.at(0) << " ";
    // cout << v.at(1) << " ";
    // cout << v.at(2) << endl ;

   // cout << v[5] << endl ;

    // cout << v.at(5) << endl; 

    // cout << v.size() << endl ;

    // for (int i=0;i<v.size();i++)
    // {
    //     cout << v[i] << " " ;
    // }
    // cout << endl ;

    // cout << "front function = " <<  v.front () << endl ;

    // cout <<"back function = " <<  v.back () << endl ; 

    // cout << v.size () << endl ;

    //v.clear () ;

    //  cout << v.size () << endl ;
    // // v.clear () ;
    // if (v.empty())
    // {
    //     cout << "Empty" ;
    // }
    // else 
    // {
    //     cout << "Not empty ";
    // }

    //  v.pop_back () ;

    // for (int i=0;i<v.size() ;i++)
    // {
    //     cout << v[i] << " " ;
    // }
    // cout << endl ;

    v.erase(v.begin()+3);

    v.erase (v.begin () + 3,v.end ()) ;

    v.erase (v.begin () + 2 ,v.begin () + 4) ;
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << " " ;
    }
}