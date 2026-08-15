/*
We are given with n number of cuboids
The dimensions of ith cuboid are i length, i width and i height
We have to choose subset of cuboids and place them on eacch other
such that width/height/length of the cunboid to be placed must be leass than equal to the cuboid at the base
We have to return the maximum height of the stacked cuboid
*/

/*
class solution
{
public:
    bool check(vector<int> base, vector<int> newBox)
    {
        if (newBox[0] <= base[0] && newBox[1] <= base[1] && newBox[2] <= base[2])
            return true;

        else
            return false;
    }

    int solveSo(int n, vector<vector<int>> &a)
    {
        vector<int> currRow(n + 1, 0);
        vector<int> nextRow(n + 1, 0);

        for (int curr = n - 1; curr >= 0; curr--)
        {
            for (int prev = curr - 1; prev >= -1; prev--)
            {

                // include
                int take = 0;
                if (prev == -1 || check(a[curr], a[prev]))
                    take = a[curr][2] + nextRow[curr + 1];

                // exclude
                int notTake = 0 + nextRow[prev + 1];

                currRow[prev + 1] = max(take, notTake);
            }
            nextRow = currRow;
        }
        return nextRow[0];
    }

    int maxHeight(vector<vector<int>> &cuboids)
    {
        // Step 1 - sort all dimensions for every cuboid
        for (auto &a : cuboids)
        {
            sort(a.begin(), a.end());
        }

        // Step 2- Sort all the cuboids on the basis of width and length
        sort(cuboids.begin(), cuboids.end());

        // Step 3- use LIS logic
        return solveSo(cuboids.begin(), cuboids);
    }
};

*/