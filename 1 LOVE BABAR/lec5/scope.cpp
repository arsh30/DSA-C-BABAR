#include <iostream>
using namespace std;

int main()
{
    // int a; // abhi koi value assign nhi kri -> to garbage value assign hojegi
    int a = 3;
    cout << a << endl;

    if (true)
    {
        // cout << a << endl; // jo iss block ke bhar declare kra hai "usko access kr" skte hai
        // int a = 15; // same variable create kr skte but dusre block me
        int b = 15;
        cout << b;
    }
    // cout << b; // b ko access nhi kr skte coz uska scope andr hai
    
}
