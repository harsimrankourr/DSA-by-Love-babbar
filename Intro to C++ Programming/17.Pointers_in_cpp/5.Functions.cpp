#include <iostream>
using namespace std;

void print(int *p)
{

    cout << *p << endl;
}

int main()
{

    int value = 5;
    int *p = &value;

    print(p);

    return 0;
}

//===========================================================================

#include <iostream>
using namespace std;

void print(int *p)
{

    cout << *p << endl;
}

void update(int *p)
{

    // p = p+1;
    // cout << "inside " << p << endl;

    *p = *p + 1;
}

int main()
{

    int value = 5;
    int *p = &value;

    cout << "before " << p << endl;
    update(p);
    cout << "after " << p << endl;

    return 0;
}

//===============================================================================

// Some error in the size function

#include <iostream>
using namespace std;

int getSum(int arr[], int n)
{

    cout << endl
         << "size : " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "sum is " << getSum(arr, 5) << endl;

    return 0;
}

//============================================================================

// If we just need the sum of last 3 elements of the array

#include <iostream>
using namespace std;

int getSum(int arr[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "sum is " << getSum(arr + 3, 3) << endl;

    return 0;
}
