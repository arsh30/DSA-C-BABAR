/*
swicth case -> It is similar to:  if else if
syntax ->

swicth(any integral expression){ // epression dal skte hai chaiye ki numbder aata pura totsl hokr vo bhi dal skte hai
    case constant1: {

                    }
                    break;
    case constant1: {

                    }
                    break;

1   NOTE -> constant can be  number and character but string and float are not allowed

2)  so -> JO EXPRESSION DIYA HAI VO OR AGR CONSANT VARBALE AGR MATCH HOGA TO VO CHLEGA
    expression ki value or case ka constrant match hona chaiye
    Note -> nested swicth also works

3)  doubt -> Agr while() isme agr infinite loop chl jaye to break statement se bhar aa skte hai but in swicth loop
    switch -> agr infinite loop me fas gye to bhar kese aayege use exit(0) method

4) Note -> continue It is not allowed in the swicth case
---------------

Break -> It immediatly terminate the current loop

Continue -> Isse 1 Ieration miss hojegi
iteration means -> i = 1
i = 2
i = 3 [3rd iteration]
so ik iteration miss hojati hai

}
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 2;

    switch (num)
    {
    case 1:
    {
        cout << "First" << endl;
    }
    break;

    case 2:
    {
        cout << "second" << endl;
    }
    break;

    default:
        cout << "It is default case" << endl;
    }

    // ----- eg 2

    char ch = '1';

    switch (ch)
    {
    case 1:
    {
        cout << "First" << endl;
    }
    break;

    case '1':
    {
        cout << "character one" << endl;
    }
    break;

    default:
        cout << "It is default case" << endl;
    }

    // -------------------------------
    
}