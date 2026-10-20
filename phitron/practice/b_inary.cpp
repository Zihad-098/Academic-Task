#include <bits/stdc++.h>

using namespace std;

int main()

{

    int n;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)

    {

        cin >> a[i];
    }

    sort(a, a + n);

    int x;

    cin >> x;

    int flag = 0;

    int low = 0, high = n - 1;
    while (low <= high)

    {

        int mid_index = (low + high) / 2;

        if (a[mid_index] == x)

        {

            flag = 1;

            break;
        }

        else if (a[mid_index] > x)

        {

            high = mid_index - 1;
        }

        else if (a[mid_index] < x)

        {

            low = mid_index + 1;
        }
    }

    if (flag)

    {

        cout << "Found" << endl;
    }

    else

        cout << "Not Found" << endl;

    return 0 ;
}
