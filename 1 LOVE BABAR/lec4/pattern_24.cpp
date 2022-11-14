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
        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }
        int count = row;
        int j = 1;
        while (j <= n - row + 1)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        row++;
    }
}