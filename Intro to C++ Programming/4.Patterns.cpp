#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }
}

//=======================================

/*
–For printing
1111111
2222222
3333333
4444444
5555555
6666666
7777777
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

//=========================================================

/*
–For printing
123456
123456
123456
123456
123456
123456
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

//========================================================

/*
– For printing
654321
654321
654321
654321
654321
654321
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

//==================================================

/*

–To print
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

//======================================================

/*
–To print
*
* *
* * *
* * * *
* * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*" << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//=================================================

/*
–To print
1
2 2
3 3 3
4 4 4 4
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//==============================================

/*
–To print
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;
    int count = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//======================================================
/*
–To print
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//===========================================

/*
 –To print
1
2 1
3 2 1
4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= row)
        {
            cout << row - col + 1 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//===============================================

/*
–To print
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//==================================================

/*
–To print
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {
            char ch = 'A' + col - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//=====================================================

/*
–To print
ABC
BCD
CDE
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + row + col - 2;

            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//===================================================

/*
–To print
A
BB
CCC
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1;

            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//=======================================================

/*
–To print
A
B C
D E F
G H I J
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;
    char value = 'A';

    while (row <= n)
    {
        int col = 1;

        while (col <= row)
        {
            cout << value << " ";
            value = value + 1;

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//========================================================

/*
–To print
A
BC
CDE
DEFG
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= row)
        {
            char ch = ('A' + row + col - 2);
            cout << ch;

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//================================================================

/*
–To print
D
CD
BCD
ABCD
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        char start = 'A' + n - row;

        while (col <= row)
        {
            cout << start;
            start = start + 1;

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//==========================================================

/*
–To print
   *
  **
 ***
****
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//====================================================

/*
–To print
   1
  121
 12321
1234321
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter an integer  " << endl;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int j = 1;
        while (j <= row)
        {
            cout << j;
            j = j + 1;
        }

        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }
}

//=============================================
