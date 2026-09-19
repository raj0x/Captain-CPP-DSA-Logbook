// Decreasing Selection Sorting...!
// Sorting is one by one but from starting (i=0) to i<n;
#include <iostream>
using namespace std;

int main()
{
    // Creation of array at your size for choice...!
    int arr[1000];
    int n;
    cout << "Enter the size of an array: ";
    cin >> n; //Size of array

    // taking input
    cout << "Enter the element in an array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // print array
    cout << "Sorted array - Reversed: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}