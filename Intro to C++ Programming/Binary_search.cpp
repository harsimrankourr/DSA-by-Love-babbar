#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 20);

    cout << " Index of 20 is" << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 20);

    cout << " Index of 20 is " << oddIndex << endl;

    return 0;
}

//==============================================================

// First occurrence and last occurrence

#include <iostream>
#include <vector>
using namespace std;

int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
}

//==============================================================

/*
Pair <int, int> p;
P.first = firstOcc(int arr[], int n, int key)
P.second = lastOcc(int arr[], int n, int key)
*/

// Leetcode question

// Peak index in a mountain array

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;

        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};

//==================================================================

// Find pivot in an array

#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{

    int arr[5] = {8, 10, 17, 1, 3};

    cout << "Pivot is " << getPivot(arr, 5) << endl;
}

//==============================================================

// Search in rotated sorted array (coding ninjas)

/*
int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int search(int *arr, int n, int key)

{

    int Pivot = getPivot(arr, n);

    if (k >= arr[Pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, Pivot, n, k);
    }
    else
    {
        return binarySearch(arr, 0, Pivot - 1, k);
    }
}
*/

//=============================================================

/*

Square root of an element
 The range in which our answer lies is known as search space.
For example

*/

/*
For the square root of 25
Our search space is 0 to 25
*/

class Solution
{
public:
    int binarySearch(int n)
    {

        int s = 0;
        int e = n;
        long long int mid = s + (e - s) / 2;

        long long int ans = -1;
        while (s <= e)
        {

            long long int square = mid * mid;

            if (square == n)
                return mid;

            if (square < n)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
    int mySqrt(int x)
    {
        return binarySearch(x);
    }
};

//===============================================================

/*
Here we have mid*mid
But if mid*mid will out of our integer range
Then thats why we have to write long long int
*/

// Square root in float values

#include <iostream>
#include <math.h>
using namespace std;

long long int binarySearch(int n)
{

    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    long long int ans = -1;
    while (s <= e)
    {

        long long int square = mid * mid;

        if (square == n)
            return mid;

        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{

    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    int temSol = sqrt(n);
    cout << "Answer is " << morePrecision(n, 3, temSol);
    return 0;
}

//===============================================================

// Allocate books

/*
bool isPossible(vector<int> &arr, int n, int m, int mid)
{

    int studentCount = 1;
    int pageSum = 0;

    for ((int i = 0; i < n; i++))
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int> &arr, int n, int m)
{
    int s = 0,
        int sum = 0,

        for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
*/

//=================================================================

// Aggressive cows problem

/*

bool isPossible(vector<int> &stalls, int k, int mid)
{

    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {

        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int s = 0;

    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

*/