
/*
    *Polymorphism - poly means many and morphs means forms
        so polymorphism means existing in multiple forms

        there are two types of polymorphism
            1. compile time polymorphism - compile time te pta lg jaye k kerhi cgeez kis kis form ch exist kr rhi hai
                    it is of two types
                    a. function overloading
                    b.operator overloading

            2. run time polymorphism


*/

// Compile time polymorphism's (static polymorphism) two types

// Function oveerloading

#include <iostream>
using namespace std;

class A
{

public:
    void satHello()
    {
        cout << "Hello harsimran" << endl;
    }

    int sayHello(char name)
    {
        cout << "Hello harsimran" << name << endl;
        return 1;
    }

    void sayHello(string name)
    {
        cout << "Hello" << name << endl;
    }
};

int main()
{

    A obj;

    obj.sayHello("harcharan");

    return 0;
}

//===============================================================================

// Operator overloading

#include <iostream>
using namespace std;

class A
{

public:
    void satHello()
    {
        cout << "Hello harsimran" << endl;
    }

    int sayHello(char name)
    {
        cout << "Hello harsimran" << name << endl;
        return 1;
    }

    void sayHello(string name)
    {
        cout << "Hello" << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output" << value2 - value1 << endl;
    }
};

int main()
{

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    return 0;
}

//==============================================================================

// Run time polymorphism (dynamic polymorphism)

// ik particular method nu same naam di different implimentation dehni
/*
there are some rule of method/Function implimentation
    - name of super and sub class must be same
    - argument of function must be same
    - inheritance important
*/

#include <iostream>
using namespace std;

class Animal
{

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{

public:
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main()
{

    Dog obj;
    obj.speak();

    return 0;
}
