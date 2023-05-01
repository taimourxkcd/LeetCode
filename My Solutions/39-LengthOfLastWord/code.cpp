class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.size();

        int count = 0;

        int j = n - 1;
        while (s[j] == ' ')
        {
            n--;
            j--;
        }

        for (int i = n - 1; i >= 0; i--)
        {

            if (s[i] == ' ')
                break;
            count++;
        }
        return count;
    }
};