#include <bits/stdc++.h>
using namespace std;

int binarSearch(int arr[], int low, int high, int data)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == data)
        {
            return mid;
        }
        if (arr[mid] > data)
        {
            return binarSearch(arr, low, mid - 1, data);
        }
        return binarSearch(arr, mid + 1, high, data);
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    cin >> data;
    int result = binarSearch(arr,0,n-1,data);
    if (result != -1)
    {
        cout << "element is present at index"<< result << endl ;
    }
    else {
    cout << "Element is not present in this array " << endl ;
    }
    return 0;
}