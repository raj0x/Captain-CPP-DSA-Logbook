#include <iostream>
using namespace std;        

int main()
{
    int a;
    cout << "Enter value of a: ";
    cin >> a;

    char rem;
    rem = a%2;

    if (rem==0)
    {
        cout << "a is even" << endl;
    }
    else
    {
        cout << "a is odd" << endl;
    }

    // or can directly do this

    /*
    if (a%2==0)
    {
        cout << "a is even" << endl;
    }
    else
    {
        cout << "a is odd" << endl;
    }
    */
}