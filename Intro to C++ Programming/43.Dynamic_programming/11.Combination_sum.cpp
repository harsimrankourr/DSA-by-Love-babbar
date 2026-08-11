/*
We are given with size of array N and a Target
we have to make the combinations of the elements of array to get the sum or target
*/

int solve(vector<int> &num, int tar)
{
    // base case
    if (tar < 0)
        return 0;

    if (tar == 0)
        return 1;

    int ans = 0;
    for (int i = 0; i < num.size(); i++)
    {
        ans += solve(nums, tar - num[i]);
    }
    return ans;
}

int solveMemo(vector<int> &num, int tar, vector<int> &dp)
{
    // base case
    if (tar < 0)
        return 0;

    if (tar == 0)
        return 1;

    iF(dp[tar] != -1)
    {
        return dp[tar];
    }

    int ans = 0;
    for (int i = 0; i < num.size(); i++)
    {
        ans += solveMemo(nums, tar - num[i], dp);
    }
    dp[tar] = ans;
    return dp[tar];
}

int findWays(vector<int> &nums, int tar)
{
    // return solve(num, tar);

    vector<int> dp(tar + 1, -1);
    return solveMemo(num, tar, dp);
}