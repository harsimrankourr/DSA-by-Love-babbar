// CHAR  ARRAY

#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cout << "Entre your name " << endl;
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

    return 0;
}

//================================================

#include <iostream>
using namespace std;

int main()
{
    char name[20];

    cout << "Entre your name " << endl;
    cin >> name;
    name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;

    return 0;
}

//=============================================

// LENNGTH OF CHAR

#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0', i++;)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout << "enter your name " << endl;
    cin >> name;
    // name [2] = '\0';

    cout << "your name is ";
    cout << name << endl;

    cout << "length " << getLength(name) << endl;

    return 0;
}

//====================================================

#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0', i++;)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout << "enter your name " << endl;
    cin >> name;
    // name [2] = '\0';

    cout << "your name is ";
    cout << name << endl;
    int len = getLength(name);

    cout << "length " << len << endl;
    cout << "your name is ";
    cout << name << endl;

    return 0;
}

//=====================================================

// UPPER AND LOWER CASE IN PALINDROME

#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0', i++;)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout << "enter your name " << endl;
    cin >> name;
    // name [2] = '\0';

    cout << "your name is ";
    cout << name << endl;
    int len = getLength(name);

    cout << "length " << len << endl;
    reverse(name, len);
    cout << "your name is ";
    cout << name << endl;

    cout << "palindrom or not: " << checkPalindrome(name, len) << endl;

    cout << "CHARACTER is " << toLowerCase('b') << endl;
    cout << "CHARACTER is " << toLowerCase('C') << endl;

    return 0;
}

//================================================================

// PALINDROME OR NOT

#include <iostream>
using namespace std;

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 0;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0', i++;)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout << "enter your name " << endl;
    cin >> name;
    // name [2] = '\0';

    cout << "your name is ";
    cout << name << endl;
    int len = getLength(name);

    cout << "length " << len << endl;
    reverse(name, len);
    cout << "your name is ";
    cout << name << endl;

    cout << "palindrom or not: " << checkPalindrome(name, len) << endl;

    return 0;
}

//=====================================================================

#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0', i++;)
    {
        count++;
    }
    return count;
}

char getMaxOccCharacter(string s)
{

    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}
int main()
{
    string s;
    cin >> s;
    cout << getMaxOccCharacter(s) << endl;

    return 0;
}
