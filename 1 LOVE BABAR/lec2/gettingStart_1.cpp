// How program run  FIRST PROGRAM IN C++

// we have source code which is written in a programming language
// But computer under stands only Binary Language ie 0 and 1
// so compiler converts the file into executable format usko use krke computer
// Run krta hai

// What does compiler do ?
// 1) convert src code into binary form which comp understands
// 2) find errors if any

// int main -> program start from here, { } iske andr jo bhi hoga vo uska jiske aage yeh lga h
// cout >> ; [ to print ]
// iostream -> for Taking Input and printing Output
// using namespace std; //To use Cout [ means std wala namespace uska cout use krna hai jo isme present hai ]
//  << -> To Display -> [means agr kuch print krna hai to iska use krte hai]
// endl -> means New Line
// \n -> New Line
// ; -> To end the line

#include <iostream>
using namespace std;

int main()
{
    /*
    cout << "Namaste Duniya :) " << endl;

    // Data Types and Variable

    int a = 123; // 1 int -> 4Byte ie 32 Bit
    cout << a << endl;

    char b = 'a'; // 1 char = 1 Byte ie 8 Bit
    cout << b << endl;

    bool bl = true; // 1 bool -> 1 Bit
    cout << bl << endl;

    float f = 1.2; // 1 float -> 4 byte
    cout << f << endl;

    double d = 1.23; // 1 double -> 8 byte
    cout << d << endl;

    //sizeof -> yeh btata hai konsi cheez kitni  space leri hai ex
    // int kitne space leta hai

    int size = sizeof(d);
    cout << "Size of int is " << size << endl; // ie 4 byte
    cout << "Size of char is " << size << endl; // ie 1 byte
    cout << "Size of boolean is " << size << endl; // ie 1 byte
    cout << "Size of float is " << size << endl; // ie 4 byte
    cout << "Size of doubel is " << size << endl; // ie 4 byte

    */

    // TYPE CASTING
    // Jisme bhi convert krna hai uske aage data type likhde to vo usme convert hojega
    // But in cpp type casting automatically
    // int a = 'a';
    // cout << a << endl;

    // char ch = 98;
    // cout << ch << endl;

    // How Data is stored in Memory
    // Eg: 1 int a = 8;
    /*
   int take 4 bytes ie 82 bits
   so memory me [00000.....1000] ye store hojega

   Eg2: char ch = 'a';
   ASCII value of a is 97 so memory me 97 ki binary form me store hojega

   Integer = 4Bytes = 32 bits in binary form => so max value [0 to 2^32 - 1]
   char 1Byte => 8 Bit = 2 ^ 8 - 1

   NOTE: Agr koi bdi value char me put krte hai toh jo bhi last digit hogi us
   number ki vo print hojegi



   // HOW -VE NUMBER ARE STORED

    int a = 3;
    int b = 2;

    bool first = (a == b);
    cout << first << endl;

    bool second = (a > b);
    cout << second << endl;

    bool third = (a < b);
    cout << third << endl;

    bool fourth = (a >= b);
    cout << fourth << endl;

    bool fifth = (a <= b);
    cout << fifth << endl;

    bool sixth = (a != b);
    cout << sixth << endl;


    int a = 0; LOGICAL OPERATOR
    cout << !a << endl;
     */

    
}