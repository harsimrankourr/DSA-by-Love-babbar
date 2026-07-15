/*

#include <limits.h>
#include <queue>

class node
{
public:
    int data;
    int row;
    int col;
}

node(int d, int r, int c)
{
    data = d;
    row = r;
    col = c;
};

class compare
{
public:
    bool operator()(node *a, node *b)
    {
        return a.data > b.data;
    }
};

int kSorted(vector<vector<int>> &a, int k, int n)
{
    int mini = INT_MAX, maxi = INT_MIN;
    priority_queue<node, vector<node>, compare> minHeap;

    //Step 1. create a min heap for starting element of each list and tracking mini/maxi value
    for (int i = 0; i < k; i++)
    {
        int element = a[i][0];
        mani = minn(mani, element);
        maxi = max(maxi, element);
        minHeap.push(new node(element, i, 0));
    }

    int start = mini, end = maxi;

    //process ranges
    while (!= minHeap.empty())
    {

    //mini fetch
        node *temp = minHeap.top();
        minHeap.pop();

        mini = temp->data;

        //update range
        if (maxi - mini < end - start)
        {
            start = mini;
            end = maxi;
        }

        //maximum element exist or not
        if (temp->col + 1 < n)
        {
            maxi = max(maxi, a[temp->row][temp->col + 1]);
            minHeap.push(newnode(a[temp->row][temp->col + 1], temp->row, temp->col + 1));
        }
        else
        {
        //maximum element doesn't exist
            break;
        }
    }
    return (end - start + 1);
}

*/