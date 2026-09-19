// Binary Search in an Sorted Increasing Array having flow of searching
// of number in array (i=0) to (i<n)...! 

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;  // might give overflow error (in platform also like leetcode,etc), so for this 
        if (arr[mid] == key)          // correct things is mid = start + (end-start)/2, will not give any error...!
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;  // if the number which we search in array not present in array, then -1 will be provided as output
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0KO; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key: ";
    cin >> key;

    cout << BinarySearch(arr, n, key);

    return 0;
}