#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int  N ;
    cin >> N ;
    int number ;
    int max_number = 0;
    for (int i =0 ;i<N;i++)
    {
        cin >> number ;
        if (number > max_number){
            max_number = number ;
        }
    }
    cout << max_number << endl ;
    return 0 ;
}
