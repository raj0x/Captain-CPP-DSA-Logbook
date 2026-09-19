#include <iostream>
using namespace std;

int main()
{
    // 1 2 3 4 5 6 7 8 9 10                    -->> 1 to 10 (10 Numbers)

    int i;          
    i=1;             // Initial Value
    
    do{
        cout << i << " ";  

        i++;           // Update Value
    }
    while(i<=10);      // Break Value

//
    
    // If we make a slight change in code this result will come;
 
    // 2 3 4 5 6 7 8 9 10 11                 -->> 2 to 11 (10 Numbers)

    int i;          
    i=1;             // Initial Value
    
    do{
        i++;           // Update Value                 //for placing it vefore cout << i << " "; 
        cout << i << " ";                              //value of i get 2 instead of 1 when it comes of print i 

    }
    while(i<=10);      // Break Value
}