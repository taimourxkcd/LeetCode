class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int ans = 0;
        for (int i = 0; i<s.length(); i++) {
          if (s[i] == 'L') {
                balance++;
            }
            else if (s[i] == 'R') {
                balance--;
            }
            if (balance == 0) {
                ans++;
            }
        }

        return ans ;
    }
};