/*
Given N candies
If we buy a candy, we cann take atmost k other candies free

we have to return minimum amount of money with which we can buy the whole type of candies

also, have to return maximum amount of money
*/

/*
class Solution
{
public:
    vector<int> candyStore(intcandies[], int N, int k)
    {
        sort(candies, candies + N);

        int mini = 0;
        int buy = 0;
        int free = N - 1;

        while (buy <= free)
        {
            mini = mini + candies[buy];
            buy++;
            free = free - k;
        }

        int maxi = 0;
        buy = N - 1;
        free = 0

            while (free <= buy)
        {
            maxi = maxi + candies[buy];
            but--;
            free = free + k;
        }
        vector<int> ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};
*/