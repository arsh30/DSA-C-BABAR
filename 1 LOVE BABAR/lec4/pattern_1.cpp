// print
// 1) * * * * *
// 2) * * * * *
// 3) * * * * *
// 4) * * * * *
// 5) * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    { // Agr i 0 se start hota toh '<' n tak chlate, This is for every row

        int j = 1;
        while (j <= n)
        { // har row me kitne star hai
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}