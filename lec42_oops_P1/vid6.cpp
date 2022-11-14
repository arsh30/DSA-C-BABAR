// DEEP AND SHALLOW COPY
/*
1) Default copy constructor -> It shallow copy

*/

#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    // Deafult constructor
    Hero()
    {
        cout << "simple constructor called" << endl;
    }

    // Parameterized constructor
    Hero(int health)
    {
        this->health = health;
        name = new char[100];
    }

    Hero(int health, char level)
    {
        // cout << "THIS " << this << endl;
        // this store address of curr OBje
        this->health = health;
        this->level = level;
    }

    // Copy Constructor, deep shallow const
    Hero(Hero &temp)
    { // niche input me S pass kra that is also Hero type Obejct

        char *ch = new char[strlen(temp.name) + 1]; // New array bnaya
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "COPY CONST CALLED" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "Name " << this->name << ",";
        cout << "HEALTH IS " << this->health << ",";
        cout << "Level is" << this->level << endl;
    }

    int getHealth()
    {
        return health;
    }
    int getLevel()
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
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    // default copy constructor - shallow copy krta hai
    Hero hero2(hero1);
    hero2.print();

    /*

    Shallow copy concept -> eg: name - [b,a,b,b,a,r,\0]
    Hero1 -> name,health,level
    Hero2 -> name,health,level
    name jo hai char type ka pointer hai,address hai so name me
    address store hoga array ka


    similarly -> hero 2 me jab sari values copy kri to address
    copy hogya
    so overall -> shallow copy means same memory access krta hai


    Deep Copy -> Means isi ki hai 1 deep copy hojegi
    means 1 hor same array bnega, so deep copy ke liye constructor
    likhege

      // Copy Constructor, deep shallow const
    Hero(Hero &temp)
    { // niche input me S pass kra that is also Hero type Obejct

        char *ch = new char[strlen(temp.name) + 1]; // New array
         bnaya
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "COPY CONST CALLED" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    Char name[] = [b,a,b,b,a,r]
    Means Hero1 -> isme name, level,health hai

    copy constructor call hoga
    to 1 new array bnaliya  jisme ye sari values copy krli

    Hero2 -> isme name, level,health hai
    so isme new array hoga

    shallow copy -> basically 1 nw array bnalege jisme prvs array
    ko pura copy krdege

*/
}