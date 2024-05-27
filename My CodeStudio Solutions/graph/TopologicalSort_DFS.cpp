#include <bits/stdc++.h> 

void topologicalSortDFS(int node,  vector< bool>  &visited,  unordered_map<int, list<int> > &adjList,   stack<int> &stk ){
    visited[node] = true;

    for(auto neighbour: adjList[node]){
        if(!visited[neighbour]){
            topologicalSortDFS(neighbour, visited, adjList, stk);
        }
    }

    stk.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {


    unordered_map<int, list<int> > adjList;
    // create an adj list
    for(int i = 0; i < edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
    }


    vector<bool> visited(v);
    vector<int> ans;
    stack<int> stk;
    for(int i = 0; i < v; i++){
        if(!visited[i]){
            topologicalSortDFS(i, visited, adjList, stk);
        }
    }

    while(!stk.empty()){
        ans.push_back(stk.top());
        stk.pop();
    }

    return ans;

}
