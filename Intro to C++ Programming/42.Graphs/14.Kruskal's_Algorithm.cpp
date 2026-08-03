/*
DISJOINT SET
    A disjoint set (also called an union find data structure) is a data structure that manages
    a collection of non- overlaping (disjoint) sets, where each element belongs to exactly one set.

2 major operations are there
    - FInd parent() or find set
    - Union () or union set.

If we add a shorter tree under a longer tree, there is not any major chaneg in the depth
but if we add longer tree under the shorter tree there will be a major change in the depth.
*/

/*
void makeSet(vector<int> &parent, vector<int> &rank, int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findParent(vector<int> &parent, int node)
{
    if (parent[node] == node)
    {
        return node;
    }

    return parent[node] = findParent(parent, parent[node]);
}

void unionSet(int u, int v, vector<int> &parent)
{
    u = findParent(parent, u);
    v = findParent(parent, v);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[v] < rank[u])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}

int minimumSpannigTree(vector<vector<int>> &edges, int n)
{
    vector<int> parent(n);
    vector<int> rank(n);
    makeSet(parent, rank, n);
}
    */