/*
All the houses of the street are arranged in a circle that means the first house is the neighbour of the last one.

If two adjacent houses are robbered then police will called.

Non- adjacent houses are robbered.

o/p - Maximum money with non adjacent houses

We just have to make sure in our ans if there is !st element is present last shouln't be present
if there element is present 1st shouln't be present.
*/

// long long int solve(vector<int> &nums, int n, vector<int> &dp)
// {
//     long long int n = nums.size();

//     long long int prev2 = 0;
//     long long int prev1 = nums[0];

//     for (int i = 1; i < n; i++)
//     {
//         long long int incl = prev2 + nums[i];
//         long long int excl = prev1 + 0;
//         long long int ans = max(incl, excl);
//         prev2 = prev2;
//         prev1 = ans;
//     }
//     return prev1;
// }

// long long int houseRobber(vector<int> &valueInHouse)
// {
//     int n = valueInHouse.size();

//     if (n == 1)
//         return valueInHouse[0];

//     vector<int> first, second;
//     for (int i = 0; i < n; i++)
//     {
//         if (i != n - 1)
//             first.push_back(valueInHouse[i]);
//         if (i != 0)
//             second.push_back(valueInHouse[i]);
//     }
//     return max(solve(first), solve(second));
// }
