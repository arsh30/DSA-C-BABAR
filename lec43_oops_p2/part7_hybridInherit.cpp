/*
Hybrid Inheritance -> combination of more than 1 type of
                        Inheritance
Eg: Mulitple Inheirtance + Heiraricl Inheritance

class A{ };

class D { };

class B: public A { };

class C: public A, public D { };
*/
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

class B : public A
{
public:
    void func1()
    {
        cout << "I am B" << endl;
    }
};

class D
{
public:
    void func2()
    {
        cout << "I am D" << endl;
    }
};

class C : public A, public D
{
public:
    void func1()
    {
        cout << "I am C" << endl;
    }
};

int main()
{
    C obj;
    obj.func1();
    obj.func2();
    obj.func();
}