// we are using two pointers approach and the time complexity is O(N);
#include<iostream>
using namespace std;

void reverse(int arr[], int str, int end) {
    while(str<=end) {
        swap(arr[str], arr[end]);
        str++;
        end--;
    }
}

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    cout<<"Enter number of rotations: ";
    cin>>k;
    cout<<endl;
    
    k = k % n;      //if roatations exceed the size of array then we can save the array rotation T.period.
    
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n-1);

    //print the array:
    print(arr, n);
    return 0;
}