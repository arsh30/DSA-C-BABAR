#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        char ch = 'A';
        int j = 1;
        while (j <= n)
        {
            cout << char('A' + i + j - 2) << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}