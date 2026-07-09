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