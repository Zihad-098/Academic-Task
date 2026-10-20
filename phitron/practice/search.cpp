#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n;
    int ar[n] , x , pos ,count=0;
    for (int i=0;i<n;i++)
    {
        cin >> ar[i] ;
    }
   // cout << "element search = " ;
    cin >> x ;
    for (int i = 0 ;i<n;i++)
    {
        if (ar[i]==x)
        {
            count = 1 ;
            pos = i+1 ;
            break ;
        }
    }
    if (count == 0)
    {
        cout << "\nElement not found " << endl ;
    }
    else
    {
        cout << "\nElement = " << x << endl << "and position = " << pos << endl ;
    }
    return 0 ;
} // lets run the code ;
