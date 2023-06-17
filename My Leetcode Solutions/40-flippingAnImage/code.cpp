class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {

        int row = image.size();

        int col = image[0].size();

        vector<vector<int>> ans(row, vector<int>(col));

        int k = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = col - 1; j >= 0; j--, k++)
            {
                ans[i][k] = 1 - image[i][j];
            }
            k = 0;
        }

        return ans;
    }
};