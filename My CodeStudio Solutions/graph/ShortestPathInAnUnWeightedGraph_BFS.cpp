#include "unordered_map"
#include "queue"
#include "list"

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// create the adjList
	unordered_map<int, list<int> > adjList;
	for(int i = 0; i < edges.size(); i++){
		int u = edges[i].first;
		int v = edges[i].second;

		adjList[u].push_back(v);
		adjList[v].push_back(u);
	} 


	// initially code was not working b/c i didnt do n+1
 	vector<int> parent(n + 1, -1);
    vector<bool> visited(n + 1, false);

	// do bfs
	queue<int> q;

	parent[s] = -1; // mark the parent of the source node as null
	q.push(s);
	visited[s] = 1;

	while(!q.empty()){
		int node = q.front();
		q.pop();

		// find the neighbours
		for(auto i : adjList[node]){
			if(!visited[i]){
				q.push(i);
				visited[i] = true;
				parent[i] = node;
			}
		}
	}

	// build the shortest path
	vector<int> ans; 
	int currentNode = t;
	ans.push_back(currentNode);
	while(currentNode != s){
		currentNode = parent[currentNode];
		ans.push_back(currentNode);
	}

	reverse(ans.begin(), ans.end());
	return ans;
	

	
}

