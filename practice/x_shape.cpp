#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int N ;
    cin >> N ;
    for (int i = 1; i<=N ; i++)
    {
        for (int j =1 ; j<=N ; j++)
        {
            if (i==j && i!=(N+1)/2 && j!=(N+1)/2)
            {
                cout << "\\" ;
            }
            else if (i==(N+1)/2 && j==(N+1)/2)
            {
                cout << "X";
            }
            else if (j!=(N+1)/2 && i==(N+1)-j)
            {
                cout << "/";
            }
            else
            {
                cout << "*" ;
            }
        }
        cout << endl ;


    }
    return 0 ;
}

