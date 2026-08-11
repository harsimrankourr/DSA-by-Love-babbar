/*
We are given with an array of each day having elements from 1 to 365
Travelling can be done during 1 to 365 days

A 1 - day pass is sold for cost[0] coins.
A 7 - days pass is sold for cost[1] coins.
A 30 - days pass is sold for cost[2] coins.

We have to return the minimum value of tickets.
*/

// Not such a good solution using recursion
int solve(int n, vector<int> &days, vector<int> &cost, int index)
{
    // Base case
    if (index >= n)
    {
        return 0;
    }

    // 1 day pass
    int option1 = cost[0] + solve(n, days, cost, index + 1);

    int i;
    // 7 days pass
    for (i = index; i < n && days[i] < days[index] + 7; i++)
        ;

    int option2 = cost[1] + solve(n, days, cost, i);

    // 30 days pass
    for (i = index; i < n && days[i] < days[index] + 30; i++)
        ;

    int option3 = cost[2] + solve(n, days, cost, i);

    return min(option1, min(option2, option3));
}

int solveMemo(int n, vector<int> &days, vector<int> &cost, int index, vector<int> &dp)
{
    // Base case
    if (index >= n)
    {
        return 0;
    }

    // Step 3
    if (dp[index] != -1)
        return dp[index];

    // 1 day pass
    int option1 = cost[0] + solveMemo(n, days, cost, index + 1, dp);

    int i;
    // 7 days pass
    for (i = index; i < n && days[i] < days[index] + 7; i++)
        ;

    int option2 = cost[1] + solveMemo(n, days, cost, i, dp);

    // 30 days pass
    for (i = index; i < n && days[i] < days[index] + 30; i++)
        ;

    int option3 = cost[2] + solveMemo(n, days, cost, i, dp);

    // Step 2
    dp[index] = min(option1, min(option2, option3));
    return dp[index];
}

int solveTab(int n, vector<int> &days, vector<int> &cost)
{
    vector<int> dp(n + 1, INT_MAX);
    dp[n] = 0;

    for (int k = n - 1; k >= 0; k--)
    {

        // 1 day pass
        int option1 = cost[0] + dp[k + 1];

        int i;
        // 7 days pass
        for (i = k; i < n && days[i] < days[k] + 7; i++)
            ;

        int option2 = cost[1] + dp[i];

        // 30 days pass
        for (i = k; i < n && days[i] < days[k] + 30; i++)
            ;

        int option3 = cost[2] + dp[i];

        // Step 2
        dp[k] = min(option1, min(option2, option3));
    }
    return dp[0];
}

int minimumCOins(int n, vector<int> days, vector<int> cost)
{
    // // return solve(n, days, cost, 0);

    // // Step 1
    // vector<int> dp(n + 1, -1);
    // return solveMemo(n, days, cost, 0, dp);

    return solveTab(n, days, cost);
}