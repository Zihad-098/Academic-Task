




// Assigment Code 1

#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1;

    cout << "Pivot chosen: " << pivot << endl;

    for (int j = low; j < high; j++)
    {
        if (arr[j] >= pivot)   // Sorting in descending order
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);

    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {7, 2, 1, 6, 8, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting:" << endl;
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Array after Quick Sort (Descending Order):" << endl;
    printArray(arr, n);

    return 0;
}
Output:
Array before sorting:
7 2 1 6 8 5 3
Pivot chosen: 3
Pivot chosen: 5
Pivot chosen: 8
Pivot chosen: 7
Pivot chosen: 1
Array after Quick Sort (Descending Order):
    8 7 6 5 3 2 1

    Assigment Code  2
#include <iostream>
    using namespace std;

// Function to partition the array for Quick Sort (descending order)
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Pivot is the last element
    int i = low - 1;

    cout << "Pivot chosen: " << pivot << endl;

    for (int j = low; j < high; j++)
    {
        if (arr[j] >= pivot)   // Descending order comparison
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);

    // Display partition step
    cout << "Partitioned array: ";
    for (int k = low; k <= high; k++)
        cout << arr[k] << " ";
    cout << endl;

    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to perform Insertion Sort (ascending order)
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr1[n], arr2[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i]; // Copy for insertion sort
    }

    cout << "Array before Quick Sort (Descending Order):\n";
    for (int i = 0; i < n; i++) cout << arr1[i] << " ";
    cout << endl;

    quickSort(arr1, 0, n - 1);

    cout << "Array after Quick Sort (Descending Order):\n";
    for (int i = 0; i < n; i++) cout << arr1[i] << " ";
    cout << endl << endl;

    cout << "Array before Insertion Sort (Ascending Order):\n";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";
    cout << endl;

    insertionSort(arr2, n);

    cout << "Array after Insertion Sort (Ascending Order):\n";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
Output:
Array before sorting:
7 2 1 6 8 5 3
Array after Insertion Sort (Ascending Order):
    1 2 3 5 6 7 8

