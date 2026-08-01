/*
A topological sort an o directed acyclic graph (DAG) is a linear ordering of its vertices such that
 for every directed edge u -> v vertex u comes before vertex v in the sequence.
*/

/*
#include <unordered_map>
#include <list>
#include <stack>

void topoSort(int node, vector<bool> &visited, stck<int> &s,
              unordered_map<int, list<int>> &adj)
{
    visited[node] = 1;

    for (auto neighbor : adj[node])
    {
        if (!visited[neighbour])
            topoSort(neighbour, visited, s, adj);
    }
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    // create adj list
    unordered_map<int, list<int>> adj; 
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // call dfs topological sort util function for all components
    vector<bool> visited(v);
    stack<int> s;
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
            topoSort(i, visited, s adj);
    }
    vector<int> ans;

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}
    */