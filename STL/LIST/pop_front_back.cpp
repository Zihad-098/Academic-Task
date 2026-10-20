#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> v;
    v.push_back(90);
    v.push_back(89);
    v.push_back(6);
    v.push_front(1);
    v.push_front(56);

    cout << v.size() << endl;
    v.pop_front();
    v.pop_back();

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}