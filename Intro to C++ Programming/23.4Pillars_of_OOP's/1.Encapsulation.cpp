/*

1.Encapsulation - wrapping up of data members (properties / state) and functions (methods / behaviours)
        it isw basically information hidding

    *Fully encapsulated class- all the data members are private marked (only same class can access them)

    *Advantagess
        Data hide
        high security
        code reuse
        if we want we can make class - "Read only"
        encapsulation helps in unit testing

*/

#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{

    Student first;

    cout << "all ok " << endl;

    return 0;
}