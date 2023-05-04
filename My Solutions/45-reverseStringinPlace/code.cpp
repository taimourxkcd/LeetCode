class Solution
{
public:
    void reverseString(vector<char> &s)
    {

        int f = 0;
        int l = s.size() - 1;

        while (f <= l)
        {
            char c = s[f];
            s[f] = s[l];
            s[l] = c;
            f++;
            l--;
        }
    }
};