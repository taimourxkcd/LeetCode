class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int l = 1;
        vector<int> ans(piles.size());
        copy(piles.begin(), piles.end(), ans.begin());
        sort(ans.begin(), ans.end());
        int end = piles.size() - 1;
        int r = ans[end];

        int res = r;

        while (l <= r)
        {
            int k = (l + r) / 2; // k is mid

            long long totalTime = 0;

            for (int i = 0; i < piles.size(); i++)
            {
                totalTime += ceil(piles[i] / (double)k); // Use double division to get accurate ceil value
            }

            if (totalTime <= h)
            {
                res = min(res, k);
                r = k - 1;
            }
            else
            {
                l = k + 1;
            }
        }

        return res;
    }
};