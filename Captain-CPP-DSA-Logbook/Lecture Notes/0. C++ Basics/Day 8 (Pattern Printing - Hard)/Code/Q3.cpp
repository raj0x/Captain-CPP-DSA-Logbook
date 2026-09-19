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

    int row,col,n;
    
    cout << "Give the value of n: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout << "  " ;
        }
        for(col=1; col<=row; col++)
        {
            cout << col << " ";             // row --> col (from Q2)
        }
        cout << endl;
    }
    
}