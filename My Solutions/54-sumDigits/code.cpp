class Solution
{
public:
    int addDigits(int num)
    {

        if (num == 0)
        {
            return num;
        }

        else if (num % 9 == 0)
        {
            return 9;
        }
        else
        {
            int ans = num % 9;
            ;
            return ans;
        }
    }
};