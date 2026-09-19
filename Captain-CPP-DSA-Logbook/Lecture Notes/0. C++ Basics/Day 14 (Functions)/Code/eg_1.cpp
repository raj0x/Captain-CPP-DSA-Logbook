#include <iostream>
using namespace std;

//eg_1 -->> function for checking prime number
bool Prime(int n) //single parameter
{
    if(n<2)
    {   
        return false;  // or can also cay -->> return 0;  // 0 means false
    }

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {

            return false;  // or can also cay -->> return 0;  // 0 means false
        }

    }
    //otherwise, if the number is prime, we return true
    return true;  // or can also cay -->> return 1;  // 1 means true
}


// ================= VOID PRIME FUNCTION =================
// In a void function, we don't return a value.
// So instead of returning true/false, we can directly use cout.

void PrimeVoid(int n)
{
    if(n<2)
    {
        cout << n << " is NOT a prime number." << endl; //when we are using void function, we have to use cout to print the result instead of returning a value
        return;  // No need to return anything when using void function.
    }

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout << n << " is NOT a prime number." << endl; //when we are using void function, we have to use cout to print the result instead of returning a value
            return;  // Exits the void function.
        }
    }

    cout << n << " is a prime number." << endl; //when we are using void function, we have to use cout to print the result instead of returning a value
}


//for checking factorial
int Factorial(int n=5) //Default parameter value is 5, if no value is passed then it will take 5 as default value
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    cout << Factorial() << endl; //will print 120 as default value is 5

    int a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    //a is prime or not
    cout << "Is " << a << " prime? " << Prime(a) << endl;

    //factorial of a
    cout << "Factorial of " << a << " is: " << Factorial(a) << endl;

    //b is prime or not
    cout << "Is " << b << " prime? " << Prime(b) << endl;

    //factorial of b
    cout << "Factorial of " << b << " is: " << Factorial(b) << endl;

    //a-b is prime or not
    cout << "Is " << a-b << " prime? " << Prime(a-b) << endl;

    //factorial of a-b
    cout << "Factorial of " << a-b << " is: " << Factorial(a-b) << endl;


    // ================= USING VOID FUNCTION =================

    cout << "\nUsing void Prime function:" << endl;

    PrimeVoid(a); //no need to use cout here as the function itself is printing the result
    PrimeVoid(b);
    PrimeVoid(a-b);

}