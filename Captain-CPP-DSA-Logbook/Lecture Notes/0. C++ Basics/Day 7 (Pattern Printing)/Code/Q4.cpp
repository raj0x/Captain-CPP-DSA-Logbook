#include <iostream>
using namespace std;

int main()
{
    /*
    a 
    b b 
    c c c 
    d d d d 
    e e e e e 
    */
   
    char row,col;

    for(row='a'; row<='e'; row++)
    {
        for(col='a'; col<=row; col++)
        {
            cout << row <<" ";
        }
        cout << endl;
    }

// Another Good SOL

 int row,col;

    for(row=1; row<=5; row++)
    {
        char kit = 'a' + (row-1);
        
        for(col=1; col<=row; col++)
        {
            cout << kit <<" ";
        }
        cout << endl;
    }
}
