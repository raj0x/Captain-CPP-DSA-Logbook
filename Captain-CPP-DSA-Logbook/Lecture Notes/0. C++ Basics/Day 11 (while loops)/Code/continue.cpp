#include <iostream>
using namespace std;

int main()
{
    int i,n;

    cout << "Enter the value of n: ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        if(i%4==0)
        continue;

        cout << i << endl;
    }
}

/* Here System wants only numbers to be printed which do not inlcude any nubmer which is devisible by 4
So, here we use Continue Statement that when i becomes 4 now nothing will read and print by system after
where Continue Statement is written and loop starts again with i = i + 1 (i.e i=5 here) without priniting i = 4,
same for 8,12,16,....so on...!

*/