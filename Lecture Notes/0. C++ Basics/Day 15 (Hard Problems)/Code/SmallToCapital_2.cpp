#include <iostream>
using namespace std;

//===============CODERARMY-APPROACH=============//

char Convert(char name) //Here is a slight change, and gives as a Compact & Simple code...!
{
    char ans = name - 'a' + 'A'; 
    return ans;
}

int main()
{   
char Character;
cout << "Enter a chararter: ";
cin >> Character;

cout << "Capital of " << Character << " is : " << Convert(Character) << endl;

return 0;
}
