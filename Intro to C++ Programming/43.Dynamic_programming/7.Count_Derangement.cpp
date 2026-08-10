/*
Count derangement

none element is at its original position.

We have a N
thet means there are 0 -> (n-1) elements ini the array

we assuming that there is 0 at the 0th index so if we want a brute force approach
there are (n-1) possibilities to place 0
coz can't place 0 on the 0th index only
rest of the places we cam place 0 anywhere

Example
    If we want to 0 to place on any ith position
    2 cases arrise
        - i will bw swaped with the 0 and rest there will be n-2 empty blocks and n-2 elements to settle down
            f(n-2)

        - 0 will be placed on the position of i but i isn't placed in the block of 0
            f(n-1)

so the obtained solution is
            f(n) = (n-1) * [f(n-2) + f(n-1)]
*/

#define MOD 1000000007

long long int solveMemo(int n, vector<long long int> &dp)
{
    // Base case
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = (((n - 1) % MOD) * ((solveMemo(n - 1, dp) % MOD) + (solveMemo(n - 2, dp) % MOD)));

    return dp[n];
}

long long int countDerangements(int n)
{
    vector<long long int> dp(n + 1, -1);
    return solveMemo(n, dp);
}