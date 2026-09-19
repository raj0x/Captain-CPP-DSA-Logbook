#include <iostream>
using namespace std;

int main()
{
/*              // Pelendrome Series -->> Be same if read from starting or from ending of series...!
          1 
        1 2 1 
      1 2 3 2 1 
    1 2 3 4 3 2 1 
  1 2 3 4 5 4 3 2 1 
*/    
    int row,col,n;

    cout << "Enter the value of n: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout << "  " ; 
        }
        for(int kit=1; kit<=row; kit++)          //no need to take new new variable
        {                                        //you can you "col" instead of "kit"
            cout << kit << " " ;
        }
        for(int name=row-1; name>=1; name--)      //no need to take new new variable
        {                                         //you can you "col" instead of "name"
            cout << name << " " ;
        }
       cout << endl;
    }
}