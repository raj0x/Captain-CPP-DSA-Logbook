#include <iostream>
using namespace std;

int main()

{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i=2; i<=num; i=i+2)
    {
        cout << i << endl;

    }

    // can write the same code in a different way as well, which is better one

    int number;
    cout << "Enter a number: ";
    cin >> number;

    for(int i=1; i<=number; i=i+1)
    {
    if(i%2==0)
    {
        cout << i << endl;
    }
    else
    {
        
    }

}

}