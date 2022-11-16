// INHERITANCE
/*
EG: Teri height tere papa par gyi hLambi,
Means koi quality Inherit krli

same koi class hogi uske pass property and behaviour honge
usko inherit krlege into different class

EX: REAL WORLD EXAMPLE

Human class - [Parent class] - prop are
            - height
            - weight
            - age

Male class - [Subclass/child class] - prop are
           - isme bhi upr wali teeno prop hongi to dubara likhne
           ki bjaye "INHERIT" krlege from Parent class

FeMale class - [Subclass/child class] - prop are
           - isme bhi upr wali teeno prop hongi to dubara likhne
           ki bjaye "INHERIT" krlege from Parent class

child class -> vo hoti h jo inherit kr rhi hoti hai

----------------------------------------------------------

2) HOW TO DO INHERITANCE

class A {
    public:
    int age;
    int ht;
};

class B : public : A {
    // Is class me properies Inherit krni hai from class A
    synatx -> class className : AccessModifier parentClass

    [Note-> parent class jisse property acceess krni h]

----------------------------------------------------------

3) ACCESS MODIFIER TABLE

    super class Parent      child class     Output

1)  public                  public          public -> [means variable ko class k bhar
                                                      aces kr skte h]

2)  public                  protected       protected
3)  public                  private         private -> [means class ke andr hi access kr 
                                                       skte h]

4)  protected               public          protected
5)  protected               protected       protected
6)  protected               private         private

7)  private                 public          Not Accessible
8)  private                 protected       Not Accessible
9)  private                 private         Not Accessible


1) public -> Means jo variable bnega vo class ke andr and class ke bhar dono jgh        
             accessible hai

2) private -> means variable sirf class ke andr hi access kar skte hai 

3) protected -> 1) It is similar to private, Means uss variable ko 
                within class use kr skte hai, Bhar access Nahi kar skte

                2) But 1 condtion hai, Jo bhi "child class" hogi voi access kar skti 
                Main function se access nahi kar skte

-------------------------------------------------------------------

4) TYPES OF INHERITANCE -> Check Part 3.cpp

1) Single level inheritance - part3
2) Multi level inheritance - part4
3) Multiple inheritance - part5
4) Hierarical inheritance - part 6
*/

#include <iostream>
using namespace std;

class Human
{
    // prop
protected:
    int height;

public:
    int weight;

private:
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

// Syntax from inherit class -> class childClassName : Mode parent_class

class Male : private Human
{

    // Apna function isme define krdiya
public:
    string color;

    void sleep()
    {
        cout << "MALE SLEEPING " << endl;
    }

    int getHeight()
    {
        // This is protected means class ke andr use kr skte hai
        // class ke bhar nahi
        return this->height;
    }
};

main()
{
    /*
    Male obj1;
    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;

    cout << obj1.color << endl;

    obj1.setWeight(84);
    cout << obj1.weight << endl;
    obj1.sleep();
    */

    Male obj1;
    /*
    Height jo hai parent class me public mark hai
    and mode of inheritance bhi public h
    and jo answer aayega vo bhi public hoga

    cout << obj1.height << endl; // -> ans is also public ,
    we can access
    */

    /*
    scenario 2
    base class me height ko public mark h:
    and mode of inheritance vo protected krre hai
    so jo answer aayega vo protected hoga

    cout << obj1.getHeight() << endl; // -> ans is protected
    so getter setter ke through kr skte h
    */

    /*
    scenario 3
    base class me height public h,
    mode of inherit: private krdiya,
    jo answer aayega vo bhi: private hoga

    private - means class ke andr acces kr skte hai
    so agr bhar access krna hai  to GETTER ke through krege

    cout << obj1.getHeight();
    */

    /*
    scenario 4
    base class me: height is protected,
    mode of inherit: public
    to jo answer aayega: vo protected aayega

    protected is -> Ya to class ke andr access kr paayege
    ya to child class ke andr access kr payege
    class ke bhar access krna is not allowed

    cout << obj1.height; // error coz protected hai
    */

    /*
    scenario 5
    base class me : heigth is protected
    mode of inherit: protected
    ans jo aayega vo bhi protected hoga

    cout << obj1.height; // ERROR Coz parent clas protected h and
    // mode of inherit bhi protected
    */

    /*
    scenarion 6:
    base class me: height is protected,
    mode of inherit: private
    then result is private

    cout << obj1.height;
    */

    /*
    scenario 7
    base class is private
    mode of inherit: public
    then ans is Not Accessible

    cout << obj1.age;
    */

    /*
    scenario 8
    base class is private
    mode of inherit: protected
    then ans is Not Accessible

    cout << obj1.age;
    */

    /*
   scenario 9
   base class is private
   mode of inherit: private
   then ans is Not Accessible

    cout << obj1.age;  // ERROR
   */
}