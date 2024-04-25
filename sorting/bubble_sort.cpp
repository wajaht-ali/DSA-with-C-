#include <iostream>
using namespace std;

// Time complexity of bubble sort is O(N^2)
// It places ith largest element at it's right place in ith round
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, -1, 2, 0, 3, 1, 8, 3, 7, 6, -5, -5, -4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);
    print(arr, size);
}