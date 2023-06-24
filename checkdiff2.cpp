#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <set>

using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed graph

        // create an edge from u to v
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

void dfs(int node, unordered_map<int, bool> &visited,
         unordered_map<int, set<int>> &adj, vector<int> &component)
{

    component.push_back(node);
    visited[node] = true;

    // recursive call for every connected node
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i, visited, adj, component);
        }
    }
}

int main()
{
    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    // Taking input the number of nodes
    int V;
    cin >> V;

    // Taking input the number of edges
    int E;
    cin >> E;

    graph g;

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, false);
    }

    // DFS
    unordered_map<int, set<int>> adjList = g.adj;

    vector<vector<int>> ans;
    unordered_map<int, bool> visited;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            vector<int> component;
            dfs(i, visited, adjList, component);
            ans.push_back(component);
        }
    }

    cout << "DFS Traversal: ";
    for (vector<int> i : ans)
    {
        for (int n : i)
            cout << n << " ";
        cout << endl;
    }

    return 0;
}
