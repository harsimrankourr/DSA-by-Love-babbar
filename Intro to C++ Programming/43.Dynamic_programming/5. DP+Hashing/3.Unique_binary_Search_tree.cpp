/*
We are given with an integer n
We have to return the number of structurally unique BST's which has exactly n nodes of unique values from 1 to n
*/

class Solution
{
public:
    int solve(int n, vector<int> &dp)
    {
        if (n <= 1)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        int ans = 0;

        // Think i as a root node
        for (int i = 1; i <= n; i++)
        {
            ans += solve(i - 1, dp) * solve(n - i, dp);
        }
        return dp[n] = ans;
    }

    int solveTab(int n)
    {
        vector<injt> dp(n + 1, 0);
        dp[0] = dp[1] = 1;

        // i-> number of nodes
        for (int i = 2; i <= n; i++)
        {
            // j -> assuming root node
            for (int j = 1; j <= i; j++)
            {
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }
        return dp[n];
    }

    int numTrees(int n)
    {
        // vector<int> dp(n + 1, -1);
        // return solve(n, dp);

        return solveTab(n);
    }
};