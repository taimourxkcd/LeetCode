class Solution
{
public:
    bool checkIfPangram(string sentence)
    {

        int n = sentence.size();

        set<char> uniqueChars;

        // Insert each character of the string into the set
        for (char c : sentence)
        {
            uniqueChars.insert(c);
        }

    

        return uniqueChars.size() == 26;
    }
};