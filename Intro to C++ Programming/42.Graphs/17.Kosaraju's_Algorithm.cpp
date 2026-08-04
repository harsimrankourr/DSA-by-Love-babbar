/*
Kosaraju's Algorithm is a linear time algorithm to find the strongly connected components of the a directed graph.

0 <-- 4
|   /
|  /
1 ----> 2 <----> 3

Here are two strongly connected components
    One contains 1,0,4
    and other contains 2,3

    coz when we start from 1 we cxan reach through every element of the component. Same as when we starts from 0 and 4
    we can also then traverse every element of the component.

    Similarly when we start from 2 we can traverse 3 and when start from 3 we can traverse 2.
    So 2 and 3 is another strongly connected component.

To check the stringly connected components
    start traversal from such an element from where backtrack isn't possible.

Topological sort will be required

Kosaraju's Algorithm :
                    - Sort all nodes basis on their finishing time.(topological sort)
                    - Transpose of graph(Change the direction of edges)
                    - call dfs count/print on the sort obtained

*/
/*
#include<iostream>
#include <unordered_map>
#include <stack>
#include <list>
using namespace std;

void dfs(int node, unordered_map<int, bool> &vis, stack<int> &st, unordered_map<int, list<int>> &adj)
{
    vis[node] = true;
    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            dfs(nbr, vis, st, adj);
        }
    }
    // topo logic
    st.push(node);
}

void revDfs(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj)
{
    vis[node] = true;

    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            revDfs(nbr, vis, adj);
        }
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
    // adj list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // topo sort
    stack<int> st;
    unordered_map<int, bool> vis;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, st, adj);
        }
    }

    // create a transpose graph'
    unordered_map<int, list<int>> transapose;
    for (int i = 0; i < v; i++)
    {
        vis[i] = 0;
        for (auto nbr : adj[i])
        {
            transpose[nbr].push_back[i];
        }
    }

    // dfs call using above ordering
    int count = 0;
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        if (!vis[top])
        {
            count++;
            revDfs(top, vis, transpose);
        }
    }
    return count;
}
    */