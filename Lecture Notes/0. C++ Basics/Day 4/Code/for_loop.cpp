#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=10; i=i+1)  // or use i++ or ++i
    {
        cout<<"Hello"<<endl;
    }


    //other example of for loop

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int count=1; count<=n; count++)
    {
        cout<<count<<endl;
    }


    //another example of for loop

    int m;
    cout<<"Enter a number: ";
    cin>>m;

    for(int i=1; i<=m; i++)   //same q as just previous one but here we are using "i" instead of "count"
    {
        cout<<i*i<<endl;

        // can also do this
        // count << i << " Square is: " << i*i << endl; 
        // it shows i square: is i*i 
    }


}