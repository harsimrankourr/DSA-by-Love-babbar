/*
We are given with an array arr[] of sorted integers having no duplicated
We have to find the longest Arithmatic progression
*/

/*
class Solution
{
public:
    int solve(int index, int diff, int A[])
    {
        // backward check
        if (index < 0)
            return 0;

        int ans = 0;
        for (int j = index - 1; j >= 0; j--)
        {
            if (A[index] - A[j] == diff)
            {
                ans = max(ans, 1 + solve(j, diff, A));
            }
        }
        return ans;
    }

    // indexes depend upon the size of array
    //  at every index different/Multiple differences willl stored in the dp
    //  An unordered map is there at every index which stores difference and length of longest ap at every index

    int solveMemo(int index, int diff, int A[], unordered_map<int, int> dp[])
    {
        // backward check
        if (index < 0)
            return 0;

        if (dp[index].count(diff))
            return dp[index][diff];

        int ans = 0;
        for (int j = index - 1; j >= 0; j--)
        {
            if (A[index] - A[j] == diff)
            {
                ans = max(ans, 1 + solveMemo(j, diff, A, dp));
            }
        }
        return [index][diff] = ans;
    }

    int lengthOfLongestAP(int A[], int n)
    {
        if (n <= 2)
            return n;

        int ans = 0;

        unordered_map<int, int> dp[n + 1];

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = max(ans, 2 + solve(i, A[j] - A[i], dp));
            }
        }
        return ans;
    }
};

//==================================================================================

// The optimal soltion

class Solution
{
public:
    int lengthOfLongestAP(int A[], int n)
    {
        if (n <= 2)
            return n;

        int ans = 0;

        unordered_map<int, int> dp[n + 1];

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int diff = A[i] - A[j];
                int cnt = 1;

                // check if answer already present
                if (dp[j].count(diff))
                    cnt = max(ans, dp[i][diff]);
            }
        }
        return ans;
    }
};

*/