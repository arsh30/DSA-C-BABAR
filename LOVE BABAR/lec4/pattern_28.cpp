#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // print 1st triagle
        int j = 1;
        int count = 1;
        while (j <= n - i + 1)
        {
            cout << count;
            count++;
            j++;
        }

        int stars = 1;
        while (stars <= (i - 1) * 2)
        {
            cout << "*";
            stars++;
        }

        int k = n - i + 1;
        while (k >= 1)
        {
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }
}