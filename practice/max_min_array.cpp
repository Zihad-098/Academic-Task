#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n ;
    int ar[n] ;
    for (int i =0 ; i<n ; i++)
    {
        cin >> ar[i] ;
    }
    for (int i =0 ; i<n; i++)
    {
        if (ar[i] >= 90 && ar[i]<=100)
        {
            cout << "your grade is = A " << endl ;
        }
        else if (ar[i]>=80 && ar[i]<=89)
        {
            cout << "your grade is = B " << endl ;
        }
        else if (ar[i]>=70 && ar[i]<=79)
        {
            cout << "your grade is = C " << endl ;
        }
        else if (ar[i] >= 60 && ar[i] <= 69)
        {
            cout << "your grade is = D " << endl ;
        }
        else
        {
            cout << "Fail" << endl ;
        }
    }
    int sum = 0 ;
    for (int i=0; i<n; i++)
    {
        sum+=ar[i] ;
    }
    cout << "sum of the array = " << sum << endl ;
    float  avg = (sum / n ) ;
    cout << "Average marks of the student = " << fixed << setprecision (.1) <<  avg << endl ;
    int count = 0;
    for (int i =0 ; i<n ; i++)
    {
        if (ar[i]>avg)
        {
            count ++ ;
        }
    }
    cout <<"count students with marks above average = " << count << endl ;

    cout <<"\nEven number = " ;
    for (int i =0 ; i<n; i++)
    {
        if (ar[i]%2==0)
        {
            cout << ar[i] << " " ;
        }
    }
    cout <<"\nOdd number = " ;
    for (int i= 0 ; i< n ; i++)
    {
        if (ar[i] % 2 !=0)
        {
            cout << ar[i] << " " ;
        }
    }
    cout << "\n" ;
    int maximum = ar[0] ;
    int minimum = ar[0] ;
    for (int i =0 ; i<n ; i++)
    {
        if (maximum < ar[i])
        {
            maximum = ar[i] ;
        }
        if (minimum > ar[i])
        {
            minimum = ar[i] ;
        }
    }
    cout << "maximum value = " << maximum << endl << "minimum value = " << minimum << endl ;
}
