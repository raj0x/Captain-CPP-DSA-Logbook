#include <iostream>
using namespace std;

int main()
{
    char alpha;
    cout << "Enter an alpha: ";
    cin >> alpha;

    // combine them using logical OR operator (||) instead of using if else multiple times
    if (alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
    {
        cout << "The alphabet is a vowel." << endl;
    }
    else
    {
        cout << "The alphabet is a consonant." << endl;
    }


}