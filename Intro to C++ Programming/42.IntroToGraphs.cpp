/*
In simple words Graph is a type of data structure which is basically the combination of nodes and edges.

In the other words it is a non linear data structure consisting of a finite set of vertices (also called nodes) and
a set of edges that connect these nodes to represent relationship.

    Nodes- entities to store data
    edges - connecting nodes

Types of graphs:
    - Directed graphs
        - weighted directed graphs

    - Undirected graphs
        -weighted undirected graphs

If weight is not given, so it is safe  to assume that weight on edge is 1.

Degree - No. of edges passing through that particular node
            In case of directed graphs
                - Indegree (No. of edges comes toward the node)
                - Outdegree (Mo. of edges goes from the node).

Path - travel from one node to another.

Cyclic graph - If there will be weight present then
                - Weighted cyclic directed graph
                - Weighted cyclic undirected graph

Acyclic graps -If there will be weight present then
                - Weighted Acyclic directed graph
                - Weighted Acyclic undirected graph

Graphs
        - Adjacency matrix
        - Adjacency list
*/

//Adjacency list implimentation

#include <iostream>
#include <unordered_map>
#include <list>
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
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << " , ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges " << endl;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        // creating an unndirected graph
        g.addEdge(u, v, 0);
    }

    // printing graph
    g.printAdjList();

    return 0;
}

//=======================================================================================
