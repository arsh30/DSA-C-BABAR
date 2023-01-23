#include <iostream>
using namespace std;


int gcd(int a, int b)
{
    if (a == 0)
        // agr koi 1 0 hoga toh dusre wala answer hoga
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {
        // formula -> gcd(a,b) = gcd (a - b, b)
        // jab tak apas me equal nahi ho jate tab tak
        // formula me put kro, means jo bhi  bda num hai usme se chote ko minus kro
        // tab tak krege jb tak koi 1 number 0 nahi hojata

        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a, b);
    cout << "The GCD of " << a << " & " << b << " is " << ans << endl;
}