class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int smallestRow = 0;
    int maxOnesCount = INT_MIN;
     for(int i = 0; i < mat.size(); i++){
         int onesCount = 0;
         for(int j = 0; j < mat[0].size(); j++){
             if(mat[i][j] == 1) onesCount += 1;
         }
         
         if(maxOnesCount < onesCount) {
            maxOnesCount = max(maxOnesCount, onesCount);
            smallestRow = i;
         }
     }   
     vector<int> res;
     res.push_back(smallestRow);
     res.push_back(maxOnesCount);

     return res;
    }
};