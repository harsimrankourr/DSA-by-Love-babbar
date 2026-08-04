/*
Bellman ford algorithm applicable on negative weights.

The bellmann algorithm is a method that  finds the shortest path
from a single starting node to all the nodes in a weighted graph,
using edge relaxation and negative cycle detection.

The condition is that there must not be the presence of negative cycle.

We can detect a negative cycle in a graph using bellman ford algorithm.

Algorithm -
        We have to apply the below formula (n-1) times on all the nodes.

        if(dist[u] + wt < dist[v]
        dist[v] = dist[u] + wt)

        Apply the same formula 1 more time
            If the distance will update - it means the negative cycle is present.
                we can't find the shortest distance.
            If the distance will not update - it means the cycle isn't present.
                Return distance.
*/

/*
int bellmanFord(int n, int m, int src, int dest, vector<vector<int>> &edges)
{
    // creating a vector of distance (coz nodes starting from 1 so it starts from n+1 upto 1e9)
    vector<int> dist(n + 1, 1e9);
    dist[src] = 0;

    //(n-1) times
    for (int i = 1; i <= n; i++)
    {
        // traverse on edge list
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v]))
            {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // check for the negative cycle
    bool flag = 0;
    for (int j = 0; j < m; j++)
    {
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];

        if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v]))
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        return dist[dest];
    }
}
    */