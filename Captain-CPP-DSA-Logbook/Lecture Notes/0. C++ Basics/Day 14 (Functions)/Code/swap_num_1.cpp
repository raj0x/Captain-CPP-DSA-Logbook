// Swap_numbers -->> swapping two numbers using pass by value

#include <iostream>
using namespace std;

void swap(int n, int m) //pass by value
{
    int p = n; //storing the value of n in temp
    n = m; //assigning the value of m to n
    m = p; //assigning the value of temp to m

}

int main()
{
    int a,b;
    cout << "Enter first numbers: " << endl;
    cin >> a;
    cout << "Enter second numbers: " << endl;
    cin >> b;

    cout << "Before swap function call: " << endl;
    cout << "Value of a: " << a << endl; //printing the value of a before function call
    cout << "Value of b: " << b << endl; //printing the value of b before function call

    swap(a, b); //calling the function and passing 'a' and 'b' as arguments

    cout << "After swap function call: " << endl;
    cout << "Value of a: " << a << endl; //printing the value of a after function call
    cout << "Value of b: " << b << endl; //printing the value of b after function call

}

/*
Value of a and b did not change after the function call because we passed 'a' and 'b' by value to the function.
When we pass a variable by value, a copy of the variable is made and passed to the function.
*/