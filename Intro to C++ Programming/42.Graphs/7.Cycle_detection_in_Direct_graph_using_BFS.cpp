/*
Using kahn's algorithm topological sort is only applicable on the directed acyclic graph
but what if graph is cyclic
ann invalid topological sort woll print 
it means if invalid topological sort is printing there must be presence of the cycle
*/

/*
#include <unordered_map>
#include <list>
#include <queue>

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    // create adj list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first - 1;
        int v = edges[i].second - 1;
        adj[u].push_back(v);
    }

    // find all the indegrees
    vector<int> indegree(n);
    for (auto i : adj)
    {
        for (auto j : i.second)
        {
            indegree[j]++;
        }
    }
    // insert all the elements having indegree 0 in the queue
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    // do BFS's
    int cnt = 0;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        // increment of count
        cnt++;

        // neighbour indegree update
        for (auto neighbour : adj[front])
        {
            indegree[neighbour]--;
            if (indegree[neighbour] == 0)
                q.push(neighbour);
        }
    }
    if (cnt == n)
        return false;
    else
        return true;
}
        */