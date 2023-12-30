class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int left = startIndex;
        int right = startIndex;
        int n = words.size();
            
        if(words[startIndex] == target) return 0;

        for(int i = 0; i < words.size(); i++){
            if(words[i] == target) break;
            if(words.size() - 1 == i && words[i] != target) return -1;
        }

        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            if(words[(right + 1) % n] == target || words[(left - 1 + n) % n] == target) return ans+1;

            ans += 1;
            left -= 1;
            right += 1;

        }

        return ans;


    }
};