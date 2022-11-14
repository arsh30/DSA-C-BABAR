#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    /*
    for (int i = 0; i < 5; i++)
    {
        cout << "Hi" << endl;
        cout << "Hey" << endl;
        continue;

        cout << "Reply to krde";
    }
    //    Homwork ques
    for (int i = 0; i <= 5; i++)
    {
        cout << i << " ";
        i++;
    }

    //    ques2
    for (int i = 0; i <= 5; i--)
    {
        cout << i << " ";
        i++;
    }

    //    ques3
    for (int i = 0; i <= 15; i++)
    {
        cout << i << " ";
        if (i & 1)
        {
            continue;
        }
        i++;
    }

    //    ques 4
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i << " " << j;
        }
    }
    */

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
                break;

            cout << i << " " << j;
        }
    }
}