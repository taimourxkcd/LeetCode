class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxCount = 0, count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {

            if (nums[i] == 1)
            {
                count++;
                maxCount = max(maxCount, count);
            }
            else
            {
                count = 0;
            }
        }

        return maxCount;
    }
};