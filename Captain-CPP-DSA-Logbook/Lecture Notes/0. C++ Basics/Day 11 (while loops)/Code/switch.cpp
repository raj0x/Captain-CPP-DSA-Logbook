#include<iostream>
using namespace std;

int main()
{
    int i;                              // can also use char i;
    cout << "Enter the number: ";
    cin >> i;

    switch (i)
    {
        case 1:                       //if use char then write char 'a':
            cout << "Mon";
            break;

        case 2:                       //if use char then write char 'b':
            cout << "Tue";
            break;

        case 3:                       //if use char then write char 'c':
            cout << "Wed";
            break;

        case 4:                       //if use char then write char 'd':
            cout << "Thu";
            break;

        case 5:                        //if use char then write char 'e':
            cout << "Fri";
            break;

        case 6:                        //if use char then write char 'f':
            cout << "Sat";
            break;

        case 7:                        //if use char then write char 'g':
            cout << "Sun";
            break;

        default:
            cout << "Invalid input! Please enter a number between 1 and 7.";     // btw 'a' to 'g' 
            break;
    }

    cout << endl; 
    return 0;
}
