#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int N ;
    cin >> N ;
    int number ;
    int P = 0 ;
    int E =0 ;
    int negative = 0 ;
    int O = 0 ;
    for (int i =0 ;i< N ;i++)
    {
        cin >> number ;
        if (number % 2 == 0){
            E ++ ;
        }
        else {
            O++;
        }
        if (number > 0 ){
            P ++ ;
        }
        else if (number < 0 ){
            negative ++ ;
        }
    }
    cout << "Even: " << E << endl ;
    cout << "Odd: "<< O << endl ;
    cout << "Positive: "<< P << endl ;
    cout << "Negative: "<< negative << endl ;
    return 0 ;
}
