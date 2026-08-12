/*
We will be given a data on the basis of satisfaction level
Chef is taking 1 unit of time to make 1 dish.

Like time coefficient of any dish is obtained by = TIme to make the dish * s[i] (Satisfaction level)

We have to find maximum sum of like time coefficients.

Dishes can be prepared in any order.
Chef can discard any dish.
*/

class solution
{
public:
    int solve(vector<int> &satisfaction, int index, int time)
    {
        // base case
        if (index == satisfaction.size())
            return 0;

        int include = satisfaction[index] * (time + 1) + solve(satisfaction, index + 1, time + 1);
        int exclude = 0 + solve(satisfaction, index + 1, time);

        return max(include, exclude);
    }

    int solveMemo(vector<int> &satisfaction, int index, int time, vector<vector<int>> &dp)
    {
        // base case
        if (index == satisfaction.size())
            return 0;

        if (dp[index][time] != -1)
            return dp[index][time];

        int include = satisfaction[index] * (time + 1) + solveMemo(satisfaction, index + 1, time + 1, dp);
        int exclude = 0 + solveMemo(satisfaction, index + 1, time, dp);

        return dp[index][time] = max(include, exclude);
    }

    int maxSatisfaction(vector<int> &satisfaction)
    {
        // sort the vector
        sort(satisfaction.begin(), satisfaction.end());
        // return solve(satisfaction, 0, 0);

        int n = satisfaction.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return solveMemo(satisfaction, 0, 0, dp);
    }
};