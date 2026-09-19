#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    int start = 0, end = 5;

    while(end>start)
    {
        swap(arr[start], arr[end]);         
        start++;
        end--;
    }
        for(int i=0;i<=5; i++)
        cout << arr[i]<<" ";
}