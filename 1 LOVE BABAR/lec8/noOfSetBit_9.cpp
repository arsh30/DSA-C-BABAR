#include <iostream>
using namespace std;

int setBitB(int b)
{
    int count = 0;
    while (b != 0)
    {
        if (b & 1)
        {
            count++;
        }
         b >> 1;
    }
    return b;
}

int setBitA(int a)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }
        a >> 1;
    }
    return a;
}
int main()
{
    int a;
    cin >> a;

    int b;
    cin >> b;

    int ans1 = setBitA(a);
    int ans2 = setBitB(b);
    int ans = ans1 + ans2;
    cout << "The No of setBits are " << ans << endl;
}