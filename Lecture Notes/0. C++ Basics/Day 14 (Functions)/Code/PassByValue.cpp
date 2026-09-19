#include <iostream>
using namespace std;

void Increment(int n) //pass by value
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
value of 'a' didnt change after the function call because we passed 'a' by value to the function.
When we pass a variable by value, a copy of the variable is made and passed to the function. 
Any changes made to the parameter inside the function do not affect the original variable outside the function.
*/