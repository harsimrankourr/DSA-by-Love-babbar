// 3-D DP

class Solution
{
public:
    int solve(int index, int buy, vector<int> &prices, int limit)
    {
        if (index == prices.size())
            return 0;

        if (limit == 0)
            return 0;

        int profit = 0;
        if (buy)
        {
            int buyIt = -prices[index] + solve(index + 1, 0, prices, limit);
            int skipIt = 0 + solve(index + 1, 1, prices, limit);

            profit = max(buyIt, skipIt);
        }
        else
        {
            int sellIt = +prices[index] + solve(index + 1, 1, prices, limit - 1);
            int skipIt = 0 + solve(index + 1, 0, prices, limit);

            profit = max(sellIt, skipIt);
        }
        return profit;
    }

    int solveMemo(int index, int buy, vector<int> &prices, int limit, vector<vector<vector<int>>> &dp)
    {
        if (index == prices.size())
            return 0;

        if (limit == 0)
            return 0;

        if (dp[index][buy][limit] != -1)
            return dp[index][buy][limit];

        int profit = 0;
        if (buy)
        {
            int buyIt = -prices[index] + solveMemo(index + 1, 0, prices, limit, dp);
            int skipIt = 0 + solveMemo(index + 1, 1, prices, limit, dp);

            profit = max(buyIt, skipIt);
        }
        else
        {
            int sellIt = +prices[index] + solveMemo(index + 1, 1, prices, limit - 1, dp);
            int skipIt = 0 + solveMemo(index + 1, 0, prices, limit, dp);

            profit = max(sellIt, skipIt);
        }
        return dp[index][buy][limit] = profit;
    }

    int maxProfit(vector<int> &prices)
    {
        // return solve(0, 1, prices, 2);

        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));

        return solveMemo(0, 1, prices, 2, dp);
    }
};