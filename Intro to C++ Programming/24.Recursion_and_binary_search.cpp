// Sorting with thd help of recursion

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{

    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{

    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "array is sorted " << endl;
    }

    else
    {
        cout << "array is not sorted " << endl;
    }

    return 0;
}

//========================================================================

// sum of an array with recursion

#include <iostream>
using namespace std;

int getSum(int *arr, int size)
{

    // base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remainingPart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;

    return sum;
}

int main()
{

    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "sum is " << sum << endl;

    return 0;
}

//==========================================================================

// Linear search with recursion

#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k)
{

    // base case
    if (size == 0)
        return false;

    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}

int main()
{

    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 2;
    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }

    return 0;
}

//==============================================================================

// to check the above code how is working

#include <iostream>
using namespace std;

void print(int arr[], int n)
{

    cout << "size of array is " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int k)
{
    print(arr, size);
    // base case
    if (size == 0)
        return false;

    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}

int main()
{

    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 2;
    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }

    return 0;
}

//===========================================================================

// binary search with recursion

// first condition of vinary search is array should be sorted

#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{

    // base case
    // elemment not found
    if (s > e)
    {
        return false;

        int mid = s + (e - s) / 2;

        // element found
        if (arr[mid] == k)
            return true;

        if (arr[mid] < k)
        {
            return binarySearch(arr, mid + 1, e, k);
        }
        else
        {
            return binarySearch(arr, s, mid - 1, k);
        }
    }
    return 0;
}

int main()
{

    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int key = 18;

    cout << "present or not " << binarySearch(arr, 0, 5, key) << endl;

    return 0;
}

//========================================================================

