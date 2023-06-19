class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        vector<vector<int>> dp(matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0));
        int maxLen = 0;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == '1')
                {
                    dp[i + 1][j + 1] = 1 + min(dp[i][j], min(dp[i][j + 1], dp[i + 1][j]));
                    maxLen = max(maxLen, dp[i + 1][j + 1]);
                }
            }
        }

        return maxLen * maxLen;
    }
};