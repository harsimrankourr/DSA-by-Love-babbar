#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int> &arr, int k)
{
    int n = arr.size();

    // Step 1: Calculate sum of first window
    int windowSum = 0;

    for (int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++)
    {
        // Remove the element leaving the window
        windowSum -= arr[i - k];

        // Add the new element entering the window
        windowSum += arr[i];

        // Update maximum
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main()
{
    vector<int> arr = {2, 1, 5, 1, 3, 2};

    int k = 3;

    cout << maxSum(arr, k) << endl;

    return 0;
}