#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int size = sizeof(arr) / sizeof(arr[0][0]);
    int row = 3, col = 4, key = 5;
    int str = 0, end = (row * col) - 1;

    int mid = str + (end - str) / 2;

    while (str < end)
    {
        int element = arr[mid / col][mid % col];
        if (element == key)
        {
            cout << "Key Founded" << endl;
            break;
        }
        else if (element < key)
        {
            str = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = str + (end - str) / 2;
    }
    return 0;
}