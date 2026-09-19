#include <iostream>
using namespace std;

int main()
{
    // Another way for Q5 in the way or style of Q1 to Q4 ;
/*
        A 
      A B 
    A B C 
  A B C D 
A B C D E 
*/ 

    int row,col,n;         // if n--> 5 means n = 'E' ; 
    
    cout << "Give the value of n: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout << "  " ;
        }

       for(col=1; col<=row; col++)           //Here is the diff btw code of Q5 and Q6 bcos both Q & output are same
        {                         
          char name = 'A' + (col-1);
          cout << name << " " ;
        }

        cout << endl;
    }
}