#include <iostream>
using namespace std;

int main()
{
 
    /*
    a b c d e
    a b c d e
    a b c d e
    a b c d e
    a b c d e
    */
       int row;

    for(row=1; row<=5; row++)
    {
        for(char col='a'; col<='e'; col++)
        {
            cout << col <<" " ;
        }
        cout << endl;
    }


    // Another Q
    /*
    a a a a a
    b b b b b
    c c c c c 
    d d d d d
    e e e e e
    */

      int row,col;

    for(row=1; row<=5; row++)
    {
        char name = 'a' + (row-1);     
        for(col=1; col<=5; col++)
        {       
            cout << name <<" " ;                 
        }                                     
        cout << endl;
    }
}


