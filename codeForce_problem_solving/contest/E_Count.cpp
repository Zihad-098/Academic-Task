#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   string s;
   cin >> s ;
   int st =  s.size () ;
   int sum = 0 ;
   for (int i =0 ;i<st;i++)
   {
       sum = sum + (s[i]-'0');
   }
   cout << sum << endl ;
}
