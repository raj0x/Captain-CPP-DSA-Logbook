//==============My-Approach===========//

#include <iostream>
#include <cmath> //I use it here so that pow(x,y) works
using namespace std;

bool Armstrong(int num)
{
    int rem;
    int ans = 0;

    int num2 = num;
    int num3 = num;
    
    //Counting of total no of digits in num;
    int digits = 0;
    while(num2>0)
    {
        num2 /= 10;
        digits++;
    }

    while(num3>0)
    {
        rem = num3%10;
        num3 /= 10;
        double value = round(pow(rem,digits)); // means "rem" to the power "digits"...!
       //pow(rem,digits) -->>only used if we use #inlcude <cmath> 
       ans =  value + ans;
    }

    if(ans == num)
    {
        return true;
    }
        return false;
}

int main()
{   
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(Armstrong(n))
    {
        cout << "Is " << n << " an Armstrong Number: " << "Yes" <<endl;
    }
    else
    {
        cout << "Is " << n << " an Armstrong Number: " << "No" <<endl; 
    }
}