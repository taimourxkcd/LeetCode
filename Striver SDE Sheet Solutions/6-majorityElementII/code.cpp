class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map1;
        int n = nums.size() / 3;
        vector<int> res;

        for (int i : nums)
            map1[i]++;

        for (const auto &num : map1)
        {
            if (num.second > n)
                res.push_back(num.first);
        }

        return res;
    }
};