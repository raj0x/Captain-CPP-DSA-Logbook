#include <iostream>
using namespace std;

// Function declaration/prototype:
// Tells the compiler about the function before it is used.

int sum(int n,int m)   //multiple parameters
{
    int ans = n + m;   // Function definition: actual code of the function
    return ans;        // Returns an int value to the place where function was called
}

int mul(int n, int m)   
{
    int ans  = n * m;   // Function definition
    return ans;         // Returns an int value
}

// VOID FUNCTION EXAMPLE:
// void = function does NOT return any value
void greet()
{
    cout << "Hello!";   // Performs an action but returns nothing
}

int main()
{
    int a,b;
    cout << "Enter first numbers: " << endl;
    cin >> a;
    cout << "Enter second numbers: " << endl;
    cin >> b;

    // Function call:
    // Calling the function and passing a and b as arguments
    cout << "Sum of two numbers is: " << sum(a,b) << endl;
    
    // Function call:
    // mul(a,b) sends a and b to the mul function
    cout << "Product of two numbers is: " << mul(a,b) << endl;

    // Calling a void function:
    // It does not return a value, so it cannot be used like sum(a,b)
    greet();

    // PARAMETERS:
    // n and m → parameters (variables received by the function)
    
    // ARGUMENTS:
    // a and b → arguments (actual values passed to the function)

    // RETURN:
    // return ans → sends the calculated value back to the caller

    // int FUNCTION:
    // A function declared with int must return an integer value.

    // void FUNCTION:
    // A function declared with void does not return any value.

    // FUNCTION DECLARATION:
    // int sum(int n, int m);
    // This tells the compiler the function's name, return type and parameters.
    
    // FUNCTION DEFINITION:
    // The complete body { } of the function where the actual work is written.

    // FUNCTION CALL:
    // sum(a,b), mul(a,b), greet()
    // This is where we actually execute/call the function.
}