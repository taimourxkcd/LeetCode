class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {


        if(heights.empty() || heights[0].empty()) return {};   
        int m = heights.size();
        int n = heights[0].size();

        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));

        queue<pair<int, int>> pq, aq;

        for(int i = 0; i < m; i++){
            pq.push({i, 0});
            aq.push({i, n-1});
            pacific[i][0] = true;
            atlantic[i][n-1] = true;
        }
        for(int j = 0; j < n; j++){
            pq.push({0, j});
            aq.push({m-1, j});
            pacific[0][j] = true;
            atlantic[m-1][j] = true;
        }

         bfs(heights, atlantic, aq);   
         bfs(heights, pacific, pq);   

         vector<vector<int>> res;
         for(int i = 0; i < m; i++){
             for(int j = 0; j < n; j++){
                 if(pacific[i][j] && atlantic[i][j]){
                     res.push_back({i, j});
                 }
             }
         }

         return res;


    }

    vector<pair<int, int>> dirs = {{0,1} , {0,-1}, {1,0}, {-1,0}};


    void bfs(vector<vector<int>> &heights, vector<vector<bool>> &ocean, queue<pair<int, int>> &q){
        int m = heights.size(), n = heights[0].size();


        while(!q.empty()){
            int i = q.front().first, j = q.front().second;
            q.pop();

            for(const auto& dir : dirs){
                int x = i + dir.first, y = j + dir.second;
                if(x >= 0 && x < m && y >= 0 && y < n && !ocean[x][y] && heights[x][y] >= heights[i][j]){
                    ocean[x][y] = true;
                    q.push({x,y});
                }
            }
        }
    }
};
