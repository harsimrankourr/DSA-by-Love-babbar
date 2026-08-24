#include <iostream>
using namespace std;

int main()
{

    int arr[10];

    cout << "address of first memory block is " << arr << endl;
    cout << "address of first memory block is " << &arr[0] << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {2, 5, 6};

    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;

    return 0;
}

//============================================================================

#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {23, 122, 41, 67};

    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;

    int i = 3;
    cout << i[arr] << endl;

    return 0;
}

//============================================================================

/*
#include<iostream>
using namespace std;


int main(){




    int temp[10];
    cout << Sizeof(temp) << endl;


    int *ptr = &temp[0];
    cout << Sizeof(ptr) << endl;
    cout << Sizeof(*ptr) << endl;


    return 0;
}


*/

//===========================================================================

#include <iostream>
using namespace std;

int main()
{

    int a[20] = {1, 2, 3, 5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    return 0;
}

//=========================================================================

#include <iostream>
using namespace std;

int main()
{

    int arr[10];

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}
