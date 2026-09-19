#include <iostream>
using namespace std;

int main()
// This is FULL DIAMOND Pattern (Q7)    -->> ** IMP THINGS TO BE NOTED **
//Continution of (Q1) ...!
/*
   * 
  * * 
 * * * 
* * * * 
* * * * 
 * * * 
  * * 
   * 
*/

{
    int row,col,n;
    cout << "Give the value of n: ";
    cin >> n;

//for this half
/*

    * 
   * * 
  * * * 
 * * * * 
* * * * * 

*/
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout << " " ;          // One space is less than in Q1 from Day 8 for prinitng HALF DIAMOND Pattern
        }    
            for(col=1; col<=row; col++)
            {
                cout << "* " ;   
            }
        cout << endl;
    }

//for this half
/*

* * * * * 
 * * * * 
  * * * 
   * * 
    * 
    
*/

        for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            cout << " " ;          // One space is less than in Q1 from Day 8 for prinitng HALF DIAMOND Pattern
        }    
            for(col=1; col<=row; col++)
            {
                cout << "* " ;   
            }
        cout << endl;
    }
}