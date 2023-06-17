class Solution
{
public:
    int minMaxGame(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];

        int i = 0;
        while (nums.size() != 1)
        {

            int n = nums.size() / 2;
            vector<int> ans(n);

            for (int i = 0; i < ans.size(); i++)
            {
                if (i % 2 == 0)
                {
                    ans[i] = min(nums[2 * i], nums[2 * i + 1]);
                }
                else
                {
                    ans[i] = max(nums[2 * i], nums[2 * i + 1]);
                }
            }
            nums.resize(n);
            copy(ans.begin(), ans.end(), nums.begin());
        }
        return nums[0];
    }
};