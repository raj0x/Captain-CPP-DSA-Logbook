#include <iostream>
using namespace std;

int main()
{
    int sum,n,i;
    cout<<"Enter the number: ";
    cin>>n;

    sum=0;
    for(i=1; i<=n; i=i+1)
    {
        sum = sum + i;
    }
    cout<<"The sum is:"<<sum<<endl;


    //Best SOL FOR SUM OF N NUMBERS IS: n*(n+1)/2

    /*
    int n,sum,i;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The sum is:"<<n*(n+1)/2<<endl;
    */
}


/* for sum of squares of n numbers:

    int n,sum,i;
    cout<<"Enter the number: ";
    cin>>n;

    sum=0;
    for(i=1; i<=n; i=i+1)
    {
        sum = sum + (i*i);                          //OR Best SOL Use n*(n+1)*(2*n+1)/6
    }
    cout<<"The sum of squares is:"<<sum<<endl;



*/