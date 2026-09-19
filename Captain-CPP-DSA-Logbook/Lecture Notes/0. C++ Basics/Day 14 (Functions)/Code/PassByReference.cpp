#include <iostream>
using namespace std;

void Increment(int &n) //pass by reference -->> '&' this tells the difference between pass by value and pass by reference. 
{
    n++; //incrementing the value of n
    cout << "Value of n inside the function: " << n << endl; //printing the value of n inside the function
}

int main()
{
    int a = 5; //initializing a with value 5
    cout << "Value of a before function call: " << a << endl; //printing the value of a before function call
    Increment(a); //calling the function and passing 'a' as argument
    cout << "Value of a after function call: " << a << endl; //printing the value of a after function call

    return 0;
}

/*
value of 'a' changed after the function call because we passed 'a' by reference to the function.
When we pass a variable by reference, no copy is made; 'n' becomes another name for 'a' itself.
Any changes made to the parameter inside the function directly affect the original variable outside the function.
*/