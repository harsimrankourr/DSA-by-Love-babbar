/*
We are given with an array of each day having elements from 1 to 365
Travelling can be done during 1 to 365 days

A 1 - day pass is sold for cost[0] coins.
A 7 - days pass is sold for cost[1] coins.
A 30 - days pass is sold for cost[2] coins.

We have to return the minimum value of tickets.
*/

/*
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

// Taking queuue but still there is only O(1) space complexity
// Coz we know that in monthly queue there will be only 30 entities
// and in weekly queue there will only 7 entities
//  so constant number of entities therefore, O(1) is used

// The  days that are less than 7 and 30 pop them from the queue

int minimumCOins(int n, vector<int> days, vector<int> cost)
{
    // // return solve(n, days, cost, 0);

    // // // Step 1
    // // vector<int> dp(n + 1, -1);
    // // return solveMemo(n, days, cost, 0, dp);

    // return solveTab(n, days, cost);

    // Space optimal solution

    int ans = 0;

    queue<pair<int, int>> month;
    queue<pair<int, int>> week;

    for (int day : days)
    {
        // step 1 - remove expiredd days
        while (!month.empty() && month.front().first + 30 <= day)
            month.pop();

        while (!week.empty() && week.front().first + 7 <= day)
            week.pop();

        // Step 2- add cost for current day
        week.push(make_pair(day, ans + cost[1]));
        month.push(make_pair(day, ans + cost[2]));

        // Step 3- ans update
        ans = min(ans + cost[0], min(week.front().second, month.front().second));
    }
    return ans;
}
    */