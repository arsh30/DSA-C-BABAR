// ACCESS MODIFIERS
/*
-> 3 type of Access Modifier
1) public -> class ke andr or class ke bhar access kr skte hai
2) private -> class ke andr hi access kr skte hai sirf
3) protected

Note -> Bydefault class ke andr jo member hote hai private hte hai
means public ke upr sare variable private honge



2) SETTING THE VALUES -> PROPERTIES

main (){
    // creation of obj
    Hero ramesh;

    // SETTING THE VALUES
    ramesh.health = 70;
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.health << endl;
    // Print Garbage value
    cout << "Level is: " << ramesh.level << endl;
}


3) GETTER AND SETTER FNCTIONS
-> user defined functions, Means tab use krte hai Jab hum
nhi chahte ki koi bhar ka bnda get ya set kr paye us variable ko

eg: suppose Health is private and isko use krna hai class ke bhar
so -> hum getHealth(){ // ye function bnaege and yeh return krdega
return health; // Health ko
}

    // GETTER AND SETTER FUNCTIONS
    int getHealth() -> yeh private hai but humko access
     krna hai class ke bhar, so yeh return krega health ko
     jo private hai, same like setHealth

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

GETTER -> It is for basically fetching/ read data.
SETTER -> isme hum conditon bhi lga skte hai extra
eg: sirf user name yeh agr h to sirf voi access kr paye

void setHealth(int h, char pass){
    if(pass == "ARSF"){
        health = h; // PASS MATCH HOGA TOHI ACCESS KRPAYEGA
    }
}


----------- -> now check vid3.cpp
*/

#include <iostream>
using namespace std;

class Hero
{
    // properties
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
        // level is private so we can only acces inside class
    }

    // GETTER AND SETTER FUNCTIONS
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
    // creation of obj
    /*
    Hero ramesh;
    ramesh.health = 70;
    // Health is Private, How to set the health
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.health << endl;
    // Print Garbage value
    cout << "Level is: " << ramesh.level << endl;

    */

    //    GETTER AND SETTER FUNCTIONS
    Hero ramesh;
    cout << "Health of ramesh is " << ramesh.getHealth() << endl;
    // Getting Garbage value kyuki abhi set Nahi kri

    ramesh.setHealth(70);
    ramesh.level = 'A';
    cout << "Health of ramesh is " << ramesh.getHealth() << endl;
    cout << "Level of ramesh is  " << ramesh.level << endl;
}