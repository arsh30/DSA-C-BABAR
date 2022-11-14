// CONSTRUCTOR AND DESTRUCTOR
/*
Hero ramesh; // ye likha to behind the scene hora hoga ki
 Jese hi object create hua toh constructor call hogya

 prop of constructor
 1) automatcially invoked jb object create hota hai
 2) return type nhi hota
 3) name hould be same as class name

 So jese hi humne likha Hero ramesh;  Toh BTS hora hoga yeh
 ramesh.Hero(); so Hero is constructor jese hi class likhi to
 ik constructor  create hojata hai

2) Types of CONSTRUCTOR
2.1) Default constructor -> No return type and No ip parameter
    - constructor always called chahe statically ho ya dynamically
        object
    - Jese hi humne constructor toh Jo inbuilt constructor hota hai
      vo dead hojata hai

 -  "THIS" KeyWord ->  Define -> It is the pointer which points
     the currObj Object.

     Eg: Hero ramesh; so curr Object
     Ramesh hogya, so jb this likhege toh vo clas ke memebr ki
     baat krre hai means

 Jo bhi curr object hota hai uska address this ke andr store hota hai

2.2) Parameterised Constructor
    - 1) Constructor having paramter
    - We can create Mulitple Parameterised constructor
    - Note -> AGR 1 baar humne apna constructor bnadiya to
    default constructor Nahi krega

3) COPY CONSTRUCTOR
- CONSTRCUTOR hai means object creation ki baat hori hoegi
- or copy hai to copy krre hnge

-  Means we created a object R in which we copies
   all the values from R

- so jb hum class likhte hai to inbuilt ik hor copy cosntructor created hojata h
apne aap copy krdega

- so jb apna custom copy const call krege to default wala hat jaega

CUSTOM COPY  CONST ->
 // Copy Constructor
    Hero(Hero temp)
    { // niche input me S pass kra that is also Hero type Obejct
        this->health = temp.health;
        this->level = temp.level
    }

What is the need of '&'?
sl) Hero (Hero temp){

}

Hero R(S); // It is pass by value, pass by value me cpy bnti hai
so jo temp bna hai vo ik hor copy bni hai, Jab copy bnane ki koshish krte hai to copy constructor
ko call krte hai 'Hero' bhar wala , Copy constructor call krte hai to dubara temp pr aajaege
so Infinite loop me fas Jaege
isliye pass by value ki jgh pass by reference krege
*/

#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;

    // Deafult constructor
    Hero()
    {
        cout << "simple constructor called" << endl;
    }

    // Parameterized constructor
    Hero(int health)
    {
        // cout << "THIS " << this << endl;
        // this store address of curr OBje
        this->health = health;
    }

    Hero(int health, char level)
    {
        cout << "THIS " << this << endl;
        // this store address of curr OBje
        this->health = health;
        this->level = level;
    }

    // Copy Constructor
    Hero(Hero &temp)
    { // niche input me S pass kra that is also Hero type Obejct
        cout << "COPY CONST CALLED" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "HEALTH IS " << health << endl;
        cout << "Level is" << level << endl;
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
};

int main()
{
    /*
    // Object Create statically
    cout << "Hii" << endl;
    Hero ramesh(20);
    ramesh.print();

    // dynamically
    Hero *hero = new Hero(10, 'D');
    hero->print();
    cout << "Address of Hero is " << &hero << endl;
    cout << "Hello" << endl;

    Hero temp(70, 'b');
    temp.print();

    */

    // COPY CONSTRUCTOR
    Hero S(70, 'B');
    // suresh.setHealth(70);
    // suresh.setLevel('B');
    // note -> Agr static const h toh hi dot se access krege,
    //  Agr dynamic ho -> toh (-> ye arrow use krege)
    S.print();

    Hero R(S); // -> Means we created a object R in which we copies
    // all the values from R

    // r.health = suresh.health;
    // r.level = suresh.level;
    R.print();
}