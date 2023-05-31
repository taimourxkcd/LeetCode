class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
        {
            return false;
        }

        if (n == 1)
        {
            return true;
        }

        int p = 0;

        long long num = 1;
        while (num < n)
        {
            num = num * 3;
            if (num == n)
                return true;

            p = p + 1;
        }

        return false;
    }
};
