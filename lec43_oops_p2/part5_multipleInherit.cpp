/*
MULITPLE INHERITANCE ------>

Class 1, class 2

class 3 yeh inherit kregi dono ko 1 sath

Eg: class 3 : public class  A , public class B {
isme ab dono ki property aajegi jo jo class1 and class 2 me thi
}
*/

#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void bark()
    {
        cout << "Barking... " << endl;
    }
};

class Human
{

public:
    string color;

    void speak()
    {
        cout << "Speaking.... " << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Animal, public Human
{
};
int main()
{
    Hybrid h;
    h.bark();
    h.speak();
}