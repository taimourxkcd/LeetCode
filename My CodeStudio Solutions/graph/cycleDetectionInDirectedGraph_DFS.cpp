#include "unordered_map"
#include "list"
bool isCycleDFS(int node, unordered_map<int, bool> &visited, 
  unordered_map<int, bool> &dfsVisited,  unordered_map<int, list<int> > &adjList){
          
          visited[node] = true;
          dfsVisited[node] = true;

          for(auto neighbour: adjList[node]){
            if(!visited[neighbour]){
              bool cycleFound = isCycleDFS(neighbour, visited, dfsVisited, adjList);
              if(cycleFound){
                return true;
              }
            }else{
              if(dfsVisited[neighbour]){
                return true;
              }
            }
          }
  
  dfsVisited[node] = false;
  return false;   

  }


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {

      // create adj List
      unordered_map<int, list<int> > adjList;
      for(int i = 0; i < edges.size(); i++){
          int u = edges[i].first;
          int v = edges[i].second;

          adjList[u].push_back(v);
      }

      // 
      unordered_map<int, bool> visited;
      unordered_map<int, bool> dfsVisited;

      for(int i = 0; i < n; i++){
        if(!visited[i]){
          bool cycleFound = isCycleDFS(i, visited, dfsVisited, adjList);
          if(cycleFound){
            return true;
          }
        }
      }
      return false;

}
