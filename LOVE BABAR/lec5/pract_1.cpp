#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << " a&b " << (a & b) << endl; // op -> 4
    cout << " a|b " << (a | b) << endl; // op -> 6
    cout << " ~a " << ~a << endl;       // op -> -5
    cout << " a^b " << (a ^ b) << endl; // op -> 2

    cout << (17 >> 1) << endl; // op - 8
    cout << (17 >> 2) << endl; // op - 4
    cout << (19 << 1) << endl; // op - 38
    cout << (21 << 2) << endl; // op - 84

    int i = 7;

    // PRE INCREMENT / DECREMENT
    cout << (++i) << endl; // op -> 8
    cout << (i++) << endl; // op -> 8 i=9
    cout << (i--) << endl; // op -> 9 i=8
    cout << (--i) << endl; // op -> 7

    // HW Find output
    /*
    int d, e = 1; //-> op -> 1
    d = 10;
    if (++a)
    {
        cout << e;
    }
    else
    {
        cout << ++e;
    }
    // Ques 2

    int d = 1; // op ->Stage 1 - Inside if, 0 3
    int e = 2;
    if(d-- > 0 || ++e > 2){ // 1st statement is true so next wali execute hi nhi hui
        cout << "Stage 1 - Inside if ";
    }else{
        cout << "Stage 2 - Inside else";
    }
    cout << d << " " << e << endl;

    //ques 3
    int num = 3; // op -> 100
    cout << (25 * (++num));

    // ques 4

    cout << "HOME WORK QUES IS: ";
    int d = 1;
    int e = d++; // e = 1, d = 2
    int f = ++d; // f = 2 d = 3
    cout << e;   // e = 1
    cout << f;   // f = 2
    */

   
}