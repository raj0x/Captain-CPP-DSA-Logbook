#include <iostream>
using namespace std;

int main ()
{
    /*
    1 1 1 1 1 
    2 2 2 2 2 
    3 3 3 3 3 
    4 4 4 4 4 
    5 5 5 5 5     
    */

    int row,col;
    
    for (row=1;row<=5; row=row+1)
    {
        for (col=1; col<=5; col=col+1)
        {
            cout <<row <<" ";
        }
          cout << endl;
    }

/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/

 int row,col;
    
    for (row=1;row<=5; row=row+1)
    {
        for (col=1; col<=5; col=col+1)
        {
            cout <<col <<" ";           // row --> col
        }
          cout << endl;
    }

    /*
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    */

 int row,col;
    
    for (row=1;row<=5; row=row+1)
    {
        for (col=5; col>=1; col=col-1)
        {
            cout <<col <<" ";          
        }
          cout << endl;
    }




}    

