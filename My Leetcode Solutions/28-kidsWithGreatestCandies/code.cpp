class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n = candies.size();
        vector<bool> ans(n);
        int max = 0;

        for(int i = 0; i < n; i++){
            if(max < candies[i]){
                max = candies[i];
            }
        }


          for(int i = 0; i < n; i++){
              int sum = candies[i] + extraCandies;
              if(sum >= max){
                  ans[i] = true;
              }else{
                  ans[i] = false;
              }
          }  

          return ans;
    }
};