#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int a , b ;
    char c ;
    cout <<"enter two number : " ;
    cin >> a >> b ;
    cout << "enter an operator (+,-,*,/):" ;
    cin >> c ;
    switch (c)
    {
        case '+' :
            cout << a+b << endl ;
            break ;
        case '-' :
            cout << a-b << endl ;
            break ;
        case '*' :
            cout << a*b << endl ;
            break ;
        case '/' :
            cout << a/b << endl ;
            break ;

    }
    return 0 ;
}
