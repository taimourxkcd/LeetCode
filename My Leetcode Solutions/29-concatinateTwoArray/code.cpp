class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {

        int n = nums.size();

        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[i];
        }
        for (int i = n, j = 0; i < 2 * n; i++, j++)
        {
            ans[i] = nums[j];
        }

        return ans;
    }
};