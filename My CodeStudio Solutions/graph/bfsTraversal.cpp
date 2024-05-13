void prepareAdjList(vector<vector<int>> edges, unordered_map<int, set<int>> &adjList){
    for(int i = 0;i < edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void bfs(unordered_map<int, set<int>> adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node ){

    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        for(auto i: adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    unordered_map<int, set<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adj, adjList);


    for(int i = 0; i < n; i++){
        if(!visited[i]){
            bfs(adjList, visited, ans, i);
        }
    }

    return ans;
} 