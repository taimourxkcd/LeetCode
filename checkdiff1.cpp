#include <bits/stdc++.h>
#include <unordered_map>
#include <queue>
#include <list>
#include <set>

void prepareAdjList(unordered_map<int, list<int>> &adjList, const vector<pair<int, int>> &edges)
{
    for (const auto &edge : edges)
    {
        int u = edge.first;
        int v = edge.second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

void bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] == 1;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        // store fontNode into ans
        ans.push_back(frontNode);

        // traverse all the neighbours of the frontNode
        for (auto i : adjList[frontNode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

void printAdj(unordered_map<int, list<int>> &adjList)
{
    for (auto i : adjList)
    {
        cout << i.first << " -> ";
        for (auto j : i.second)
        {
            cout << j;
        }
        cout << endl;
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adjList, edges);
    //    printAdj(adjList);

    // traverse all component of a graph
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            bfs(adjList, visited, ans, i);
        }
    }
}