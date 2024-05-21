#include "unordered_map"
#include "queue"
#include "list"

bool isCyclicBFS(int src, unordered_map<int, list<int>> adjList, unordered_map<int, bool> visited){

    unordered_map<int, int> parent;
    parent[src] = -1;
    visited[src] = 1;
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(int neightbour: adjList[front]){
            if(visited[neightbour] == true && neightbour != parent[front]){
                return true;
            }else if(!visited[neightbour]){
                q.push(neightbour);
                visited[neightbour] = 1;
                parent[neightbour] = front;
            }
        }
        
    }
    return false;


}

bool isCyclicDFS(int node, int parent, unordered_map<int, bool> &visited,  unordered_map<int, list<int>> &adjList){
    visited[node] = true;

    for(auto neighbour : adjList[node]){
        if(!visited[neighbour]){
            bool isCyclic = isCyclicDFS(neighbour, node, visited, adjList);
            if(isCyclic)
                return true;
        }else if(neighbour != parent) {
            return true;
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // create an adj list
    unordered_map<int, list<int>> adjList;

    for(int i = 0; i < edges.size() ; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u) ;
    }

    // create a visited data structure
    unordered_map<int, bool> visited;

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            // bool ans = isCyclicBFS(i, adjList, visited);
            bool ans = isCyclicDFS(i, -1, visited, adjList);
            if(ans == 1){
                return "Yes";
            }
        }
    }
    return "No";
}

