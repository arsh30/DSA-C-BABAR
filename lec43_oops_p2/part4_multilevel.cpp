// /MULTI LEVEL INHERITANCE
/*
Inheritance -> Means 2 or more classes Inherit from 1st class

eg: class A -> class B -> class C -> class C -> class D

Animal ko inherit krra hai dog and dog ko inherit krra hai
GermanShepherd ne
so jo animal me sari properties thi vo sab germanshepherd me aagyi

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
        cout << "Speaking " << endl;
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
    g.speek();
}