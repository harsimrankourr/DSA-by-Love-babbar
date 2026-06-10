// FACTORIAL OF A NUMBER

#include <iostream>
using namespace std;

int factorial(int n)
{

    // base case
    if (n == 0)
        return 1;

    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main()
{

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}

//===============================================================

// Power of 2

#include <iostream>
using namespace std;

int power(int n)
{

    // base case
    if (n == 0)
        return 1;

    // recursive relation
    int smallerProblem = power(n - 1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;
}

int main()
{

    int n;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;

    return 0;
}

//===========================================================

// Tall recursion(reverse counting)

#include <iostream>
using namespace std;

void print(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    cout << n << endl;

    // recursive relation
    print(n - 1);
}

int main()
{

    int n;
    cin >> n;

    cout << endl;
    print(n);

    return 0;
}

//==================================================================

// Head recursion

#include <iostream>
using namespace std;

void print(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive relation
    print(n - 1);

    cout << n << endl;
}

int main()
{

    int n;
    cin >> n;

    cout << endl;
    print(n);

    return 0;
}
