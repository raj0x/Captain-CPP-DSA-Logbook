// Use swap fuction without writing the swap function actually...!

// This is possible because C++ has a built-in swap function in the <algorithm> header file.
// The built-in swap function can be used to swap two numbers without writing our own swap function.
// The built-in swap function is a template function that can be used to swap two numbers of any data type.

// Note (Very Important):
/*While writing swap(a,b) -->> 's' in swap is small letter, but while using built-in swap function we have to write 'S' in Swap as capital letter.
 The built-in swap function is defined in the <algorithm> header file, so we need to include it in our code.
 like #inlcude <algorithm> header file, but in this code we are not including it because it is already included in the <iostream> header file for small 's' small 's' swap function, but for capital 'S' Swap function we need to include <algorithm> header file.
*/

//There are many in built functions in C++ that we can use without writing our own function, like square(), sort(), reverse(), max(), min(), etc.

#include <iostream>
using namespace std;

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

    swap(a, b); //calling the built-in swap function and passing 'a' and 'b' as arguments

    cout << "After swap function call: " << endl;
    cout << "Value of a: " << a << endl; //printing the value of a after function call
    cout << "Value of b: " << b << endl; //printing the value of b after function call

}