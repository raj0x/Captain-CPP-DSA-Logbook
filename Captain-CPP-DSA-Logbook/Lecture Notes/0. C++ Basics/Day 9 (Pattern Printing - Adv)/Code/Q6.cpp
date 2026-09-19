#include <iostream>
using namespace std;

int main()
{
    // Very GOOD & IMP Question

/*

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
    
*/
    
    int row,col,n;

    cout << "Enter the value of n: ";
    cin >> n;
    
// for this half
/*

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 

*/
        for(row=n; row>=2; row--)                      //row<=2 --->>> IMP things to be noted
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

//for this
/*

* * * * * * * * * * 

*/
        for(col=1; col<=2*n; col++)
        {
            cout << "* " ;
        }
        cout << endl;

//for this half
/*

* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 

*/
        for(row=2; row<=n; row++)                        //row=2 --->>> IMP things to be noted
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