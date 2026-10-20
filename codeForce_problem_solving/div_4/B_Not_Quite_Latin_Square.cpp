#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin >> t  ;
    t *= 3 ;
    while (t--)
    {
        string st  ;
        cin >> st ;
        sort (st.begin() , st.end() );
        if (st[0] =='?')
        {
            if (st [1] == 'B' && st[2] =='C')
            {
                cout << 'A' << endl ;
            }
            else if (st [1] == 'A' && st[2] == 'B')
            {
                cout << 'C' << endl ;
            }
            else 
            {
                cout << 'B' << endl ;
            }

        }
    }
    return 0 ;
}