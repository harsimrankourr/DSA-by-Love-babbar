/*
We are  given with an array of integers  \
We just have to find the largest length of array having increasing subsequences
*/

class solution
{
public:
    int solve(int n, int a[], int curr, int prev)
    {
        // base casee
        if (curr == n)
        {
            return 0;
        }

        // include
        int take = 0;
        if (prev == -1 || a[curr] > a[prev])
            take = 1 + solve(n, a, curr + 1, curr);

        // exclude
        int notTake = 0 + solve(n, a, curr + 1, prev);

        return max(take, notTake);
    }

    int solveMemo(int n, int a[], int curr, int prev, vector<vector<int>> &dp)
    {
        // base casee
        if (curr == n)
        {
            return 0;
        }

        if (dp[curr][prev + 1] != 1)
            return dp[curr][prev + 1];

        // include
        int take = 0;
        if (prev == -1 || a[curr] > a[prev])
            take = 1 + solveMemo(n, a, curr + 1, curr, dp);

        // exclude
        int notTake = 0 + solveMemo(n, a, curr + 1, prev, dp);

        return dp[curr][prev] = max(take, notTake);
    }

    // Function to find length of longest increasing subsequences
    int longestSubsequence(int n, int a[])
    {
        // return solve(n, a, 0, -1);

        // n+1 elements form -1 to n
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return solveMemo(n, a, 0, -1, dp);
    }
};