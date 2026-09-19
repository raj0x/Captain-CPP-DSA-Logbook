//Good Questions -->> cos I am not able to solve it even after give my fcking 2hr to this shit...!

#include <iostream>
using namespace std;

double fact(int num)
{
    double ans = 1;
    for(int i=1; i<=num; i++)
    {
        ans = ans*i;
    }
     return ans;
}     

int trail(double ans)
{
    int count = 0;
    int n = ans;
    while(n>=5)
    {
        count = count + n/5;
        n /= 5;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter your factorial: ";
    cin >> n;

    cout << "Total Trailing zeroes: " << trail(n);
}