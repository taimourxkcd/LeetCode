// optimized solution

class Solution
{
public:
    bool compare(string &haystack, int start, int len, string &needle)
    {
        int i = start;
        int j = 0;
        while (len--)
        {
            if (haystack[i] != needle[j])
                return false;
            i++;
            j++;
        }
        return true;
    }

    int strStr(string haystack, string needle)
    {

        int len = needle.size();

        int start = 0;

        while (start + len <= haystack.size())
        {
            string str = haystack.substr(start, len);

            if (compare(haystack, start, len, needle))
                return start;
            start++;
        }

        return -1;
    }
};

// sliding window approch 

class Solution {
public:
    int strStr(string haystack, string needle) {

        int len = needle.size();

        int start = 0;

        while(start + len <= haystack.size()){
            string str = haystack.substr(start, len);

            if(str == needle) return start;
            start++;
        }

        return -1;

    }
};