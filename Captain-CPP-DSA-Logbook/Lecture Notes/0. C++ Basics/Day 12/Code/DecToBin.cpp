#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    while (num > 0)
    {
        // reminder
        rem = num & 1;                   // -->> OR rem = num % 2;
        // qoutient
        num = num >> 1;  //this is right shift means divided by 2;  OR num = num / 2;   OR num /= 2;
        // ans
        ans += rem * mul;                    // ans = ans + rem * mul
        // mul
        mul *= 10;
    }

    cout << ans;
    return 0;
}