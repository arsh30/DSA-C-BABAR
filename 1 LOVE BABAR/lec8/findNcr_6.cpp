// find Ncr -> ncr is
//  n! / (n - r)! * r!

// given -> ip -> n , r find n c r

/*
NOTE ->
1) Nc0 is always 1
2) 8! / (8 - 2)! * 2!

*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(n - r) * factorial(r);
    int ans = numerator / denominator;
    return ans;
}

int main()
{
    int n;
    int r;

    cin >> n >> r;
    int ans = nCr(n, r);
    cout << "The factorial is: " << ans << endl;
}