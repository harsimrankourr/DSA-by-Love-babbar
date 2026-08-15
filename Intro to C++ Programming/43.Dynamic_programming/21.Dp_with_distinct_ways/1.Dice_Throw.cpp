/*
We are given with N number of dices having M faces numbered 1-M
We have to find the total number of distinct ways to find the sum X.

X is the Submission of values on each face.
*/

class solution
{
public:
    long long solve(int dice, int faces, int target)
    {
        // base case
        if (target < 0)
            return 0;
        if (dice == 0 && target != 0)
        {
            return 0;
        }
        if (target == 0 && dice != 0)
            return 0;
        if (dice == 0 && target == 0)
            return 1;

        long long ans = 0;
        for (int i = 1; i <= faces; i++)
        {
            ans = ans + solve(dice - 1, faces, target - i);
        }
        return ans;
    }

    long long solveMemo(int dice, int faces, int target, vector<vector<long long>> &dp)
    {
        // base case
        if (target < 0)
            return 0;
        if (dice == 0 && target != 0)
        {
            return 0;
        }
        if (target == 0 && dice != 0)
            return 0;
        if (dice == 0 && target == 0)
            return 1;

        if (dp[dice][target] != -1)
            return dp[dice][target];

        long long ans = 0;
        for (int i = 1; i <= faces; i++)
        {
            ans = ans + solveMemo(dice - 1, faces, target - i, dp);
        }
        return dp[dice][target] = ans;
    }

    long long noOfWays(int M, int N, int X)
    {
        // return solve(N, M, X);

        vector < vector<long long> dp(N + 1, vector<long long>(X + 1, -1));
        return solveMemo(N, M, X, dp)
    }
};