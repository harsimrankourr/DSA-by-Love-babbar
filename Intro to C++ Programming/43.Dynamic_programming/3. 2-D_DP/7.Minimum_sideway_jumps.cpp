/*
We are given with 3 lanes and have a frog
Initiallly frog is in 2nd lane at 0th index/position
We have to bring the frog to the nth position using minimum sideway jumps
*/

/*
class Solution
{
public:
    int solve(vector<int> &obstacles, int currlane, int currpos)
    {
        // base case
        int n = obstacles.size() - 1;
        if (currpos == n)
        {
            return 0;
        }
        if (obstacles[currpos + 1] != currlane)
        {
            return solve(obstacles, currlane, currpos + 1);
        }
        else
        {
            // Sideways jump
            int ans = INT_MAX;
            for (int i = 1; i <= 3; i++)
            {
                if (currlane != i && obstacles[currpos] != i)
                    ans = min(ans, 1 + solve(obstacle, i, currpos));
            }
            return ans;
        }
    }

    int solveMemo(vector<int> &obstacles, int currlane, int currpos, vector<vector<int>> dp)
    {
        // base case
        int n = obstacles.size() - 1;
        if (currpos == n)
        {
            return 0;
        }

        if (dp[currlane][currpos] != -1)
            return dp[currlane][currpos];

        if (obstacles[currpos + 1] != currlane)
        {
            return solveMemo(obstacles, currlane, currpos + 1, dp);
        }
        else
        {
            // Sideways jump
            int ans = INT_MAX;
            for (int i = 1; i <= 3; i++)
            {
                if (currlane != i && obstacles[currpos] != i)
                    ans = min(ans, 1 + solveMemo(obstacle, i, currpos, dp));
            }
            dp[currlane][currpos] = ans;
            return dp[currlane][currpos];
        }
    }

    int solveTab(vector<int> &obstacles)
    {
        int n = obstacles.size() - 1;
        vector<vector<itn>> dp(4, vector<int>(obstacles.size(), 1e9));

        dp[0][n] = 0;
        dp[1][n] = 0;
        dp[2][n] = 0;
        dp[3][n] = 0;

        for (int cuurpos = n - 1; currpos >= 0; currpos--)
        {
            for (int currlane = 1; curlane <= 3; currlane++)
            {

                if (obstacles[currpos + 1] != currlane)
                    dp[currlane][currpos] = dp[currlane][currpos + 1];
            }
            else
            {
                // Sideways jump
                int ans = 1e9;
                for (int i = 1; i <= 3; i++)
                {
                    if (currlane != i && obstacles[currpos] != i)
                        ans = min(ans, 1 + dp[i][currpos + 1]);
                }
                dp[currlane][currpos] = ans;
            }
        }
    }
    return min(dp[2][0], min(1 + dp[1][0], 1 + dp[3][0]));

    int solveSo(vector<int> &obstacles)
    {
        int n = obstacles.size() - 1;

        vector<int> curr(4, INT_MAX);
        vector<int> next(4, INT_MAX);

        next[0] = 0;
        next[1] = 0;
        next[2] = 0;
        next[3] = 0;

        for (int cuurpos = n - 1; currpos >= 0; currpos--)
        {
            for (int currlane = 1; curlane <= 3; currlane++)
            {

                if (obstacles[currpos + 1] != currlane)
                    curr[currlane] = next[currlane];
            }
            else
            {
                // Sideways jump
                int ans = 1e9;
                for (int i = 1; i <= 3; i++)
                {
                    if (currlane != i && obstacles[currpos] != i)
                        ans = min(ans, 1 + next[i]);
                }
                curr[currlane] = ans;
            }
        }
        next = curr;
    }
    return min(next[2], min(1 + next[1], 1 + next[3]));
};

int minSideJumps(vector<int> &obstacles)
{
    // // return solve(obstacles, 2, 0);

    // vector<vector<int>> dp(4, vector<int>(obstacles.size(), -1));
    // return solveMemo(obstacles, 2, 0, dp);

    // return solveTab(obstacles);

    return solveSo(obstacles);
}

*/