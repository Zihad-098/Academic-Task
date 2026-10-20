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
    int gradeA =0 ,gradeB=0,gradeC=0,gradeD=0,gradeF=0;
    for (int i =0 ; i<n; i++)
    {
        if (ar[i] >= 90 && ar[i]<=100)
        {
            gradeA++;
        }
        else if (ar[i]>=80 && ar[i]<=89)
        {
            gradeB++;
        }
        else if (ar[i]>=70 && ar[i]<=79)
        {
           gradeC ++ ;
        }
        else if (ar[i] >= 60 && ar[i] <= 69)
        {
           gradeD++;
        }
        else
        {
            gradeF++;
        }
    }
    cout << "\nGrade distribution:\n";
    cout << "A (90-100): " << gradeA << std::endl;
    cout << "B (80-89): " << gradeB << std::endl;
    cout << "C (70-79): " << gradeC << std::endl;
    cout << "D (60-69): " << gradeD << std::endl;
    cout << "F (below 60): " << gradeF << std::endl;

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
