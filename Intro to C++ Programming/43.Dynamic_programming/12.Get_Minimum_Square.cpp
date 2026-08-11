/*
We will given a number N
we have to find how many perfect square numbers are required to make the given no. N
We have to give the minimum no. of such perfect square elements.
*/

/*
class solution
{
public:
    int solve(int n)
    {
        // base case
        if (n == 0)
            return 0;

        int ans = n;
        for (int i = 1; i * i <= n; i++)
        {
            ans = min(ans, 1 + solve(n - i * i));
        }
        return ans;
    }

    int solveMemo(int n, vector<int> &dp)
    {
        // base case
        if (n == 0)
            return 0;

        if (dp[n] != -1)
            return dp[n];

        int ans = n;
        for (int i = 1; i * i <= n; i++)
        {
            int temp = i * i;
            ans = min(ans, 1 + solveMemo(n - temp, dp));
        }
        dp[n] = ans;
        return dp[n];
    }

    int solveTab(int n)
    {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int temp = j * j;

                if (i - temp >= 0)

                    dp[i] = min(dp[i], 1 + dp[i - temp]);
            }
        }
        return dp[n];
    }

    int MinSquares(int n)
    {
        // // return solve(n);
        // vector<int> dp(n + 1, -1);
        // return solveMemo(n, dp);

        return solveTab(n);
    }
};
*/