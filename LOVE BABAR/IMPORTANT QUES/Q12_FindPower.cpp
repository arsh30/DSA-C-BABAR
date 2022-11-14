#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b); // jo value upr se return hogi usi value me catch krege
    // Note -> catch krna is necessary nahi to print krwalo
    cout << "The ans is " << ans << endl;
}