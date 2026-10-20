#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cout << "Enter the number of element : " ;
    cin >> n ;
    int id[n] ;
    cout << " Input the array element number :  " ;
    for (int i=0;i<n;i++)
    {
        cin  >> id[i] ;
    }
    cout << "Swaping the array element : " ;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (id[i] < id[j])
            {
                swap (id[i] , id[j]);
            }
        }
    }
    cout << "Now the array is sorted with descending order !! " << endl ;
    for (int i=0;i<n;i++)
    {
        cout << id [i] << " " ;
    }
    return 0 ;

}
