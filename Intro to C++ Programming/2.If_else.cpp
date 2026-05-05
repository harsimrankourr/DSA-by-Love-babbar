#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "value of n is : " << n << endl;
}

//=============================================

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n > 0)
    {
        cout << "a is positive" << endl;
    }
    else
    {
        cout << "a is negative" << endl;
    }
}

//=============================================

#include <iostream>demo
using namespace std;

int main()
{
    int a, b;
    cout << "Give the values of a and b separated by space: " << endl;
    cin >> a >> b;

    cout << "value of a and b is " << a << ", " << b << endl;
}

//==========================================

#include <iostream>demo
using namespace std;

int main()
{
    int a, b;
    a = cin.get();
    cout << " value of a is : " << a << endl;
}

//===========================================

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b " << endl;
    cin >> b;

    if (a > b)
    {
        cout << "a is greater" << endl;
    }
    if (b > a)
    {
        cout << "b is greater" << endl;
    }
}

//==========================================

// To check the number is positive negative or zero
// First approach is

#include <iostream>
using namespace std;

int main()
{ 
    int a;
    cout << "enter the value of a " << endl;
    cin >> a;

    if (a > 0)
    {
        cout << "a is positive";
    }
    else
    {
        if (a < 0)
        {
            cout << "a is negative";
        }
        else
        {
            cout << "a is 0";
        }
    }
}
   

    //==========================================

    // But the better approach is :

#include <iostream>
    using namespace std;

    int main()
    {
        int a;
        cout << "enter the value of a " << endl;
        cin >> a;

        if (a > 0)
        {
            cout << "a is positive";
        }
        else if (a < 0)
        {
            cout << "a is negative";
        }
        else
        {
            cout << "a is 0";
        }
    }

    //=========================================

#include <iostream>
    using namespace std;

    int main()
    {
        char ch;
        cout << "enter the value of ch " << endl;
        cin >> ch;

        // ch = 'g' --> This is Character
        // str = "hello" ---> This is String

        if (ch >= 'a' && ch <= 'z')
        {
            cout << "this is lower case ";
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            cout << "this is upper case";
        }
        else
        {
            cout << "this is numeric";
        }
    }

    //========================================
