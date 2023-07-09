class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        // this automatically sort on the basis of the first value
        sort(intervals.begin(), intervals.end());

        int n = intervals.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {

            if (ans.size() == 0)
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                vector<int> &v = ans.back();
                int endValue = v[1];

                // [1,4] [2,5] = [1,5]
                if (intervals[i][0] <= endValue)
                {
                    v[1] = max(endValue, intervals[i][1]);
                }
                else
                {
                    // not overlapping case
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};