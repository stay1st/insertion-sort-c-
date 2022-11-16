// C++ library that imports all standard libraries
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, rightInt;
    for (i = 1; i < n; i++)
    {
        rightInt = arr[i]; // Selected first integer
        j = i - 1;         // getting index to right of index [i]

        /* Shift elements of array ahead by 1, if greater
        than the rightInt integer.
        */
        while (j >= 0 && arr[j] > rightInt)
        {
            arr[j + 1] = arr[j]; // Shifting the left integer to the right
            j = j - 1;         
        }
        arr[j + 1] = rightInt;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {22, 2, 0, 75, 2, 1, 45, 33, 45};
    int N = sizeof(arr) / sizeof(arr[0]); // Calculating the length of the array
    insertionSort(arr, N);
    printArray(arr, N);
}