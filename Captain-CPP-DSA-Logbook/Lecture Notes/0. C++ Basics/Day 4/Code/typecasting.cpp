#include <iostream>
using namespace std;

int main()
{
    // insert value of c in a
    int a = 10;

    char c = 'b';

    a = c;

    cout << "value of a is: " << a << endl; // gives a = 98 because ASCII value of b is 98

    // insert value of a in c
    int a = 66;

    char c = 'b';

    c = a;

    cout << "value of c is: " << c << endl; // gives c = B because ASCII value of 66 is B



}