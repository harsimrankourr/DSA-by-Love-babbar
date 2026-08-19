// Greedy algorithm is a programming technique to find the optimal solution at that particular moment
// It may not be global optimal but it must be local optimal

/*
We are given with a room
There is the possibility of only 1 meeting at a time
We have total N meetings
along with that we have start time and end time

We have to return maximum number of meetings that can be held in that room.
*/

/*
class Solution
{
public:
    static bool cmp(pair<int, int> a, pair<int, int> b)
    {
        return a.second < b.second;
    }

    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            pair<int, int> p = make_pair(start[i], end[i]);
            v.push_back(p);
        }

        sort(v.begin(), v.end(), cmp);

        int count = 1;
        int ansEnd = v[0].second;

        for (int i = 1; i < n; i++)
        {
            if (v[i].first > ansEnd)
            {
                count++;
                ansEnd = v[i].second;
            }
        }
        return count;
    }
};

*/