class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        for(char ch: s){
            if(ch == '*'){

                if (!stk.empty()) {
                            stk.pop();
                        }
            } 
            else stk.push(ch);
        }
        string ans;
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};