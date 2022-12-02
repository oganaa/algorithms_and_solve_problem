class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<vector<string>> ans(n + 1);
        ans[1].push_back("()");
        ans[0].push_back("");
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                for (int k = 0; k < ans[j].size(); k++)
                {
                    for (int l = 0; l < ans[i - 1 - j].size(); l++)
                    {
                        ans[i].push_back("(" + ans[j][k] + ")" + ans[i - 1 - j][l]);
                    }
                }
            }
        }
        return ans[n];
    }
};