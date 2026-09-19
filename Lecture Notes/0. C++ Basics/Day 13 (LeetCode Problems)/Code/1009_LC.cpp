class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0)                      //VERY IMP Condition: for a very good test case
            return 1;                    //where n = 0, output will be 1, from while(n)
        int ans = 0, rem, mul = 1;       //output will be 0 not 1, so that' why we use 
        while (n)                        //if(n == 0) and then return 1;
        {
            rem = (n & 1) ^ 1;
            ans += rem * mul;
            mul *= 2;
            n = n >> 1;
        }

        return ans;        
    }
};