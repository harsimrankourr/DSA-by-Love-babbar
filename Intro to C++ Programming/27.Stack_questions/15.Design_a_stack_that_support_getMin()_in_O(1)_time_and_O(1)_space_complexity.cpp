#include <stack>
#include <limits.h>
using namespace std;

class SpecialStack
{
    stack<int> s;
    int mini = INT_MAX;

public:

    void push(int data)
    {
        // First element
        if (s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            // New minimum
            if (data < mini)
            {
                s.push(2 * data - mini);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop()
    {
        if (s.empty())
        {
            return -1;
        }

        int curr = s.top();
        s.pop();

        // Normal value
        if (curr >= mini)
        {
            return curr;
        }
        else
        {
            // Encoded value
            int prevMin = mini;

            mini = 2 * mini - curr;

            return prevMin;
        }
    }

    int top()
    {
        if (s.empty())
        {
            return -1;
        }

        int curr = s.top();

        // Encoded value
        if (curr < mini)
        {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    bool isEmpty()
    {
        return s.empty();
    }

    int getMin()
    {
        if (s.empty())
        {
            return -1;
        }

        return mini;
    }
};