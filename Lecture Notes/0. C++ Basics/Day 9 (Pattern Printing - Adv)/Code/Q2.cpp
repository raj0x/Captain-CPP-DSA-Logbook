#include <iostream>
using namespace std;

int main()
{
/*   //Actually this is a diff pattern than Q1 (see deeply), -->> VERY IMP STATEMEMT 
     //This Q2 is PYRAMID pattern not Q1 (NOT IT DOWN)      -->> VERY IMP STATEMEMT 
     //Q1 is HALF DIAMOND Pattern 
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/    
    int row,col,n;

    cout << "Enter the value of n: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)           //for no of spaces
        {
            cout << "  " ;
        }
        for(int kit=1; kit<=2*row-1; kit++)     //for no of (*) printed 
        {
            cout << "* " ;
        }
        cout << endl;
    }
}