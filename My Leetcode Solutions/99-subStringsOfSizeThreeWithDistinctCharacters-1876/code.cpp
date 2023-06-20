class Solution
{
public:
    int countGoodSubstrings(string s)
    {

        int n = s.size();
        int end = 0, start = 0;
        set<char> goodS;
        int total = 0;

        if (s.size() == 1)
            return 0;
        for (int i = 0; i < s.size() - 2; i++)
        {
            goodS.clear();
            for (int j = i; j < i + 3; j++)
            {
                goodS.insert(s[j]);
            }
            if (goodS.size() == 3)
                total++;
        }
        return total;
    }
};