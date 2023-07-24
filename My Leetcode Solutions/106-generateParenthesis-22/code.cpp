class Solution {
    vector<string> res;
public:
    vector<string> generateParenthesis(int n) {
        int openCount = n, closeCount = n;

        helper(openCount, closeCount, "", n);
        return res;
        
    }

    void helper(int openCount, int closeCount, string buffer, int n){
        if(2*n == buffer.size()) res.push_back(buffer);

        if(openCount > 0) helper(openCount - 1, closeCount, buffer +  "(", n);
        if(closeCount> openCount) helper(openCount, closeCount - 1, buffer + ")", n);
    }
};