
#include<unordered_map>
#include<vector>

using namespace std;

void dfs(int node, unordered_map<int, bool> &visited,
            unordered_map<int, vector<int>> &adj, vector<int> &component){

                component.push_back(node);
                visited[node] = true;

                // recursive call for every connected node
                for(auto i : adj[node]){
                  if (!visited[i]) {
                    dfs(i, visited, adj, component);
                  }
                }
            }

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // create an adjList 
     unordered_map<int, vector<int>> adjList;

    for (int i = 0; i < edges.size();i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);

    }

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    for(int i = 0; i < V; i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i, visited, adjList, component);
            ans.push_back(component);
        }
    }
    return ans;
    
}
