#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {

    // create adj list
    unordered_map<int, list<pair<int, int> > > adjList;
    for(int i = 0; i < edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w));
    }
    
    // create a dist vec with infinite values
    vector<int> distance(vertices);
    for(int i = 0; i < vertices; i++){
        distance[i] = INT_MAX;
    }


    set<pair<int, int> > st;


    //initialize everything with source
    distance[source] = 0;
    st.insert(make_pair(0, source)); 
    
    while(!st.empty()){

        auto top = *(st.begin());
        int topNode = top.second;
        int nodeDistance = top.first;

        // remove top from the set
        st.erase(st.begin());

        // traverse the neighbours
        
        for(auto neighbour : adjList[topNode]){
            if(nodeDistance + neighbour.second < distance[neighbour.first]){

                auto record = st.find(make_pair(distance[neighbour.first], neighbour.first));

                if(record != st.end()){
                    st.erase(record);
                }
                
                // update the distance 
                distance[neighbour.first] = nodeDistance + neighbour.second;

                st.insert(make_pair(distance[neighbour.first], neighbour.first));
                

            }
        }

    }

    return distance;
}










