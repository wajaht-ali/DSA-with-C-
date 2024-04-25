#include <iostream>
using namespace std;

//Time Complexity will be O(N)
bool linearSearch(int arr[], int size, int target)      
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
            break;          //if found the target, break the loop to stop more comparisons.
        }
    }
    return false;
}

int main()
{
    int arr[8];
    cout << "Enter your array elements: " << endl;
    //taking user input in array format
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    int target;
    cout << "Enter your key to find in the given array: ";
    cin >> target;
    cout << endl;

    //calling linear search and storing it's output into a boolean
    bool res = linearSearch(arr, 8, target);

    //displaying results, '1' if found, else '0'
    if (res)
    {
        cout << "Is found: " << res << endl;
    }
    else
    {
        cout << "Is found: " << res << endl;
    }
    return 0;
}