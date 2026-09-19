// Easy-pisy (Easiest One Bruhhh...!)

#include <iostream>
using namespace std;

int Rect(int A, int B, int C, int D)
{
if ((A == B && C == D) || (A == C && B == D) || (A == D && B == C))
       
    return 1;
else
    return 0;
}

int main()
{
int a, b, c, d;
cout << "Enter your numbers: " << endl;
cin >> a >> b >> c >> d;

cout << "Output: " << Rect(a,b,c,d);
}
