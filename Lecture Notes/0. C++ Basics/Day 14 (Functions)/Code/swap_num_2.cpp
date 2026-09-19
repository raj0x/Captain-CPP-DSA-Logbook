// Swap_numbers -->> swapping two numbers using pass by reference 
//also learn function overloading in this code...!

#include <iostream>
using namespace std;

void swap(int &n, int &m) //pass by reference
{
    int p = n; 
    n = m; 
    m = p; 
}

void swap(float &n, float &m) //function overloading -->> swapping two float numbers using pass by reference
{
    float p = n; 
    n = m; 
    m = p;
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

    float x=4.8,y=9.2;
    cout << "Before swap function call: " << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    swap(x, y);

    cout << "After swap function call: " << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
}

/*
Value of a and b get change after the function call because we passed 'a' and 'b' by reference to the function.
When we pass a variable by reference, the actual variable is passed to the function.

How does Function Overloading work?
Function overloading allows us to have multiple functions with the same name 
but different parameter types or numbers of parameters. The compiler determines
which function to call based on the arguments provided during the function call.

If we delete the function swap(float &n, float &m) and try to call swap(x, y),
the compiler will throw an error because it won't find a matching function for the float parameters.
*/