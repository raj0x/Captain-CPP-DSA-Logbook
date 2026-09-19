// Increasing Selection Sorting...!
// Sorting is one by one but from starting (i=0) to i<n;
#include <iostream>
using namespace std;

int main()
{   
    // Creation of array at your size for choice...!
    int arr[1000];
    int n; 
    cout << "Enter the size of array; ";
    cin >> n; //Size of array
    
    // taking input
    cout << "Enter the elements of arraty: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int idx = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[idx])
            idx = j;
        }

        swap(arr[i],arr[idx]);
    }

    // print array
    cout << "Sorted array - Forward: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}