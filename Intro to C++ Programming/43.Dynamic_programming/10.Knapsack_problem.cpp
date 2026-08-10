/*
There is a thief
Thief has a knapsack
knapsack can carry weight w
and can carry n items

Every weight has its corresponding value
We just have to generate the maximum value in "W" weight

Brute force approach comes in the mind
     FInd all the subsets of the elements and find the corresponding sum
     return the maximum value

     Similar as subsequences question in the recursion.
*/

// Brute force
int solve(vector<int> &weight, vector<int> &value, int index, int w)
{
    // base case
    // if only 1 item to steal, then just compare its weight with the knapsack capacity
    if (index == 0)
    {
        if (weight[0] <= W)
            return value[0];
        else
            return 0;
    }
    int include = 0;
    if (weight[index] <= capacity)
        include = value[index] + solve(weight, value, index - 1, capacity - weight[index]);

    int exclude = 0 + solve(weight, value, index - 1, capacity);

    int ans = max(exclude, include);
    return ans;
}

// using memoization
int solveMemo(vector<int> &weight, vector<int> &value, int index, int capacity, vector<vector<int>> dp)
{
    // base case
    // if only 1 item to steal, then just compare its weight with the knapsack capacity
    if (index == 0)
    {
        if (weight[0] <= W)
            return value[0];
        else
            return 0;
    }

    // Step 3
    if (dp[index][capacity] != -1)
        return dp[index][capacity];

    int include = 0;
    if (weight[index] <= capacity)
        include = value[index] + solveMemo(weight, value, index - 1, capacity - weight[index], dp);

    int exclude = 0 + solveMemo(weight, value, index - 1, capacity, dp);

    // Storing ans in dp
    dp[index][capacity] = max(exclude, include);
    return dp[index][capacity];
}

int solveTab(vector<int> &weight, vector<int> &value, int index, int capacity)
{
    // Step 1 creating a dp array

    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, 0));

    // Step 2 Trying to ananlyse the base case
    for (int w = weight[0]; w <= capacity; w++)
    {
        if (weight[0] <= capacity)
            dp[0][w] = value[0];
        else
            dp[0][w] = 0;
    }

    //Take care of remaining recursive calls 
    for (int index = 1; index < n; index++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            int include = 0;
            if (weight[index] <= w)
                include = value[index] + dp[index - 1][w - weight[index]];

            int exclude = 0 + dp[index - 1][capacity];

            // Storing ans in dp
            dp[index][w] = max(exclude, include);
        }
    }
    return dp[n - 1][capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    // return solve(weight, value, n - 1, maxWeight);

    // creation of dp
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, -1));
    return solveMemo(weight, value, n-- 1, maxWeight, dp);
}