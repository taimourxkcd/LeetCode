#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // create adj list
    unordered_map<int, list<pair<int, int> > > adjList;
    for(int i = 0; i < m; i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;

        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w));
    }

    // create and initialize the required data structures
    vector<int> key(n+1); // this represents the distance
    vector<bool>   mst(n+1); // store if this is mst or not
    vector<int> parent(n+1); 

    for(int i = 0; i <= n; i++){
        key[i] = INT_MAX;
        mst[i] = false;
        parent[i] = -1;
    }


    // set the initial values
    key[1] = 0;
    int u;

    for(int i = 1; i <= n; i++){
        
        int mini = INT_MAX;



        // find the min node    
        for(int j =1; j <= n; j++){
            if( mst[j] == false && key[j] < mini){
                u = j;
                mini = key[j];
            }
        }



        mst[u] = true;
 
        //find all the adj neighbours
        for(auto it: adjList[u]){
            int v = it.first;
            int w = it.second;

            if(mst[v] == false && w < key[v] ){
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    
    vector<pair<pair<int, int>, int>> ans;
    for(int i = 2; i <=n; i++){
        ans.push_back({{parent[i], i}, key[i]});
    
    }

    return ans;


}





