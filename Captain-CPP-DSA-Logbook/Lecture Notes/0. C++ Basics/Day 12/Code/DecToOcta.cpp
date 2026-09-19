#include <iostream>
using namespace std;

int main()
{
    // Octa Fomr Consists no. for 0 -->> 7 (0,1,2,3,4,5,6,7)  -->> Total 8 Numbers

    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    while (num > 0)
    {
        // reminder
        rem = num % 8;                         // -->> Change is here from DecToBin 
        // qoutient
        num = num / 8;                         // -->> Only Change is here from DecToBin 
        // ans
        ans = ans + rem * mul;
        // mul
        mul *= 10;
    }

    cout << ans;
    return 0;
}