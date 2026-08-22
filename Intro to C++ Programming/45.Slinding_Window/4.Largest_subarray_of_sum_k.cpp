// Variable sized sliding window

#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &arr, int k)
{
    int n = arr.size();

    int left = 0;
    int sum = 0;
    int maxLength = 0;

    for (int right = 0; right < n; right++)
    {
        // Add current element
        sum += arr[right];

        // If sum becomes greater than k,
        // shrink the window from the left
        while (sum > k && left <= right)
        {
            sum -= arr[left];
            left++;
        }

        // If sum == k, update maximum length
        if (sum == k)
        {
            maxLength = max(maxLength, right - left + 1);
        }
    }

    return maxLength;
}

int main()
{
    vector<int> arr = {4, 1, 1, 1, 2, 3, 5};

    int k = 5;

    cout << "Largest subarray length: "
         << longestSubarray(arr, k) << endl;

    return 0;
}