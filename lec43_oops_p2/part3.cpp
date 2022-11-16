// TYPES OF INHERITANCE

/*
1) single Inheritance ->
Eg: class  A { };
    class  B { };

    class B ne inherit krli properties from class A


2) Multiple Inheritance
*/

#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void speek()
    {
        cout << "Speaking..." << endl;
    }
};

class Dog : public Animal
{
};

int main()
{
    Dog d;
    d.speek();
    cout << d.age << endl;
}