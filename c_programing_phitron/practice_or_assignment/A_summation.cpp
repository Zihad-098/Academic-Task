#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int N ;
    cin >> N ;
    int A[N];
    for (int i =0 ;i<N;i++)
    {
        cin >> A[i];
    }
    long long int sum=0;
    for (int i=0;i<N;i++)
    {
        sum+=A[i];
    }
    cout << abs(sum) << endl ;
    return 0 ;
}
