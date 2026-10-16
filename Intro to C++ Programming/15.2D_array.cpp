// Creation of a 2D array

#include <iostream>
using namespace std;

int main()
{

    // create 2D array
    int arr[3][4];

    // taking input (int)3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    return 0;
}

//---------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{

    // create 2D array
    int arr[3][4];

    // taking input (int)3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//---------------------------------------------------------------------

// Column wise output

#include <iostream>
using namespace std;

int main()
{

    // create 2D array
    int arr[3][4];

    // print
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//-----------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{

    int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    return 0;
}

//---------------------------------------------------------------

#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int i, int j)
{

    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int arr[3][4];

    // taking input (int)3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "Enter the element to search " << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 4))
    {
        cout << "element found " << endl;
    }
    else
    {
        cout << "Not found " << endl;
    }
    return 0;
}

//-------------------------------------------------------------------
