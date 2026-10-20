#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int cnt = 0;
    bool isSwap = false;
    for (int i = 0; i < n - 1  ; i++)
    {

        for (int j = 0; j < n - i - 1 ; j++)
        {
            cnt++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }       
    }
    cout << cnt << endl ;
    if (!isSwap)
    { // array is already sorted

        cout << "Array is already sorted ";
        return;
    }
    
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    bubbleSort(arr, n);
    printArray(arr, n);
}