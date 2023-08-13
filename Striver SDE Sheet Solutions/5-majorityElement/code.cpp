class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map1;
        int n = nums.size() / 2;

        for (int i : nums)
            map1[i]++;

        for (const auto &num : map1)
        {
            if (num.second > n)
                return num.first;
        }

        return -1;
    }
};