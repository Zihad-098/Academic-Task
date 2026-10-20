#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int N ;
    cin >> N ;
    bool foundEven = false ;
    for (int i=1;i<=N;i++)
    {
        if (i%2==0){
            cout << i << endl;
        }
        foundEven = true ;
    }
    if (!foundEven){
        cout << "-1"<< endl ;
    }
}
