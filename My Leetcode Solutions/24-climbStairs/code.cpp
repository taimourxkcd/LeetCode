class Solution
{
public:
    int climbStairs(int n)
    {
        n = n + 1;
        int prev2 = 0;
        int prev = 1;
        for (int i = 2; i <= n; i++)
        {
            int curr = prev + prev2;
            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
};