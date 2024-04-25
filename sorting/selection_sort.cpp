#include <iostream>
using namespace std;


//Time complexity of selection sort is O(N^2)
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;                   //assume elem at ith index is smaller
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])    //if arr[j] is less then ele at minIndex, then minIndex is pointing to the wrong elem, store jth index into the minIndex
            {  
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);        //after traversing whole loop swap if 'true'
    }
}

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1, -1, 2, 0, 3, 1, 8, 3, 7, 6,-5, -5, -4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);
    print(arr, size);
}