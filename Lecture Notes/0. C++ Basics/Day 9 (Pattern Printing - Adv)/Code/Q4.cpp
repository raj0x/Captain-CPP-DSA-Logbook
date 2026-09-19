#include <iostream>
using namespace std;

int main()
{
/*
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/    
    int row,col,n;

    cout << "Enter the value of n: ";
    cin >> n;
    
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=5-row; col++)
        {
            cout << "  " ;
        }
        for(col=1; col<=2*row-1; col++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
}