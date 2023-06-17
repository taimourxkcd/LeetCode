class Solution
{
public:
    int transformCount(int num)
    {
        int count = 0;
        while (num != 1)
        {
            if (num % 2 == 0)
            {
                num = num / 2;
            }
            else
            {
                num = (3 * num) + 1;
            }
            count++;
        }
        return count;
    }

    int getKth(int lo, int hi, int k)
    {
        vector<pair<int, int>> ans; // pair of (power value, integer value)
        for (int i = lo; i <= hi; i++)
        {
            int c = transformCount(i);
            ans.push_back({c, i});
        }

        sort(ans.begin(), ans.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             {
            if (a.first == b.first) {
                return a.second < b.second;
            }
            return a.first < b.first; });

        return ans[k - 1].second;
    }
};
