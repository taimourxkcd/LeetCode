class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {

        int n = words.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            string temp = words[i];
            string str = "";
            for (int j = 0; j < temp.size(); j++)
            {
                str += temp[j];
                if (str == pref)
                {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};