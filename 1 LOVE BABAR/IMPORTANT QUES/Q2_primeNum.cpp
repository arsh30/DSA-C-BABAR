#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime" << endl;
            break; // Agr 2 se pta lggya ki prime nhi hai to break aage check nhi krege
        }
        else
        {
            cout << " Prime" << endl;
        }
    }
}