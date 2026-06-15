/*
OOPs is a programming paradrigm/ technique/ style thet organises software designs around a data or object, rather than functions and logics

- real world close
- readability increase
- managebility increases

-class is a user defined data type

(int string char all are in built data types)

- object is intance of class


*/

#include <iostream>
using namespace std;

class Hero
{

    // properties
    int health;
};

int main()
{

    // creation of object
    Hero h1;

    // there is only an integer in calss so size will be 4 bytes
    cout << "Size : " << sizeof(h1) << endl;

    return 0;
}

// empty class ch object  nu 1 byte menory alot ho jndi aah

//===================================================================

/*
#include <iostream>
using namespace std;

class Hero
{

public:
    // properties
    int health;
    char level;
};

int main()
{

    // creation of object
    Hero batman;

    cout << "health is: " << batman.health << endl;
    cout << "level is: " << batman.level << endl;

    return 0;
}
*/
//=====================================================================

// GETTERS AND SETTERS

// getter is for fetchinng data and  setter  is for conditioin

#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    // properties
    char level;

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // creation of object
    Hero batman;

    cout << "batman healthh is " << batman.getHealth() << endl;

    // use of setter
    batman.setHealth(70);
    batman.level = 'A';

    cout << "health is: " << batman.getHealth() << endl;
    cout << "level is: " << batman.level << endl;

    return 0;
}

//========================================================================

#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    // properties
    char level;

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // static allocation
    Hero a;

    a.setLevel('B');
    a.setHealth(80);

    cout << "level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;

    // dynamic allocation
    Hero *b = new Hero;

    b->setLevel('A');
    b->setHealth(70);

    cout << "level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;

    // Or

    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;

    return 0;
}

//=========================================================================

// Constructor call

#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    // properties
    char level;

    // constructor called
    Hero()
    {
        cout << "constructor called" << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // object created statically
    cout << "Hi" << endl;
    Hero batman;
    cout << "hello" << endl;
}