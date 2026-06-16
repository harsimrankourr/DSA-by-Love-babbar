/*
4 pillars of OOP's

    1.Encapsulation
    2.Inheritance
    3.Abstraction
    4.Polymorphism

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

//========================================================================

/*

2.Inheritance - properties can be inherit from class A to class B
    super / parent class
    sub / child class

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

class Male : public Human
{

public:
    string color;

    void sleep()
    {
        cout << "male sleeping" << endl;
    }
};

int main()
{

    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;

    object1.setWeight (84);
    cout << object1.weight << endl;
    object1.sleep();

    return 0;
}