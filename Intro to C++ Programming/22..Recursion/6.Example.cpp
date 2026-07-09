#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{

    cout << " source " << src << " destination " << dest << endl;

    // base c ase
    if (src == dest)
    {
        cout << "reached home" << endl;
        return;
    }

    // processing - ik step agge
    src++;

    // recursive relation
    reachHome(src, dest);
}

int main()
{

    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);

    return 0;
}
