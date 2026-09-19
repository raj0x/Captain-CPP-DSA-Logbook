#include <iostream>
using namespace std;

int main()
{
    int n,i;

    cout << "Enter the value of n: ";
    cin >> n;

    i=1;
    while(i<=n)
    {
        if(i%2!=0)       // ** == ** -->> ** != **  only change for even_no -->> odd_no
        {
            cout << i << endl;
        }
        i++;
    }
}