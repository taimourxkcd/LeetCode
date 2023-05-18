class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        // paritition algorithm

        int n = nums.size();
        int l = 0;

        for (int i = 0; i < n; i++)
        {

            if (nums[l] == 0 && nums[i] != 0)
            {
                swap(nums[l], nums[i]);
            }

            if (nums[l] != 0)
            {
                l += 1;
            }
        }
    }
};