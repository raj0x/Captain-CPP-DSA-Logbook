#include <iostream>
using namespace std;

int main()
/*
        * 
      * * 
    * * *          // --> this is eg for n=5;
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
            cout << "  " ;         // 1 Space for writing space and other space for space btw * and space -->> VERY VERY IMP LINE
        }    
            for(col=1; col<=row; col++)
            {
                cout << "* " ;    // space for btw of * and * --> * * 
            }
        cout << endl;
    }
}