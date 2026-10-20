#include <iostream>
using namespace std;

int main()
{

    int i = 5;

    // create a ref variable

    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    return 0;
}

//-----------------------------------------------------------------

// Pass by reference

#include <iostream>
using namespace std;

void update2(int &n)
{
    n++;
}

void update1(int n)
{
    n++;
}

int main()
{

    int n = 5;

    cout << "before " << n << endl;

    update1(n);
    cout << "after " << n << endl;

    update2(n);
    cout << "after value " << n << endl;

    return 0;
}

//-------------------------------------------------------------

// Size of a dynamic memory

#include <iostream>
using namespace std;

int main()
{

    char ch = 'q';
    cout << sizeof(ch) << endl;

    char *c = &ch;
    cout << sizeof(c) << endl;

    return 0;
}

//--------------------------------------------------------------

// Creating a variable array

#include <iostream>
using namespace std;

int getSum(int *arr, int n)
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

    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n];

    // taking input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is " << ans << endl;

    return 0;
}

//--------------------------------------------------------------