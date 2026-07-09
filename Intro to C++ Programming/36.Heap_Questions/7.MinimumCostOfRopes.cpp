
//N-ropes of different length
// Connect these ropes into 1
// Cost of connecting two ropes is the sum of their length
// Task is to connect the ropes with minimum cost

/*

class solution
{

public:
    long long minCost(long long arr[], long long n)
    {

        priority_queue<long long, vector<long long>, greater<long long>> pq;

        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }

        long long cost = 0;

        while (pq.size() > 1)
        {
            long long a = pq.top();
            pq.pop();

            long long b = pq.top();
            pq.pop();

            long long sum = a + b;
            cost += sum;

            pq.push(sum);
        }
        return cost;
    }
};

*/