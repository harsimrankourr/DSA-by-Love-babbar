/*
We are  given with an array of integers  \
We just have to find the largest length of array having increasing subsequences
*/

/*
class Solution
{
public:
    int solve(int n, int a[], int curr, int prev)
    {
        // base casee
        if (curr == n)
        {
            return 0;
        }

        // include
        int take = 0;
        if (prev == -1 || a[curr] > a[prev])
            take = 1 + solve(n, a, curr + 1, curr);

        // exclude
        int notTake = 0 + solve(n, a, curr + 1, prev);

        return max(take, notTake);
    }

    int solveMemo(int n, int a[], int curr, int prev, vector<vector<int>> &dp)
    {
        // base casee
        if (curr == n)
        {
            return 0;
        }

        if (dp[curr][prev + 1] != 1)
            return dp[curr][prev + 1];

        // include
        int take = 0;
        if (prev == -1 || a[curr] > a[prev])
            take = 1 + solveMemo(n, a, curr + 1, curr, dp);

        // exclude
        int notTake = 0 + solveMemo(n, a, curr + 1, prev, dp);

        return dp[curr][prev] = max(take, notTake);
    }

    int solveTab(int n, int a[])
    {
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        for (int curr = n - 1; curr >= 0; curr--)
        {
            for (int prev = curr - 1; prev >= -1; prev--)
            {

                // include
                int take = 0;
                if (prev == -1 || a[curr] > a[prev])
                    take = 1 + dp[curr + 1][curr + 1];

                // exclude
                int notTake = 0 + dp[curr + 1][prev + 1];

                dp[curr][prev + 1] = max(take, notTake);
            }
        }
        // Returning 0 and -1 (but -1 isn't a valid index so add 1 in the -1 to make it valid index)
        return dp[0][-1];
    }

    int solveSo(int n, int a[])
    {
        vector<int> currRow(n + 1, 0);
        vector<int> nextRow(n + 1, 0);

        for (int curr = n - 1; curr >= 0; curr--)
        {
            for (int prev = curr - 1; prev >= -1; prev--)
            {

                // include
                int take = 0;
                if (prev == -1 || a[curr] > a[prev])
                    take = 1 + nextRow[curr + 1];

                // exclude
                int notTake = 0 + nextRow[prev + 1];

                currRow[prev + 1] = max(take, notTake);
            }
            nextRow = currRow;
        }
        return nextRow[0];
    }

    int solveOptimal(int n, int a[])
    {
        if (n == 0)
            return 0;

        vector<int> ans;
        ans.push_back(a[0]);

        for (int i = 1; i < n; i++)
        {
            if (a[i] > ans.back())
                ans.push_back(a[i]);
            else
            {
                // Find index of just bada element in ans
                int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
                ans[index] = a[i];
            }
        }
        return ans.size();
    }

    // Function to find length of longest increasing subsequences
    int longestSubsequence(int n, int a[])
    {
        // return solve(n, a, 0, -1);

        // // n+1 elements form -1 to n
        // vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        // return solveMemo(n, a, 0, -1, dp);

        // return solveTab(n, a);

        return solveOptimal(n, a);
    }
};

*/