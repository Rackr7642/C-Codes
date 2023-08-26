#include <bits/stdc++.h>
using namespace std;

// Insertion sort algo
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // updating Key
        arr[j + 1] = key;
    }
}

// to print array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);

    // Start the clock
    clock_t start = clock();

    insertionSort(arr, N);

    // Stop the clock utilizing clock class with end as 
    clock_t end = clock();

    printArray(arr, N);

    // Calculate the elapsed time
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by function: " << fixed << time_taken << setprecision(5);
   

    return 0;
}

