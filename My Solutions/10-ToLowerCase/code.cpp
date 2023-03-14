class Solution {
public:
    string toLowerCase(string s) {
        
        

        for(int i = 0; i < s.length(); i++){
            if(s[i] == toupper(s[i])){
                s[i] = tolower(s[i]);
            }
        }

        return s;

    }
};