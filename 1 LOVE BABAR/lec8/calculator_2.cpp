// CALCULATOR USING SWICTH STATEMENT [LEC 8]
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter Two value of a " << endl;
    cin >> a;

    cout << "Enter Two value of b " << endl;
    cin >> b;

    char op;
    cout << "Enter operation you want to perform " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;

    default:
        cout << "Please Enter valid operation" << endl;
    }
}