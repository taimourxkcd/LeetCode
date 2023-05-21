class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {

        int totalSum = 0;

        for (int n : nums)
            totalSum += n;

        int l = 0, r = totalSum;

        for (int i = 0; i < nums.size(); i++)
        {
            r = r - nums[i];
            if (r == l)
                return i;

            l = l + nums[i];
        }

        return -1;
    }
};