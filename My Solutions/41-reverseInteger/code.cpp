class Solution
{
public:
    int reverse(int x)
    {

        bool flag = x < 0;
        long long val = x;
        long long reverse = 0;

        if (flag)
        {
            val = -val;
        }

        while (val != 0)
        {
            reverse = reverse * 10 + val % 10;
            val = val / 10;
        }

        if (flag)
        {
            reverse = -reverse;
        }

        if (reverse > INT_MAX || reverse < INT_MIN)
        {
            return 0;
        }
        return reverse;
    }
};