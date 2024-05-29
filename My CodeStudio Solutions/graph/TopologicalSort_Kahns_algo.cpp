#include <bits/stdc++.h> 



vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {


    unordered_map<int, list<int> > adjList;
    // create an adj list
    for(int i = 0; i < edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
    }   

    vector<int> indegree(v);
    // find the indegree
    for(auto i : adjList){
        for(auto j : i.second){
            indegree[j]++;
        }
    }

    queue<int> q;
    for(int i= 0; i < v; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
    }



    vector<int> ans;
    // do bfs
    while(!q.empty()){
        int front = q.front();
        q.pop();

        // store ans
        ans.push_back(front);

        for(auto neighbour : adjList[front]){
            indegree[neighbour]--;
            if(indegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }

    return ans;


    




}
