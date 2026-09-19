#include <iostream>
using namespace std;

int main()
{
    int i,n;

    cout << "Enter the value of n: ";
    cin >> n;

    i=1;
    while(i<=10)
    {
        cout << n*i << " ";
        cout << endl;
        i++;
    }
}