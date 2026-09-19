#include <iostream>
using namespace std;

int main()
{
    int i,n;

    cout << "Enter the value of n: ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        if(i==5)
        break;

        cout << i << endl;
    }
}

/* Here System wants only numbers to be printed upto "5" regardless Of USER Input to system
then here we use BREAK Statement for i = 5 means whether USER give Input n=100 but system output
breaks before i = 5, means system doesnt read and print anything after Break Statement is written
So, When i becomes 5 loop breaks and end forever...!
*/