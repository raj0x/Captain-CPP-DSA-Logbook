#include <iostream>
using namespace std;

int main()
{
    int n,fact,i;
    cout<<"Enter the number: ";
    cin>>n;

    fact=1;
    for(i=1; i<=n; i=i+1)
    {
        fact = fact*i;
    }

    cout<<"The factorial of:"<<n<<" is "<<fact<<endl;
}

