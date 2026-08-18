// Best timr to buy and sell stocks 11 on leetcode

class Solution
{
public:
    int solve(int index, int buy, vector<int> &prices)
    {
        if (index == prices.size())
            return 0;

        int profit = 0;
        if (buy)
        {
            int buyIt = -prices[index] + solve(index + 1, 0, prices);
            int skipIt = 0 + solve(index + 1, 1, prices);

            profit = max(buyIt, skipIt);
        }
        else
        {
            int sellIt = +prices[index] + solve(index + 1, 1, prices);
            int skipIt = 0 + solve(index + 1, 0, prices);

            profit = max(sellIt, skipIt);
        }
        return profit;
    }

    int solveMemo(int index, int buy, vector<int> &prices, vector<vector<int>> &dp)
    {
        if (index == prices.size())
            return 0;

        if (dp[index][buy] != -1)
            return dp[index][buy];

        int profit = 0;
        if (buy)
        {
            int buyIt = -prices[index] + solveMemo(index + 1, 0, prices, dp);
            int skipIt = 0 + solveMemo(index + 1, 1, prices, dp);

            profit = max(buyIt, skipIt);
        }
        else
        {
            int sellIt = +prices[index] + solveMemo(index + 1, 1, prices, dp);
            int skipIt = 0 + solveMemo(index + 1, 0, prices, dp);

            profit = max(sellIt, skipIt);
        }
        return dp[index][buy] = profit;
    }

    int maxProfit(vector<int> &prices)
    {
        // return solve(0, 1, prices);

        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));

        return solveMemo(0, 1, prices, dp);
    }
};