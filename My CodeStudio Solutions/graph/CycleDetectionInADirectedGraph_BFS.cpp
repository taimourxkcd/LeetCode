#include "unordered_map"
#include "list"
#include "queue"



int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {

    // create an adj list
    unordered_map<int, list<int> > adjList;
    for(int i = 0; i <= edges.size(); i++ ){ // b/c the nodes in this start from one
      int u = edges[i].first;
      int v = edges[i].second;

      adjList[u].push_back(v);
    }

   vector<int> indegree(n + 1);
    // find the indegree of all the nodes
    for(auto i : adjList){
      for(auto j : i.second){
        indegree[j]++;
      }
    }

  // push all the nodes with the indegree 0 into the queue
  queue<int> q;
   for(int i = 0; i < n; i++){
     if(indegree[i] == 0){
       q.push(i);
     }
   }

  // do dfs
  int cnt = 0;
  while(!q.empty()){

    int front = q.front();
    q.pop();

    //ans
    cnt++;

    for(auto neighbour: adjList[front]){
      indegree[neighbour]--;
      if(indegree[neighbour] == 0){
        q.push(neighbour);
      }
    }
  }

    if(cnt == n){ // b/c if there is a cycle the no of nodes visited == n
      return false;
    }else{
      return true;
    }

}
