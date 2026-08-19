/*

class Solution
{
public:

    int solveSo(vector<int> &prices, int k)
    {
        int n = prices.size();

        vector<vector<int>> curr(2, vector<int>(k+1, 0));
        vector<vector<int>> next(2, vector<int>(k +1, 0));

        for (int index = n - 1; index >= 0; index--)
        {
            for (int buy = 0; buy <= 1; buy++)
            {
                for (int limit = 1; limit <= k; limit++)
                {
                    int profit = 0;
                    if (buy)
                    {
                        int buyIt = -prices[index] + next[0][limit];
                        int skipIt = 0 + next[1][limit];

                        profit = max(buyIt, skipIt);
                    }
                    else
                    {
                        int sellIt = +prices[index] + next[1][limit - 1];
                        int skipIt = 0 + next[0][limit];

                        profit = max(sellIt, skipIt);
                    }
                    curr[buy][limit] = profit;
                }
            }
            next = curr;
        }
        return next[1][k];
    }

    int maxProfit(int k, vector<int> &prices)
    {
        return solveSo(prices,k);
    }
};

*/

/*
class Solution
{
public:
    int solve(int index, int operationNo, int k, vector<int> &prices)
    {
        if (index == prices.size())
            return 0;

        if (operationNo == 2 * k)
            return 0;

        int profit = 0;

        if (operationNo % 2 == 0)
        {
            // Buy allowed
            int buyIt = -prices[index] + solve(index + 1, operationNo + 1, k, prices);
            int skipIt = 0 + solve(index + 1, operationNo, k, prices);

            profit = max(buyIt, skipIt);
        }
        else
        {
            int sellIt = +prices[index] + solve(index + 1, operationNo + 1, k, prices);
            int skipIt = 0 + solve(index + 1, operationNo, k, prices);

            profit = max(sellIt, skipIt);
        }
        return profit;
    }

    int solveMemo(int index, int operationNo, int k, vector<int> &prices, vector<vector<int>> &dp)
    {
        if (index == prices.size())
            return 0;

        if (operationNo == 2 * k)
            return 0;

        if (dp[index][operationNo] != -1)
            return dp[index][operationNo];

        int profit = 0;

        if (operationNo % 2 == 0)
        {
            // Buy allowed
            int buyIt = -prices[index] + solveMemo(index + 1, operationNo + 1, k, prices, dp);
            int skipIt = 0 + solveMemo(index + 1, operationNo, k, prices, dp);

            profit = max(buyIt, skipIt);
        }
        else
        {
            int sellIt = +prices[index] + solveMemo(index + 1, operationNo + 1, k, prices, dp);
            int skipIt = 0 + solveMemo(index + 1, operationNo, k, prices, dp);

            profit = max(sellIt, skipIt);
        }
        return dp[index][operationNo] = profit;
    }

    int solveTab(int k, vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(2 * k + 1, 0));

        for (int index = n - 1; index >= 0; index--)
        {
            for (int operationNo = 0; operationNo < 2 * k; operationNo++)
            {

                int profit = 0;

                if (operationNo % 2 == 0)
                {
                    // Buy allowed
                    int buyIt = -prices[index] + dp[index + 1][operationNo + 1];
                    int skipIt = 0 + dp[index + 1][operationNo];

                    profit = max(buyIt, skipIt);
                }
                else
                {
                    int sellIt = +prices[index] + dp[index + 1][operationNo + 1];
                    int skipIt = 0 + dp[index + 1][operationNo];

                    profit = max(sellIt, skipIt);
                }
                dp[index][operationNo] = profit;
            }
        }
        return dp[0][0];
    }

    int solveSo(int k, vector<int> &prices)
    {
        int n = prices.size();

        vector<int> curr(2 * k + 1, 0);
        vector<int> next(2 * k + 1, 0);

        for (int index = n - 1; index >= 0; index--)
        {
            for (int operationNo = 0; operationNo < 2 * k; operationNo++)
            {

                int profit = 0;
                if (operationNo % 2 == 0)
                {
                    // buy allowed
                    int buyIt = -prices[index] + next[operationNo + 1];
                    int skipIt = 0 + next[operationNo];
                    profit = max(buyIt, skipIt);
                }
                else
                {
                    int sellIt = prices[index] + next[operationNo + 1];
                    int skipIt = 0 + next[operationNo];
                    profit = max(sellIt, skipIt);
                }
                curr[operationNo] = profit;
            }
            next = curr;
        }
        return next[0];
    }

    int maxProfit(int k, vector<int> &prices)
    {
        // return solve(0, 0, k, prices);

        // int n = prices.size();
        // vector<vector<int>> dp(n, vector<int>(2 * k, -1));
        // return solveMemo(0, 0, k, prices, dp);

        // return solveTab(k, prices);

        return solveSo(k, prices);
    }
};

*/