/*
 POLYMORPHISM -> Poly means many
 morphisme -> means forms

 Eg: Papa -> mummy ke liye vo son hai,
            mere liye vo papa hai,
            bhua ke liye vo brother h,
            unki wife ke liye husband hai


1) Polmorphism are two types
    1.1) compile time polymorphism -> Also called static polymorhism
    1.2) run time polymorphism -> Also called Dynamic polymorphism

    1.1) compile time polymorphism -> Jb prog ko run krte hai toh usse pehle pta lg jata
         ki konse konse cheeze exit krti hai

         compile time polymorphism are of two types - Function overloading,
                                                    - operator overloading

         1) Function Overloading -> means same name ke 2 function exist krte hai
            pta nahi lgta konsa execute krna hai, so agr 2 name ke function hai
            to input parameter change krdo

            Eg: class A{ public: void sayhello()) {
                cout << "i am A";
            }

            void sayhello()) { same function as above function Overloading
                cout << "i am A";
            }
        }; ERROR IN CODE

            HOW TO CORRECT THIS --->

         - Agr function overloading error se bchna hai toh ip parameter different krdo
            dono ke, [MEANS INPUT ARGUMENT ADD KRDO ]

         - Input parameter me data type different ho skte hai toh Error Nahi aayega
                    Eg: class A { public: void sayhello()) {
                        cout << "i am A";
                    }

                    void sayhello(string name)) { same function me ip paramter diff krdiya
                        cout << "i am B";
                    }
                }; CORRECT CODE


            - Agr return type change krdege toh Bhi ERROR Aayega
                 Eg: class A { public: void sayhello()) {
                        cout << "i am A";
                    }

                    int sayhello()) { return type change krdiya
                        cout << "i am B";
                    }
                }; ERROR CODE

            - We can use DEFAULT ARGUMENT -> in ip parameter


         2) Operator Overloading -> Eg: 1) + ispr click krne se String concat to hoti h
                                2) + ispr click krne se 2 number bhi add hote h
                                3) + we want ki ispr click kre toh 2 number minus hoje

            Jb '+' kre toh 2 integer subtract hoje
            "+" -> Binary operator -> a + b -> 2 operand
                   unary operator -> ++i -> 1 operand

                   so '+' is binary operator


            Syntax -> return_type  operator_Konsa operator () {
                + -> iske case me 1st paramter hota hai [1st operand ie a ] -> 'this'
                    means current object means is object ke liye function call gyi hai

                 -> 2nd paramter ie 2nd operand -> jo hta hai vo input argument hota hai
            }
            -------------------------------------

2) RUN TIME POLYMORPHISM -> kuch cheeze hoti hai jo run time pr pta lgti hai ki yeh
                            multiple jagah exist krega

                            2.1 Method Over riding

                            rules to do function Over riding

                            1) the method of parent class and child class shoudl be have 
                                same name and same parameter
                            
                            2) It depend on Inheritance only.
-----------------------------------------------------------------------

ABSTRACTION -> Means Hiding the Implementation

*/

#include <iostream>
using namespace std;
class A
{
public:
    void sayHello()
    {
        cout << "Hello love Babbar " << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello" << name << endl;
    }

    int sayHello(char name)
    {
        cout << "Hello" << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    // OPERATOR OVERLOADING
    // void operator+(B &obj)
    // { // B type ka obj
    //     int value1 = this->a;
    //     int value2 = obj.a;
    //     cout << "OUTPUT " << value2 - value1 << endl;
    // }

    void operator+(B &obj)
    {
        cout << "HELLO BABABR" << endl;
    }

    void operator()()
    {
        cout << "Main bracket " << this->a << endl;
    }
};

// ----------- RUN TIME POLY MORPHISM ---------
// Function Over riding

class Animal
{
public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking..." << endl;
    }
};

int main()
{
    // A obj;
    // obj.sayHello();

    /*
        B obj1, obj2;
        obj1.a = 4;
        obj2.a = 7;
        obj1();

        obj1 + obj2;
    */

    // RUN TIME POLY MORPHISM -> Function Over riding
    Dog obj;

    obj.speak(); // means coz humne apna function dala h agr vo na hota toh speaking aata
}
