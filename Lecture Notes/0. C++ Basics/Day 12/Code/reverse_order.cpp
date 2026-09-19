#include <iostream>
using namespace std;

int main()
{
    // Writing given input number into reverse order...!          -->> Good Question

    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0;

    while (num)               //writing (num) instead of (num>0) automtically understood (num) -->> (num>0) 
    {
        // reminder
        rem = num % 10;
        // num ko divide kar do
        num /= 10;                   // -->> num = num/10
        // ans
        ans = ans*10 + rem;
    }

    cout << ans;
    return 0;
}