/*
Prim's algorithm is a greedy algorithm in DSA used to find the MINIMUM SPANNING TREE (MST).
                of the connected, weighted, and undirected graph

Spanning tree - When you convert a graph into a tree suct thet it contains n nodes and n-1 edges
              - Every node is reachable by any other node

Minnimum Spanning node - minimum cost of weight.
*/

/*
#include <unordered_map>
#include <list>
#include <limits.h>

vector < pair<int, int>, int >> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // create adjacency list
    unordered_map<int, list<pair<int, int>>> adj;

    for (int i = 0; i < g.size(); i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.secont;
        itn w = g[i].second;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> key(n + 1);
    vector<bool> mst(n + 1);
    vector<int> parent(n + 1);

    for (int i = 0; i <= n; i++)
    {
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }

    // algo started
    // The value of source node must be marked 0
    key[1] = 0;
    parent[1] = -1;

    for (int i = 1; i < n; i++)
    {

        int mini = INT_MAX;
        int u;
        // Find the node in key array havinf minimum value
        for (int v = 1; v <= n; v++)
        {
            if (mst[v] == false && key[v] < mini)
            {
                u = v;
                mini = key[v];
            }
        }

        // Mark min node as true
        mst[u] = true;

        // check its adjacent nodes
        for (auto it : adj[u])
        {
            int v = it.first;
            int w = it.second;
            if (mst[v] == false && w < key[v])
            {
                parent[v] = u;
                key[v] = w;
            }
        }
    }

    vector < pair<int, int>, int >> result;
    for (int i = 2; i <= n; i++)
    {
        result.push_back({{parent[i], i}, key[i]});
    }
    return result;
}
    */