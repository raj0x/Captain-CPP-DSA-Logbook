#include <iostream>
using namespace std;

int main()
{
    // Very GOOD & IMP Question

/*

* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
    
*/

//for this half
/*

* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 

*/
     int row,col,n;

    cout << "Enter the value of n: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=n-(row-1); col>=1; col--)
        {
            cout << "* " ;
        }
        for(col=1; col<=2*(row-1); col++)
        {
            cout << "  " ;
        }
        for(col=1; col<=n-(row-1); col++)
        {
            cout << "* " ;
        }
    
        cout << endl;
    }

//for this half
/*

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 

*/
        for(row=n; row>=1; row--)
    {
        for(col=n-(row-1); col>=1; col--)
        {
            cout << "* " ;
        }
        for(col=1; col<=2*(row-1); col++)
        {
            cout << "  " ;
        }
        for(col=1; col<=n-(row-1); col++)
        {
            cout << "* " ;
        }
    
        cout << endl;
    }
    
}