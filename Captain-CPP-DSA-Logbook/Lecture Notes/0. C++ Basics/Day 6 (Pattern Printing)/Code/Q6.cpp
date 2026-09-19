#include <iostream>
using namespace std;

int main()
{
int row,col,count;
count = 1;

for(row=1; row<=5; row++)
{
    for(col=1; col<=5; col++)
    {
        cout<<count<<" ";
        count = count + 1;
    }
    cout<<endl;
}

// Best Another Sol of same Q

    int row, col;

    for(row=1; row<=5; row=row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            cout<< (row-1)*5 +  col <<" ";
        }

        cout<<endl;
    }
}