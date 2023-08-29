class Solution {
public:
    int maxScore(string s) {
        int cnt1 = 0, cnt0 = 0;
        int maxSum = 0, sum = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') cnt1++;
        }
        
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == '0'){
            cnt0++;
            }else{
            cnt1--;
            } 
            sum = cnt0 + cnt1;
            maxSum = max(maxSum, sum);


        }
        return maxSum;

        
    }
};
