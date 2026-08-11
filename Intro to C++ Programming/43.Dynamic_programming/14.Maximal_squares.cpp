/*
We are given with a binary matrix havinng 0's and 1's
size of the matrix is n*m
we have to find thr maximum size square sub matrix with all 1's.
*/

class solution
{
public:
    int solve(vector<vector<int>> mat, int i, int j, int &maxi)
    {
        if (i >= mat.size() || j >= mat[0].size())
            return 0;

        int right = solve(mat, i, j + 1, maxi);
        int diagonal = solve(mat, i + 1, j + 1, maxi);
        int down = solve(mat, i + 1, j, maxi);

        if (mat[i][j] = '1')
        {
            int ans = 1 + min(right, min(diagonal, down));
            maxi = max(maxi, ans);
            return ans;
        }
        else
        {
            return 0;
        }
    }

    int solveMemo(vector<vector<int>> &mat, int i, int j, int &maxi, vector<vector<int>> &dp)
    {
        if (i >= mat.size() || j >= mat[0].size())
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int right = solveMemo(mat, i, j + 1, maxi, dp);
        int diagonal = solveMemo(mat, i + 1, j + 1, maxi, dp);
        int down = solveMemo(mat, i + 1, j, maxi, dp);

        if (mat[i][j] = '1')
        {
            dp[i][j] = 1 + min(right, min(diagonal, down));
            maxi = max(maxi, dp[i][j]);
            return dp[i][j];
        }
        else
        {
            return dp[i][j];
        }
    }


    int maxSquare(int n, int m, vector<vector<int>> mat)
    {
        // int maxi = 0;
        // solve(mat, 0, 0, maxi);
        // return maxi;

        int maxi = 0;
        vector<vector<int>> dp(n, vector<int>(m, -1));
        solveMemo(mat, 0, 0, maxi, dp);
        return maxi;
    }
};