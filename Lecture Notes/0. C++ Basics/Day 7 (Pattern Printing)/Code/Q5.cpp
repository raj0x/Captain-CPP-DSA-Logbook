#include <iostream>
using namespace std;

int main ()
{
    /*
    1 2 3 4 5
    1 2 3 4 
    1 2 3
    1 2
    1
    */

 int row,col;

    for(row=5; row>=1; row--)
    {   
        for(col=1; col<=row; col++)
        {
            cout << col <<" ";
        }
        cout << endl;
    }

    //Another Good Way for the above Q

      int row, col;

    for(row=1; row<=5; row=row+1)
    {
        for(col=1; col<=5-(row-1); col=col+1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}    