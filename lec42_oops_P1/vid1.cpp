// OOPS -> OBJECT ORIENTED PROGRAMMING
/*
ques1) What is Object Oriented Programming OOP?
sol) 1-> It is a type of programming technique, in which things work around object

ques 2) what is Object?
sol) Object is entity -> having two things
    - Properties / Data Members [jo declare kre h]
    - Behaviour
    Eg real life Example -> Jug, laptop

So hum apne prog ko chahte hai ki in object ko use kr paye , prog ko real world
close la paye why?
sol -> Taki hmare prog/code ki readabliy and extensibility increase ho

Eg: Game hai ik Tekken -> 1) uska name hota tha paul
    usme 1 hero hota h    2) health bhi hoti thi usme
    so Hero is a Object   3) level -> konse level ka paul hai
                          so yeh 3 jo hai yeh properties hai

                          Bbehaviour: ->
                          1) Attack
                          2) Dance
                          3) Defence


 3) OOP -> Means Having Classes and Objects
    3.1) class -> It is template or blueprint, and It is User defined Data Type

    eg: class -------> Hero ramesh; // Means Ramesh variable bnaya  Hero type ka
     like int a; // a variable bnaya Integer type ka
     string str; // str variable bnaya hai String type ka

     same Ramesh variable bnaya Hero type ka

     3.2) Object -> It is instance of class


4) Implementation of class /SIZE OF CLASS

class Hero { // Hero is a class Name, Hero type ki 1 class bnadi h
 int health;
}

int main(){
    // Creating a Object h1
    Hero h1; // CREATING A OBJECT- HERO TYPE KA
}

cout << "Size " << sizeof(h1) << endl; // h1 is object
// class me sirf 1 integer pdha h jo sirf 4 byte leta hai
// by default usme garbage value hogi

so Op -> 4
Means agr koi Object create krege to vo utna size lega jitni prop usme di hui h


Eg2: Agr property Koi bhi na hoti class me, EMpty class hoti
Toh op is 1 [coz koi prop nahi hai agr to class ko track rkhne ke liye
1 byte dete h]
class Hero
{

 }
 main(){
    Hero h1;
    cout << "size " << sizeof(h1) << endl; op 1
 }


5) HOW CN WE USE CLASS FROM ANOTHER FOLDER
-> suppose Kahin Aur class pdhi hai or Object Kahin aur bnana h toh how we use
-> jis file me Object create krre hai udr likhege
    #include "filename.cpp";

6) ACCESS OF OBJECT PRPERTIES -> USING DOT
Eg:  class Hero
{
    int health;
    char level;
};
int main()
{
    cout << "Access Health variable " << ramesh.health << endl;
    cout << "Access level variable " << ramesh.level << endl;

    Means Object ki Prop ko Aagr access krna hai tohDot lgakr krege
    but in the above stat it gives error coz bydefault jo members hote hai vo public
    hote h

    check Vid2.cpp file => ACCESS MODIFIER
}

*/
#include <iostream>
using namespace std;
class Hero
{
    // int health; // Agr size print krwaege Object ka toh jitni prop hai class me
    // utna dega

    // toh bydefault - size 1 hoga agr koi prop nhi hoti toh coz reserve krleta 1 byte

public:
    int health;
    char level;
};
int main()
{

    // creation of Object
    Hero h1;
    cout << "size " << sizeof(h1) << endl;

    Hero ramesh;
    cout << "Access Health variable " << ramesh.health << endl; // ERROR- >
    //  Coz bydefault Member are private, Agr Access krna hai
    // To class me jo member h unko public krdo
    // Public ke upr jo bhi hai vo sab Private hai
    cout << "Access level variable " << ramesh.level << endl;
}