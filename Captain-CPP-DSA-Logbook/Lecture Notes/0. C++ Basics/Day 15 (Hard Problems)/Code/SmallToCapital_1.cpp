#include <iostream>
using namespace std;

//===============MY-APPROACH=============//

char Convert(char name)
{
    for(char i='a'; i<='z';i++) //My-Aproach (None-sense use of 'for_loops)...!
    {
       if(i = name)
       {
        char ans = i - 32; // can also use -->> char ans = name - 'a' + 'A'; -->> CoderArmy Soln
        return ans;
       }
       return 0;
    }
}

int main()
{   
char Character;
cout << "Enter a chararter: ";
cin >> Character;

cout << "Capital of " << Character << " is : " << Convert(Character) << endl;

return 0;
}
