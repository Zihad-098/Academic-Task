#include<bits/stdc++.h>
using namespace std;
bool palincheck(int a[],int n)
{
    for(int i=0; i<n/2; i++)
    {
        if(a[i]!=a[i-n-1])
            return false;
    }
    return true;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(palincheck(a,n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
