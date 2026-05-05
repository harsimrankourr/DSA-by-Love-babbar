
#include <iostream>
using namespace std;

int main()
{

    int a = 3;
    cout << a << endl;

    if (true)
    {
        int a = 5;
        cout << a << endl;
    }
}

//======================================

/*
In order to find
(2*3*4) - (2+3+4)
*/

#include <iostream>
using namespace std;

int main()
{

    int n = 234;
    int prod = 1;
    int sum = 0;

    while (n != 0)
    {

        int digit = n % 10;
        prod = prod * digit;
        ;
        sum = sum + digit;

        n = n / 10;
    }
    int answer = prod - sum;
    cout << answer << endl;
    return 0;
}
