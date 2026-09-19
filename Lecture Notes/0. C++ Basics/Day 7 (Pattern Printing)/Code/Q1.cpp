#include <iostream>
using namespace std;

int main()

{
    /*
    *
    * *
    * * *
    * * * *
    * * * * *
    */
    int row,col;

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=row; col++)  //to print * no of row times, we have to use this, which is col<=row
        {
            cout<< '*' << " ";
        }
         cout<< endl;
    }

    //Another eg
    /*
    * * * * *
    * * * *
    * * *
    * * 
    * 
    */

    int row,col;

    for(row=5; row>=1; row--)                   //only this got a little change 
    {
        for(col=1; col<=row; col++)
        {
            cout<< '*' << " ";
        }
         cout<< endl;
    }

// Another way of Same Above Q :-

{
    int row, col;

    for(row=1; row<=5; row=row+1)
    {
        for(col=1; col<=5-(row-1); col=col+1)             //using relation btw row and no of time *
        {                                                 //such as
            cout<<"* ";                                 
        }                                               //  1 --> 5
           cout<<endl;                                  //  2 --> 4
    }                                                   //  3 --> 3
}                                                       //  4 --> 2
                                                        //  5 --> 1
}                                                          