#include <iostream>
#include <climits> // Essential header for INT_MAX and INT_MIN
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int ans = INT_MAX; //give max value exist in 'int' data type to "ans"
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < ans)
            ans = arr[i];
    }
    cout << ans;

    return 0;
}