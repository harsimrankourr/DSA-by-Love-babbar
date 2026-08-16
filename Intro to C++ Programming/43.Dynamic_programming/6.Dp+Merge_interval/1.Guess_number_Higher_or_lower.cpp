/*
We are playing a guessing game. The game will be works as follows
    - I pick a number between 1 and n
    - You guess a number
    - If you guess the right number You win
    - If you guess the wrong number I will tell whether The number you picked is higher or lower,
        and you will continue guessing
    - Every time you guess a wromg number X, you will pay X dollars, If you run out of money
        You lose the game

We have to return minimum amounnt of money you need to guaranteed a win regardless of what no. I pick

Approach
    - After picking a number 2 cases arise
        - I pick the right number
            I will win

        - I pick a wrong number
            The target number may be lower so range becomes [1, x-1]
            The target number may be higher so range will become [x+1, n]

We will always aware about the worst case

*/
/*

class Solution
{
public:
    int solve(int start, int end)
    {
        if (start >= end)
            return 0;

        int maxi = INT_MAX;
        for (int i = start; i <= end; i++)
        {
            maxi = min(maxi, i + max(solve(start, i - 1), solve(i + 1, end)));
        }
        return maxi;
    }

    int solveMemo(int start, int end, vector<vector<int>> &dp)
    {
        if (start >= end)
            return 0;

        if (dp[start][end] != -1)
            return dp[start][end];

        int maxi = INT_MAX;
        for (int i = start; i <= end; i++)
        {
            maxi = min(maxi, i + max(solveMemo(start, i - 1, dp), solveMemo(i + 1, end, dp)));
        }
        return dp[start][end] = maxi;
    }

    int solveTab(int n)
    {
        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

        for (int start = n; start >= 1; start--)
        {
            for (int end = start; end <= n; end++)
            {
                if (start == end)
                    continue;
                else
                {

                    int maxi = INT_MAX;
                    for (int i = start; i <= end; i++)
                    {
                        maxi = min(maxi, i + max(dp[start][i - 1], dp[i + 1][end]));
                    }
                    dp[start][end] = maxi;
                }
            }
        }
        return dp[1][n];
    }

    int getMoneyAmount(int n)
    {
        // vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

        // // return solve(1, n);

        // return solveMemo(1, n, dp);

        return solveTab(n);
    }
};
*/