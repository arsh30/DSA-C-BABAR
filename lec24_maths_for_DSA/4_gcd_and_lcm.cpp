// formula relation with gcd and lcm
// lcm(a,b) =  (originalNum1 * orignalNum2 ) / gcd
#include <iostream>
using namespace std;
int gcd(int n1, int n2)
{
    while (n1 % n2 != 0)
    {
        // n1 % n2 -> means n1 divident hai, yeh andr ki trf rhega
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    return n2;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int gcdAns = gcd(n1, n2);
    cout << "GCD IS " << gcdAns << endl;
    int lcm = (n1 * n2) / gcdAns;
    cout << "LCM IS " << lcm << endl;
}