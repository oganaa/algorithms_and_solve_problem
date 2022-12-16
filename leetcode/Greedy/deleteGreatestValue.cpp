class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        int col = grid.size();
        int row = grid[0].size();
        int minVal = INT_MIN;
        //    vector<vector<int>
        vector<int> ans(col);
        for (int i = 0; i < col; i++)
        {
            vector<int> v;
            for (int j = 0; j < row; j++)
            {
                v.push_back(grid[i][j]);
            }
            sort(v.begin(), v.end());
            grid[i] = v;
            v.clear();
        }
        int answer = 0;
        for (int i = 0; i < row; i++)
        {
            int minVal = INT_MIN;
            for (int j = 0; j < col; j++)
            {
                minVal = max(minVal, grid[j][i]);
            }
            answer = answer + minVal;
        }
        return answer;
    }
};