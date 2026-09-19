// Q-912. Sort in Array
// Given below is a bad sol, bcos it give O(n^2)
// Q-912. Says sove such that Worste case is O(nlog(n))
// for this we learn some new things in future which helps us
// to solve this like this way...
// Solve this Q again after learning that new concept...!!! 

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
               
        for(int i=0;i<n-1;i++)
    {
        int idx = i;
        for(int j=i+1;j<n;j++)
        {
            if(nums[j] < nums[idx])
            idx = j;
        }

        swap(nums[i],nums[idx]);
    
    }
    
        return nums;
    }
};