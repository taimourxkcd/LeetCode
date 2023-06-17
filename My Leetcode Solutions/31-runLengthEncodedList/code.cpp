class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i += 2)
        {
            int val = nums[i + 1];
            int freq = nums[i];

            while (freq--)
            {
                ans.push_back(val);
            }
        }

        return ans;
    }
};