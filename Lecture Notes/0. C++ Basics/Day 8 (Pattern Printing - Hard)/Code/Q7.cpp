#include <iostream>
using namespace std;

int main()
{
/*
        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1 
*/    
    int row,col,n;

    cout << "Enter the value of n: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout << "  " ;
        }
        for(int kit=row; kit>=1; kit--)   // **Very IMP Line**    //You can also use "col" insted of "kit" for variable
        {                                                         //do not need to introduce new variable -- "kit"
            cout << kit << " " ;
        }
        cout << endl;
    }
}