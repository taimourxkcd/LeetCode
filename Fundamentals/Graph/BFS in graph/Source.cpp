#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <queue>
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

void prepareAdjList(unordered_map<int, set<int>> &adjList, const vector<pair<int, int>> &edges)
{
    for (const auto &edge : edges)
    {
        int u = edge.first;
        int v = edge.second;

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

vector<int> bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;

    q.push(node);
    visited[node] = true;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        // Sort the neighbors in ascending order
        vector<int> neighbors(adjList[frontNode].begin(), adjList[frontNode].end());
        sort(neighbors.begin(), neighbors.end());

        for (int neighbor : neighbors)
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    return ans;
}

void printAdj(unordered_map<int, set<int>> &adjList)
{
    for (auto i : adjList)
    {
        cout << i.first << " -> ";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, set<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adjList, edges);

    // Traverse all nodes from 0 to vertex-1
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            bfs(adjList, visited, ans, i);
        }
    }

    return ans;
}

int main()
{
    FILE *inputFile = nullptr;
    FILE *outputFile = nullptr;
    freopen_s(&inputFile, "input.txt", "r", stdin);    // Redirect standard input to input.txt
    freopen_s(&outputFile, "output.txt", "w", stdout); // Redirect standard output to output.txt

    // taking input the no of nodes
    int n;
    cin >> n;

    // taking input the no of edges
    int m;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0); // 0 means that it is an undirected graph
    }

    // printing the graph
    g.printAdjList();

    // Perform BFS
    vector<pair<int, int>> edges;
    for (const auto &edge : g.adj)
    {
        int u = edge.first;
        for (int v : edge.second)
        {
            edges.push_back({u, v});
        }
    }

    vector<int> result = BFS(n, edges);

    cout << "BFS Traversal: ";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
