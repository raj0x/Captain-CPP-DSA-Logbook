#include <iostream>
using namespace std;

int main()
// This is HALF DIAMOND Pattern (Q1)    -->> ** IMP THINGS TO BE NOTED **
/*
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
*/

{
    int row,col,n;
    cout << "Give the value of n: ";
    cin >> n;

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
}