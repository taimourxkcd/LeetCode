class Solution
{
public:
    string addSpaces(string s, vector<int> &spaces)
    {
        sort(spaces.begin(), spaces.end());
        int k = 0;
        string ans = "";
        int count = 0;

        for (char ch : s)
        {
            if (k < spaces.size() && count == spaces[k])
            {
                ans += ' ';
                k++;
            }
            ans += ch;
            count++;
        }

        return ans;
    }
};