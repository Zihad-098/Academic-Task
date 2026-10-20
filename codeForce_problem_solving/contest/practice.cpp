#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int rows = 5 ; //number of rows
    int columns = 5 ; // number of columns
    int num = 1 ;
    for (int i =1 ;i<= rows ; i++)
    {
        for (int j =1 ;j<=columns ; j++)
        {
            cout << num << " " ;
            num ++ ;
        }
        cout << endl ;
    }
    return 0 ;
}
