#include <iostream>
using namespace std;

int main()
{
    // Octal to Binary Conversion using While_loop
    // Follows the same two-step logic as Bin to Octa
    
    int num;
    cout << "Enter an Octal Number: ";
    cin >> num;

    int rem_1, rem_2, ans_1 = 0, ans_2 = 0, mul_1 = 1, mul_2 = 1;

    // Step 1: Octal to Decimal conversion

    while (num > 0)
    {
        // reminder
        rem_1 = num % 10;
        // num ko divide kar do
        num /= 10;
        // ans
        ans_1 += rem_1 * mul_1;
        // update multiplier (base 8 for octal)
        mul_1 *= 8;
    }

    // Step 2: Decimal to Binary conversion
    
    while (ans_1 > 0)
    {
        // reminder
        rem_2 = ans_1 % 2;
        // ans_1 ko divide kar do
        ans_1 /= 2;
        // ans
        ans_2 += rem_2 * mul_2;
        // update multiplier (base 10 for storing digits visually)
        mul_2 *= 10;
    }

    cout << "Binary Number: " << ans_2 << endl;

    return 0;
}
