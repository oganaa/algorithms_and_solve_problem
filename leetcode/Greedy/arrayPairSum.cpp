class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i = i + 2)
        {
            ans = ans + nums[i];
        }
        return ans;
    }
};