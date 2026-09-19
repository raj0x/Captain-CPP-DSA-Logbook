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
    int m;
    char n;                                                               
    for(m=1; m<=5; m++)
    {
        for(n=97; n<=101; n++)
        {
            cout << n <<" " ;
        }
        cout << endl;
    }


    //Best Sol for the same Q

       int row,col;

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            char name = 'a' + (col-1);            // Most Imp Things To REM...!!!
            cout << name <<" " ;                  //We use this line after 32 bcz using it before 32 gives diff ans bcz col is
        }                                         //used for the first time in line 32 so before using its execution gives error
        cout << endl;
    }

}
