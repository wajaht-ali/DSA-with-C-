#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i=1;
    while(i<n)
    {
        int temp = arr[i];      //storing ith elem in temp for later
        int j = i - 1;
        while(j>=0)
        {
            if (arr[j] > temp)  // if jth is > than temp so place the jth elem at j+1, which already been free by storing in temp
            {
                arr[j + 1] = arr[j];
            }
            else        //if not true, break the loop
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;      // here again place the temp at it's original place
        i++;
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
    // int arr[] = {1, -1, 2, 0, 3, 1, 8, 3, 7, 6, -5, -5, -4, 4};
    // int arr[] = {-1, 0, 1, -2, -3, 4, -5};
    int arr[] = {2, 1, 3, 5, 4, -1, 1, 0, 8, 6};

    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);
    print(arr, size);
}