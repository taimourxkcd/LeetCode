#include <bits/stdc++.h>
#include <unordered_map>
#include <queue>
#include <list>
#include <set>
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
