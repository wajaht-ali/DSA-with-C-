#include <iostream>
using namespace std;


//Time Complexity will be O(log N) bcz we are making 1/2^k comparisons
bool binarySearch(int arr[], int size, int key)
{
   int str = 0, end = size - 1;     
   int mid = (str + end) / 2;       //OR mid = str + (end - str) / 2;

   while(str<=end) {
    if(arr[mid] == key) {       //if elem at arr[mid] = key then it'll return and break the loop
        return true;
        break;
    }  
    else if(arr[mid] > key) {   // if elem at arr[mid] > key then end should be moved at mid - 1
        end = mid - 1;
    }
    else {                      // if elem at arr[mid] < key then start should be moved at mid + 1
        str = mid + 1;
    }
    mid = (str + end) / 2;
   }
}

int main()
{
    int arr[8];
    cout<<"Note! Binary search is only applicable on sorted array, so enter array elem in sorted form."<<endl;
    cout << "Enter your array elements: " << endl;

    //taking array elements from user using for loop
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    //target key to find in the array
    int key;
    cout << "Enter your key to find in the given array: ";
    cin >> key;
    cout << endl;

    //calling B.S ftn and storing it's o/p in a boolean
    bool res = binarySearch(arr, 8, key);

    //displaying results in the form of '0' or '1'
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