#include <iostream>
using namespace std;

int main()
{
/*
            A
          B B
        C C C
      D D D D
    E E E E E
  F F F F F F 
*/ 

    int row,col,n;         // if n--> 5 means n = 'E' ; 
    
    cout << "Give the value of n: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
       char kit = 'A' + (row-1);

        for(col=1; col<=n-row; col++)
        {
            cout << "  " ;
        }
        for(col=1; col<=row; col++)
        {
            cout << kit << " ";            
        }
        cout << endl;
    }
    
}