class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        int ansMax = 0;
        vector<int> dp(n, 0);
        for (int i = 0; i < n; i++)
        {
            dp[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ansMax = max(ansMax, dp[i]);
        }
        return ansMax;
    }
};