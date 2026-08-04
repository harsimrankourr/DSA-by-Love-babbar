// Using Top down approach - recursion and memorization

#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &dp)
{
    // base case
    if (n <= 1)
        return n;

    // step 3
    if (dp[n] != -1)
        return dp[n];

    // step 2
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << fib(n, dp) << endl;

    return 0;
}

//==============================================================================

// Using bottom up approach - Tabulation

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Step 1
    vector<int> dp(n + 1);
    // Step 2
    dp[1] = 1;
    dp[0] = 0;

    // Step 3
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];

        cout << dp[n] << endl;
    }
}
