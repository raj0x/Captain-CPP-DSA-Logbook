#include <iostream>
using namespace std;

int main()
{
    /*
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5 
    */

     int row,col;

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=row; col++)  
        {
            cout<< col << " ";
        }
         cout<< endl;
    }

// if we change for(row=2; row<=6; row++)
// output will be
/*
1 2
1 2 3 
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/
//instead of 
/*
1                                   //bcz row = 1 does not exit
1 2                                 //means 1 would not print of 1st row
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6
*/

//another eg,
//for
/*
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

int row,col;

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=row; col++)  
        {
            cout<< row << " ";                 //replace col --> row
        }
         cout<< endl;
    }
    
}
