#include <iostream>
using namespace std;

int main()
{
    // Binary to Octal Conversion using While_loop (but if we do this using for_loop,
    // it may becomes more easy to make the code compact and look good also)

    int num;
    cout << "Enter a Binary Number: ";
    cin >> num;

    int rem_1, rem_2, ans_1 = 0, ans_2 = 0, mul_1 = 1, mul_2 = 1;

    //Step 1: Binary to Decimal conversion
    while (num)         
    {
        // reminder
        rem_1 = num % 10;
        // num ko divide kar do
        num /= 10;               
        // ans
        ans_1 += rem_1 * mul_1;          
        // update multiplier (base 2 for binary)
        mul_1 *= 2;                   
    }

     // Step 2:Decimal to Octal conversion

        while (ans_1 > 0)
    {
        // reminder
        rem_2 = ans_1 % 8;                    
        // qoutient
        ans_1 = ans_1 / 8;                        
        // ans
        ans_2 = ans_2 + rem_2 * mul_2;
        // update multiplier (base 10 for storing digits visually)
        mul_2 *= 10;
    }

    // Crucial step: Output the final answer!

    cout << "Octal equivalent: " << ans_2 << endl;

    return 0;
}