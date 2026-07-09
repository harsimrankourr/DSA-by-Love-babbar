
// coding ninjas
#include <bits/stdc++.h>
int countDistinctWays(int nStairs)
{

    // base case
    if (nStairs < 0)
        return 0;

    if (nStairs == 0)
        return 1;

    // R.C

    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);

    return ans;
}
//===========================================================================

// saying digits

#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{

    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call

    sayDigit(n, arr);

    cout << arr[digit] << " ";
}

int main()
{

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl
         << endl
         << endl;
    sayDigit(n, arr);
    cout << endl
         << endl
         << endl;

    return 0;
}