/*
Inheritance Ambiguity -> Means 2 classes A & B
class A isme function hai FUNC
class B isme function hai FUNC

dono classes me same function hai

class C -> create kri or object bnaya iska -> isme dono classes ke function honge

C obj;

obj.fun();
obj.fun();

To konsa Function Run hoga? so iss ambiguity ko resolve krne
ke liye we have scope resolution operator ::

-> obj.A :: fun(); // means object jo bnaya vo a class ka use krlo
*/

#include <iostream>
using namespace std;
class A
{
public:
    void func()
    {
        cout << "This is class A " << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "This is class B" << endl;
    }
};

class C : public A, public B
{
    // Inherita clas A and B
};
int main()
{
    C obj1;
    // obj1.func();
    obj1.A::func();
    obj1.B::func();
}
