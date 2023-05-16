class Solution
{
public:
    bool checkRecord(string s)
    {

        int n = s.size();
        int countA = 0, countL = 0, end = 0, start = 0;

        while (end < n)
        {
            if (s[end] == 'L')
                countL++;
            if (s[end] == 'A')
                countA++;

            if (end - start + 1 > 3)
            {
                if (s[start] == 'L')
                    countL--;
                start++;
            }

            if (countL == 3 || countA > 1)
                return false;
            end++;
        }
        return true;
    }
};