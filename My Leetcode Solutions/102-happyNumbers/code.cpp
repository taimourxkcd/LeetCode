class Solution
{
public:
    int findSum(int n)
    {
        int sum = 0;
        while (n)
        {
            int dig = n % 10;
            sum += dig * dig;
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n)
    {

        unordered_set<int> visited;

        while (n != 1)
        {

            if (visited.count(n))
                return false;
            visited.insert(n);
            n = findSum(n);
        }
        return true;
    }
};

// can also be done using the slow and fast pointer approch