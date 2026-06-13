// reverse the string

#include <iostream>
using namespace std;

void reverse(string &str, int i, int j)
{

    // base case
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    // recursive call
    reverse(str, i, j);
}

int main()
{

    string name = "harsimran";

    reverse(name, 0, name.length() - 1);

    cout << name << endl;

    return 0;
}

//=========================================================================

// check palindrom

#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{

    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    else
    {
        // recursive call
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int main()
{

    string name = "abbcbba";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if (isPalindrome)
    {
        cout << "Its a palindrom" << endl;
    }

    else
    {
        cout << "Its not a Palindrome" << endl;
    }

    return 0;
}

//========================================================================

//power of a number 
//optimised way

#include <iostream>
using namespace std;

int power(int a, int b)
{

    // base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // recursive call
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }

    else
    {
        // if b is odd
        return a * ans * ans;
    }
}

int main()
{

    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << "Answer is " << ans << endl;

    return 0;
}
