#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Sum of Two NUmbers";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << " ";
}