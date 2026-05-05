
// Bitwise operator

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a ^ b) << endl;
}

//==========================================

// Left / Right shift operator

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;
}

//===========================================

// Increment and Decrement (imp)

#include <iostream>
using namespace std;

int main()
{
    int i = 7;

    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;
}
