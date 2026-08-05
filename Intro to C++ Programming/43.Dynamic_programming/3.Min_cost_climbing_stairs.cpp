/*

class Solution
{
public:
    // Solve 1 for recursion
    int solve(vector<int> &cost, int n, vector<int> &dp)
    {
        // Base case
        if (n == 0)
            return cost[0];
        if (n == 1)
            return cost[1];

        int ans = cost[n] + min(solve(cost, n - 1, dp), solve(cost, n - 2, dp));
        return ans;
    }

    // Solve 2 for top down approach in Dp
    int solve2(vector<int> &cost, int n, vector<int> &dp)
    {
        // Base case
        if (n == 0)
            return cost[0];
        if (n == 1)
            return cost[1];

        // Step 3
        if (dp[n] != -1)
            return dp[n];

        // Step2
        dp[n] = cost[n] + min(solve2(cost, n - 1, dp), solve2(cost, n - 2, dp));
        return dp[n];
    }

    // Solve 3 for bottom up approach in dp
    int solve3(vector<int> &cost, int n)
    {
        // Step 1 - creation of a dp array
        vector<int> dp(n + 1);

        // Step 2 - Analise base case
        dp[0] = cost[0];
        dp[1] = cost[1];

        // Step 3 - 0 and 1 is handled by base case, handle the remaining from 2 to n
        for (int i = 2; i < n; i++)
        {
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        }
        return min(dp[n - 1], dp[n - 2]);
    }

    // Solve 4 for space optimization in dp
    int solve4(vector<int> &cost, int n)
    {
        int prev2 = cost[0];
        int prev1 = cost[1];

        for (int i = 2; i < n; i++)
        {
            int curr = cost[i] + min(prev1, prev2);
            prev2 = prev1;
            prev1 = curr;
        }
        return min(prev1, prev2);
    }

    int minCostClimbingStairs(vector<int> &cost)
    {
        // // For top down approach
        // int n = cost.size();

        // // Step 1 - create a Dp array and  initialise it with -1
        // vector<int> dp(n + 1, -1);
        // int ans = min(solve2(cost, n - 1, dp), solve2(cost, n - 2, dp));
        // return ans;

        // // For bottom up approach
        // int n = cost.size();
        // return solve3(cost, n);

        // For space optimization
        int n = cost.size();
        return solve4(cost, n);
    }
};
*/