#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    while (num)               //writing (num) instead of (num>0) automtically understood (num) -->> (num>0) 
    {
        // reminder
        rem = num % 10;
        // num ko divide kar do
        num /= 10;                   // -->> num = num/10
        // ans
        ans += rem * mul;            // -->> ans = ans + rem * mul;
        // update multiplier
        mul *= 8;                    // mul = mul*8                     -->>Only Change is here from DecToOcta...!
    }

    cout << ans;
    return 0;
}