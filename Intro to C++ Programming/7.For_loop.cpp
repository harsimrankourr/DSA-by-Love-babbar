
// With initialization, condition and updation-

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;

    cout << "printing count from 1 to n" << endl;

    int i = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        i++;
    }
}

//====================================================

// Without initialisation, condition and updation-

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;

    cout << "printing count from 1 to n" << endl;

    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }
}

//====================================================

// Sum of n numbers

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter the value of n " << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

//=====================================================

// Fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int a = 0;
    int b = 1;
    cout << a << " " << b << "";

    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }
}

//=====================================================

// Given number is a prime or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not a prime number" << endl;
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "not a prime number" << endl;
    }
    else
    {
        cout << "is a prime number " << endl;
    }
}

//===============================================

// Use of continue in code

#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 5; i++)
    {

        cout << "hi" << endl;
        cout << "hey" << endl;

        continue;
        cout << "reply please" << endl;
    }
}
