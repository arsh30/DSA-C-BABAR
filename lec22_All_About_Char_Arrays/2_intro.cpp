#include <iostream>
using namespace std;

int main()
{
    // char name[20];
    // cout << "Enter your name" << endl;
    // cin >> name;
    // name[2] = '\0'; // Name ki 2nd index pr null chracter daldiya

    // cout << "Your name is ";
    // cout << name << endl;

    // -----------------------------------
    // get Line to access the whole strings
    char name[40];
    cin.getline(name, 40);

    cout << "Your name is ";
    cout << name << endl;

    cout << name[8];
}