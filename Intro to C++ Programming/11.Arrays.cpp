#include <iostream>
using namespace std;

void printArray()
{
}

int main()
{

    int number[15];

    cout << "value at 14 index" << number[14] << endl;

    cout << endl
         << "everything is fine" << endl
         << endl;

    return 0;
}

//=======================================================================

#include <iostream>
using namespace std;

void printArray()
{
}

int main()
{

    int number[15];

    // accessing an array
    cout << "value at 14 index" << number[14] << endl;

    // initialising an array
    int second[3] = {5, 7, 11};

    // accessing an element
    cout << "value at 2 index" << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    cout << "printing the array" << endl;

    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }

    int fourth[10] = {0};
    n = 10;
    cout << "printing the array" << endl;

    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << fourth[i] << " ";
    }

    int fourth[10] = {0};

    cout << endl
         << "everything is fine" << endl
         << endl;

    return 0;
}

//=====================================================================

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    cout << "printing the array" << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}

int main()
{

    // declare
    int number[15];

    /// accessing an array
    cout << "value at 14 index" << number[14] << endl;

    // initialising an array
    int second[3] = {5, 7, 11};

    // accessing an element
    cout << "value at 2 index" << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    printArray(third, 15);

    // initialising all locations with 0
    int fourth[10] = {0};

    n = 10;
    printArray(fourth, 10);

    // initialising all locations with 1 (not possible with below line)
    int fifth[10] = {1};

    n = 10;
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "size of Fifth is " << fifthSize << endl;
}

//=============================================================================

#include <iostream>
using namespace std;

void printArray(char arr[], char size)
{

    cout << "printing the array" << endl;

    cout << "printing done" << endl;
}

int main()
{

    char ch[5] = {'a', 'b', 'c', 'g', 'y'};

    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << " printing done" << endl;

    cout << endl
         << "everything is fine" << endl;
    return 0;
}

//======================================================================

#include <iostream>
#include <climits>

using namespace std;

int getMin(int num[], int n)
{

    int mini = INT_MAX;

    for (int i = 0; i < n; n++)
    {

        mini = min(mini, num[i]);

        // if (num[i] <min){
        // min = num[i];
        // }
    }
    // returning min value
    return mini;
}

int getMax(int num[], int n)
{

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        maxi = max(maxi, num[i]);

        // if (num[i]> max){
        // max = num[i];
        // }
    }
    // return max value
    return maxi;
}

int main()
{
    int size;
    cin >> size;

    int num[100];

    // taking input in array

    for (int i = 0; i < size; i++)
        cin >> num[i];

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;
}

//======================================================================

// LINEAR SEARCH

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << "enter the key to search for" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present" << endl;
    }

    else
    {
        cout << "key is absent" << endl;
    }
}

//====================================================================

// REVERSE AN ARRAY

#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{

    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}

//=========================================================================

// SWAP ALTERNATE

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int even[8] = {5, 2, 4, 7, 3, 9, 1, 5};
    int odd[5] = {11, 9, 79, 13, 49};

    swapAlternate(even, 8);
    printArray(even, 8);
    return 0;
}

//=================================================================

/*

Find all duplicates in array (question of leetcode)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int> result;


        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    result.push_back(nums[i]);


                    break;
                }
            }
        }



        return result ;
    }
};

*/