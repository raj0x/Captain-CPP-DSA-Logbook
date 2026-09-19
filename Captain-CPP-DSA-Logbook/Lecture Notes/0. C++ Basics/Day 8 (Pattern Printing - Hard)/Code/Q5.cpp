#include <iostream>
using namespace std;

int main()
{
/*
        A 
      A B 
    A B C 
  A B C D 
A B C D E 
*/ 

    int row,col,n;         // if n--> 5 means n = 'E' ; 
    
    cout << "Give the value of n: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout << "  " ;
        }

        for(char kit = 'A'; kit <='A'+(row-1); kit++)      // ** Very Important Line ** 
        {
            cout << kit << " " ;
        }

        cout << endl;
    }
}