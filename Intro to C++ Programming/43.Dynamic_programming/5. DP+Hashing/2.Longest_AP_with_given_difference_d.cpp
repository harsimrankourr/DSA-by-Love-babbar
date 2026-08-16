/*
We are  given with an integer array and a commom difference
We have to return the length of the largest subsequence in arr which is an AP

Approach
     At every element we will check is there before that element, any element present having given difference d
*/

/*
class Solution
{
public:
    int longestSubsequence(vector<int> &arr, int difference)
    {
        unordered_map<int, int> dp;
        int ans = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            int temp = arr[i] - difference;
            int tempAns = 0;

            // check answer exist for temp already or not
            if (dp.count(temp))
                tempAns = dp[temp];

            // current answer update
            dp[arr[i]] = 1 + tempAns;

            // Ans update
            ans = max(ans, dp[arr[i]]);
        }
        return ans;
    }
};
*/