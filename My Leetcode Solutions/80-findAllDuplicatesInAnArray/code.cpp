class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {

        unordered_map<int, int> map1;

        for (int i : nums)
            map1[i]++;

        vector<int> ans;

        for (const auto &num : map1)
        {
            if (num.second == 2)
                ans.push_back(num.first);
        }

        return ans;
    }
};