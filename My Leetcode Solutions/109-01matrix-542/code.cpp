class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int, int>> q; 
        vector<vector<int>> ans(mat.size(), vector<int>(mat[0].size(), -1));
        int m = mat.size();
        int n = mat[0].size();

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 0){
                    q.push({i, j});
                    ans[i][j] = 0;
                }    
            }
        }


        while(!q.empty()){
        
            int i = q.front().first;
            int j = q.front().second;

            // check for its neighbours, if they are valid and not visited, then add them to the queue
            if(checkValid(i+1, j, m , n) && ans[i+1][j] == -1){
                    q.push({i+1,j});
                    ans[i+1][j] = ans[i][j] + 1;
            }
            if(checkValid(i-1, j, m , n) && ans[i-1][j] == -1){
                    q.push({i-1,j});
                    ans[i-1][j] = ans[i][j] + 1;
            }
            if(checkValid(i, j+1, m , n) && ans[i][j+1] == -1){
                    q.push({i,j+1});
                    ans[i][j+1] = ans[i][j] + 1;
            }
            if(checkValid(i, j-1, m , n) && ans[i][j-1] == -1){
                    q.push({i,j-1});
                    ans[i][j-1] = ans[i][j] + 1;
            }
            q.pop();

        }

        return ans;

    }
        bool checkValid(int i, int j, int m, int n){
            if(i < 0 || j < 0 || i>= m || j>=n) return false;
            return true;
        }
};









