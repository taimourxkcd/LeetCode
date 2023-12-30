class Solution {
public:
    int compress(vector<char>& chars) {

        string res = "";
        for(int i = 0, j; i < chars.size(); i=j){
            res += chars[i];
            for(j = i + 1; j < chars.size() && chars[i] == chars[j]; j++);
            if(j - i > 1){
                res += to_string(j-i);
            }
        }

        for(int i = 0; i < res.size(); i++){
            chars[i] = res[i];
        }

        return res.size();
        

    }
};