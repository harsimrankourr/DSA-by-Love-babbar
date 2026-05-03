#include <iostream>
using namespace std;

int main()
{

    cout << "Hello world :-)" << endl;
}

//==========================================================

#include <iostream>
using namespace std;

int main()
{

    cout << "Hi, i am harsimran";
    cout << "\n";
}

//========================================================

#include <iostream>
using namespace std;
int main()
{

    int a = 123;

    cout << a << endl;

    int size = sizeof(a);
    cout << "size of a is:" << size << endl;
}

//=======================================================

#include <iostream>
using namespace std;

int main()
{

    bool bl = true;

    cout << bl << endl;
}

//====================================================

#include <iostream>
using namespace std;

int main()
{

    float f = 1.2;

    cout << f << endl;
}

//======================================================

#include <iostream>
using namespace std;

int main()
{
    double d = 1.23;
    cout << d << endl;

    int size = sizeof(d);
    cout << "size of d is:" << size << endl;
}

//======================================================

#include <iostream>
using namespace std;
int main()
{
    int a = 'a';
    cout << a << endl;
}

//======================================================

#include <iostream>
using namespace std;

int main()
{
    char ch = 98;
    cout << ch << endl;
}

//====================================================

#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 112; // for positive numbers
    cout << a << endl;
}

//=====================================================

#include <iostream>
using namespace std;

int main()
{
    int a = 2 / 5;
    cout << a << endl;
}

//======================================================

#include <iostream>
using namespace std;

int main()
{
    float a = 2.0 / 5;
    cout << a << endl;
}

//========================================================

#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;

    bool first = (a <= b);
    cout << first << endl;

    bool second = (a >= b);
    cout << second << endl;

    bool third = (a < b);
    cout << third << endl;

    bool forth = (a > b);
    cout << forth << endl;

    bool fifth = (a == b);
    cout << fifth << endl;

    bool sixth = (a != b);
    cout << sixth << endl;
}
