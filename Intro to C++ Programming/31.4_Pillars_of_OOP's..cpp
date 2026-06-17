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
//========================================================================================

/*

2.Inheritance - properties can be inherit from class A to class B
    super / parent class
    sub / child class

    *types of inheritance
        single
        multiple
        multilevel
        hybrid
        hierarchical


protected is similar to private
accessible inside the class
child class can access

*/

#include <iostream>
using namespace std;

class Human
{

public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : protected Human
{

public:
    string color;

    void sleep()
    {
        cout << "male sleeping" << endl;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{
    Male m1;
    cout << m1.getHeight() << endl;

    // Male object1;
    // cout << object1.age << endl;
    // cout << object1.weight << endl;
    // cout << object1.height << endl;

    // cout << object1.color << endl;

    // object1.setWeight (84);
    // cout << object1.weight << endl;
    // object1.sleep();

    // object1.setWeight(84);

    return 0;
}

//===================================================================================

// single inheritance

/*
#include <iostream>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
};

int main()
{

    Dog d;
    d.speak();

    return 0;
}

*/
//===============================================================================

// Multilevel inheritajnce

/*
#include <iostream>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
};

class GermanShepherd : public Dog
{
};

int main()
{

    GermanShepherd g;
    g.speak();

    return 0;
}

*/
//====================================================================================

// Multiple inheritance

/*
#include <iostream>
using namespace std;

class Animal
{

public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

class Human
{

public:
    string color;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

// multiple inheritance
class Hybrid : public Animal, public Human
{
};

int main()
{

    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}

*/

//===============================================================================================

// Hierarchical inheritance

/*
#include <iostream>
using namespace std;

class A
{

public:
    void func1()
    {
        cout << "Inside the function 1" << endl;
    }
};

class B : public A
{

public:
    void func2()
    {
        cout << "Inside the  function 2" << endl;
    }
};

class C : public A
{

public:
    void func3()
    {
        cout << "Inside thr function 3" << endl;
    }
};

int main()
{

    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();

    return 0;
    ;
}
*/

//================================================================================

// Hybrid inheritance

// combination of more than one type of inheritance

//==============================================================================

// Inheritance Ambiguity

/*
#include <iostream>
using namespace std;

class A
{

public:
    void func()
    {
        cout << "I am A" << endl;
    }
};

class B
{

public:
    void func()
    {
        cout << "I am B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{

    C obj;
    // obj.func();

    obj.A::func();
    obj.B::func();

    return 0;
}

*/
//===================================================================================

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
