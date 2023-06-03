class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        vector<int> diff;
        if (nums.size() < 3)
            return 0;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            diff.push_back(nums[i + 1] - nums[i]);
        }

        int count = 0;

        for (int i = 0; i < diff.size(); i++)
        {
            for (int j = i + 1; j < diff.size(); j++)
            {
                if (diff[i] == diff[j])
                    count++;
                else
                    break;
            }
        }

        return count;
    }
};