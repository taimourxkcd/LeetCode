class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int len = graph.size();
        vector<int> visited(len, -1);

        for(int i = 0; i < graph.size(); i++){
            if(visited[i] == -1){
                if(!doBFS(i, visited, graph)) return false;
            }
        }
        return true;
    }


    bool doBFS(int i, vector<int>& visited, vector<vector<int>>& graph){
        queue<int> q;
        int curColor;
        q.push(i);
        visited[i] = 0; // assign a color by default

        while(!q.empty()){
            int curNode = q.front();
            q.pop();
            curColor = visited[curNode];

            for(int neigh: graph[curNode]){
                if(visited[neigh] == curColor) return false;
                if(visited[neigh] == -1){
                    q.push(neigh);
                    visited[neigh] = 1 - curColor;  // what is happening here?
                }
            }

        }
        return true;
    }
};



