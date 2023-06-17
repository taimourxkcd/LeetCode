class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;

        int n = s.size();
        int sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (mpp[s[i]] < mpp[s[i + 1]])
            {
                sum -= mpp[s[i]];
            }
            else
            {
                sum += mpp[s[i]];
            }
        }

        // Add the value of the last Roman numeral character
        sum += mpp[s[n - 1]];

        return sum;
    }
};
