class Solution {
public:
    int addDigits(int num) {

        int ans = num;
        int rem;

        while(num>9)
        {
            ans = 0;

            while(num>0)
            {
                rem = num%10;
                num /= 10;
                ans = ans + rem;
            }
            num = ans;
        }

            return num;
        
    }
};

// REVISION NOTE: Setting 'ans = num' here fixes the single-digit bug. -->> eg num = 5;
// If a user inputs a single digit (like 5), the loop below (num > 9) is skipped entirely.
// By initializing 'ans = num', the program will correctly print the single digit 
// instead of printing random memory data (garbage values).