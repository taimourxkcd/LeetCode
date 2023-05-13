class Solution
{
public:
    bool isPalindrome(string s)
    {

        int n = s.size();

        string str = "";
        for (int i = 0; i < n; i++)
        {
            if (isalnum(s[i]))
            {
                char lower = tolower(s[i]);
                str += lower;
            }
        }

        int left = 0;
        int right = str.size() - 1;
        bool flag = true;
        while (left < right)
        {
            if (str[left] != str[right])
            {
                flag = false;
                break;
            }
            left++;
            right--;
        }

        return flag;
    }
};