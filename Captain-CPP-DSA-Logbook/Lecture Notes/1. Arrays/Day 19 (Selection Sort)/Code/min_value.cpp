#include<iostream>
using namespace std;

int main()
{   
    cout << "For Min: " << endl;

    // Find the min value:
    int arr[5] = {3,4,1,2,6};
    int index = 0;
    for(int i=1;i<=4;i++)
    {
        if(arr[i] < arr[index])
        {
        index = i;
        }
    }
}