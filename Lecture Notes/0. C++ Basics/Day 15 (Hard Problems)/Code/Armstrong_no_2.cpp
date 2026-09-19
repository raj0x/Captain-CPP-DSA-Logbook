//==============CoderArmy-Approach===========//
//here we use only 2 variable like n,num not like num,num2,num3
//you always to find a way and to compact code from using min variables 

#include <iostream>
#include <cmath> //I use it here so that pow(x,y) works
using namespace std;

int CountDigit(int n)
{
    int count=0;
    while(n)
    {
        n /= 10;
        count++;
    }
        return count;
}

bool Armstrong(int num,int digit)
{
    int n = num, ans=0, rem;
    while(n)
    {
        rem = n%10;
        n /= 10;
        double power = pow(rem,digit);
        ans = ans + power;
    }

    if(ans == num)
    {
        return true;
    }
    else
       return false;
}


int main()
{   
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int digit = CountDigit(num);
    
    if(Armstrong(num,digit))
    {
        cout << "Is " << num << " an Armstrong Number: " << "Yes" <<endl;
    }
    else
    {
        cout << "Is " << num << " an Armstrong Number: " << "No" <<endl; 
    }
}