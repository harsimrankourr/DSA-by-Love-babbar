/*
We are given with an arr[] of size N,
We have to diveide the given array into two subsets such that the sum of the values of the array must be equal,

Approach
    - 1st Find the sum of the elements of the array
        - If the sum obtained is odd
            return 0
        - If the sum obtained is even, Mark it target sum
            So we have to make such a subset whose sum must be equal to the target sum

            if we don't want to take the target sum variable
            we can reduce the target after every iteration.

            Then if at an instant target bbecomes 0 we reach at our ideal solution
*/

class solution
{
public:
    bool solve(int index, int arr[], int N, int target)
    {
        // base case
        if (index >= N)
            return 0;

        if (target < 0)
            return 0;
        if (target == 0)
            return 1;

        bool incl = solve(index + 1, arr, N, target - arr[index]);
        bool excl = solve(index + 1, arr, N, target - 0);

        return incl or excl;
    }

    bool solveMemo(int index, int arr[], int N, int target, vector<vector<int>> &dp)
    {
        // base case
        if (index >= N)
            return 0;

        if (target < 0)
            return 0;
        if (target == 0)
            return 1;

            if(dp[index][target] != -1)
            return dp[index][target]; 

        bool incl = solveMemo(index + 1, arr, N, target - arr[index], dp);
        bool excl = solveMemo(index + 1, arr, N, target - 0, dp);

        return dp[index][target] = incl or excl;
    }

    int equalPartition(int N, int arr[])
    {
        int total = 0;
        for (int i = 0; i < N; i++)
        {
            total += arr[i];
        }
        if (total & 1)
            return 0;

        int target = total / 2;

        // return solve(0, arr, N, target);

        vector<vector<int>> dp(N, vcetor<int>(target + 1, -1));
        return solveMemo(0, arr, N, target, dp);
    }
};