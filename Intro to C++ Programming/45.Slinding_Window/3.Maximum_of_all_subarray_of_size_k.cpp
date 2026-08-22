#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxOfSubarrays(vector<int> &arr, int k)
{
    int n = arr.size();

    vector<int> ans;

    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        // 1. Remove elements which are outside the window
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        // 2. Remove smaller elements from the back
        while (!dq.empty() && arr[dq.back()] <= arr[i])
        {
            dq.pop_back();
        }

        // 3. Add current element
        dq.push_back(i);

        // 4. Window is ready
        if (i >= k - 1)
        {
            ans.push_back(arr[dq.front()]);
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};

    int k = 3;

    vector<int> ans = maxOfSubarrays(arr, k);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}