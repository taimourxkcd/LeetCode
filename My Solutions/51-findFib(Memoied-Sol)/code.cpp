class Solution
{
public:
    int fib(int n)
    {
        vector<int> memo(n + 1, -1);
        int ans = sol(n, memo);
        return ans;
    }

    int sol(int n, vector<int> &memo)
    {
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        else if (memo[n] != -1)
        {
            return memo[n];
        }
        else
        {
            memo[n] = sol(n - 1, memo) + sol(n - 2, memo);
            return memo[n];
        }
    }
};


// Normal Sol with recursion
class Solution
{
public:
    int fib(int n)
    {
        int ans = sol(n);
        return ans;
    }

    int sol(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        else
        {
            return sol(n - 1) + sol(n - 2);
        }
    }
};