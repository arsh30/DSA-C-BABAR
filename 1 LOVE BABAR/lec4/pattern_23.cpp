#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = 1;
        while (space <= n - row)
        {
            cout << " ";
            space++;
        }
        int j = 1;
        while (j <= row)
        {
            cout << row;
            j++;
        }
        cout << endl;
        row++;
    }
}