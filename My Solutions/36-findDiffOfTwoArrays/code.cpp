class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<vector<int>> ans(2, vector<int>());
        set<int> mySet1;
        set<int> mySet2;

        for (int i = 0; i < nums1.size(); i++)
        {
            mySet1.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            mySet2.insert(nums2[i]);
        }

        for (auto n : mySet1)
        {
            if (!mySet2.count(n))
                ans[0].push_back(n);
        }

        for (auto n : mySet2)
        {
            if (!mySet1.count(n))
                ans[1].push_back(n);
        }

        return ans;
    }
};