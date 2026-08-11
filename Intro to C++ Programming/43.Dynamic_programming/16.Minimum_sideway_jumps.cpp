/*
We are given with 3 lanes and have a frog
Initiallly frog is in 2nd lane at 0th index/position
We have to bring the frog to the nth position using minimum sideway jumps
*/

class solution
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

    int minSideJumps(vector<int> &obstacles)
    {
        // return solve(obstacles, 2, 0);

        vector<vector<int>> dp(4, vector<int>(obstacles.size(), -1));
        return solveMemo(obstacles, 2, 0, dp);
    }
};