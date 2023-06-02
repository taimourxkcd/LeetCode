class Solution
{
public:
    int numSplits(string s)
    {

        // traverse through the whole string. so i know the no of distict characters
        unordered_map<char, int> map1, map2;
        for (char ch : s)
            map1[ch]++;


        int count = 0;
        for (char ch : s)
        {
            map2[ch]++;
            map1[ch]--;

            if (map1[ch] == 0)
                map1.erase(ch);

            if (map2.size() == map1.size())
                count++;
        }

        return count;
    }
};