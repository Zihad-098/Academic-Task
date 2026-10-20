#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        char ch [6] ;
        cin  >> ch ;
        int countA=0,countB=0;
        for (int i=0;i<5 ;i++)
        {
            if (ch[i] == 'A')
            {
                countA ++ ;
            }
            else if (ch[i] == 'B')
            {
                countB ++ ;
            }
        }
        if (countA > countB)
        {
            cout << "A" << endl ;
        }
        else if (countA < countB)
        {
            cout << "B" << endl ;
        }
        else {
            cout << "Equal" << endl ;
        }
    }
    return 0 ;
}