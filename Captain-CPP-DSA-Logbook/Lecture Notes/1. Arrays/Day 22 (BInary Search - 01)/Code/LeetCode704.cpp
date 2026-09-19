class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int start = 0, end = n - 1, mid;

        while (start <= end)
        {
            mid = start + ((end - start) / 2); //NOTE THIS IMPORTANT THING warna overflow error de dega (most probably)
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }
};