#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // print space
        int space = n - i;

        while (space)
        {
            cout <<" ";
            space--;
        }

        // print stars
        int stars = 1;
        while (stars <= i)
        {
            cout << "*";
            stars++;
        }
        cout << endl;
        i++;
    }
}