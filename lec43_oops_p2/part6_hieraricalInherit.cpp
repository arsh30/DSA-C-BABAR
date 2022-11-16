/*
Hierarical Inheritance ------------>

One class Served as a parent for more than 1 classes

EG: class A
childs of class A are child B and C

*/

#include <iostream>
using namespace std;

// Hierarical Inheritance
class A
{
public:
    void fun1()
    {
        cout << "Inside fun 1..." << endl;
    }
};

class B : public A
{
public:
    void fun2()
    {
        cout << "Inside fun 2..." << endl;
    }
};

class C : public A
{
public:
    void fun3()
    {
        cout << "Inside fun 3..." << endl;
    }
};
int main()
{
    A obj1;
    obj1.fun1();

    B obj2;
    obj2.fun1();
    obj2.fun2();

    C obj3;
    obj3.fun1();
    // fun2 ko call anhi lga skta coz vo linked nahi h B se
    // isliye fun2 ko call nahi kr paye
    obj3.fun3();
}