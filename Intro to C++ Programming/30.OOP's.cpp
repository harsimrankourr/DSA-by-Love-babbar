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

    // parameterized constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
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
    Hero batman(10);
    cout << "hello" << endl;

    cout << "address of batman " << &batman << endl;
    batman.getHealth();

    // dynamically
    Hero *h = new Hero(11);

    Hero temp(22, 'B');
}

//===========================================================================

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

    // parameterized constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
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
    Hero catman(70, 'C');
    catman.print();

    // copy constructor called
    Hero R(catman);
    R.print();
}

//====================================================================================

#include <iostream>
#include <cstring>
using namespace std;

class Hero
{

private:
    int health;

public:
    // properties
    char *name;
    char level;

    // constructor called
    Hero()
    {
        cout << "constructor called" << endl;
        name = new char[100];
    }

    // parameterized constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "Name " << this->name << endl;
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    /*
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[] = "harsimran";
    hero1.setName(name);

    hero1.print();

    // use default copy constructor

    Hero hero2(hero1);
    hero2.print();
    // Hero hero2 = hero1;

    hero1.name[0] = 'k';
    hero1.print();

    hero2.print();
*/
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[] = "harsimran";
    hero1.setName(name);

    // use default copy constructor

    Hero hero2(hero1);

    // Hero hero2 = hero1;

    hero1.name[0] = 'k';
    hero1.print();

    hero2.print();

    hero1 = hero2;

    hero1.print();

    hero2.print();

    return 0;
}

//==========================================================================================

// Destructor - Memopry deallocate

// jdd v objects out of stock hon wale hunde ne ya ohna da life tine khtam hon wala hunda hai  ta distructor call hunda hai and memory disallocate hundi hai
// class create hunde hi distructor create ho jnda hai / aap v create kr skde aan
// jo class da name houga distructor da v ohi name houga
// no return type
// no input parameters

// jo bhi object statically allocate hoya ohde lyi destructor automatically call hunda hai
// dynamically allocation wich destructor manually call krna pynda hai

#include <iostream>
#include <cstring>
using namespace std;

class Hero
{

private:
    int health;

public:
    // properties
    char *name;
    char level;

    // constructor called
    Hero()
    {
        cout << "constructor called" << endl;
        name = new char[100];
    }

    // parameterized constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "Name " << this->name << endl;
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // Destructor
    ~Hero()
    {
        cout << "destructor is called " << endl;
    }
};

int main()
{
    // static
    Hero a;

    // dynamic
    Hero *b = new Hero();
    // manually destructor called
    delete b;

    return 0;
}

//==================================================================================================

// Static keyword

// Creates such a data member which belongs to class
// ehde data member nu excess krn lyi object bnon di jrurat nai hundi

#include <iostream>
#include <cstring>
using namespace std;

class Hero
{

private:
    int health;

public:
    // properties
    char *name;
    char level;
    static int timeToComplete;

    // constructor called
    Hero()
    {
        cout << "constructor called" << endl;
        name = new char[100];
    }

    // parameterized constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "Name " << this->name << endl;
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // static function can access static member only
    // so it can not access health, name and level. it only  can access timeToComplete

    static int random()
    {
        cout << timeToComplete << endl;
    }
    // Destructor
    ~Hero()
    {
        cout << "destructor is called " << endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{

    cout << Hero::timeToComplete << endl;

    return 0;
}