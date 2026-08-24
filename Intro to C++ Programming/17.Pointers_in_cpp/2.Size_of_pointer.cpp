#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    cout << num << endl;

    // address of operator - &

    cout << "Address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Value is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "size of integer is " << sizeof(num) << endl;
    cout << "size of pointer is " << sizeof(ptr) << endl;

    cout << "size of pointer is " << sizeof(p2) << endl;

    return 0;
}

//============================================================================

#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    int a = num;
    a++;

    cout << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    return 0;
}

//=============================================================================

#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    int a = num;
    a++;

    cout << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    int *q = p;

    cout << p << " - " << endl;
    cout << *p << " - " << *q << endl;

    return 0;
}

//=======================================================================

#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    int a = num;
    a++;

    cout << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

    int *q = p;

    cout << p << " - " << endl;
    cout << *p << " - " << *q << endl;

    // important concept
    int i = 3;
    int *t = &i;
    // cout << (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << "before t " << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;

    return 0;
}
