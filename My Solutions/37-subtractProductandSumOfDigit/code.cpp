class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int product = 1;
        int sum = 0;
        while (n != 0)
        {
            int i = 10;
            int temp = n % 10;
            sum += temp;
            product = product * temp;
            n = n / 10;
        }
        return product - sum;
    }
};