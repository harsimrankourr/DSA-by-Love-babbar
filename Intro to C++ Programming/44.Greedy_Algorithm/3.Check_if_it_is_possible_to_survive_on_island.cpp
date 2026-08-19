/*

class Solution
{
public:
    int minimumDays(int S, int N, int M)
    {
        int sunday = S / 7;

        int buyingDays = S - sunday;
        int totalFood = S * M;

        // ans = minimum number of days i have to buy the food
        if (totalFood % N == 0)
        {
            ans = totalFood / N;
        }
        else
        {
            ans = totalFood / N + 1;
        }

        if (ans <= buyingdays)
            return ans;
        else
            return -1;
    }
};

*/