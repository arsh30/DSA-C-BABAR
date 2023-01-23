/*
code studio -> wave traversal up and down
1 2 3
4 5 6
7 8 9 op -> 1 4 7 , 8 5 2, 3 6 9

-> observation -> 0th row = top to bottom loop , 1st row = bottom to top, 2nd row = top to bottom
-> so jb even row h -> tb to bottom and odd me bottom to top

*/

#include <iostream>
using namespace std;

// Time complexity O(n * m)

void waveTraversalUpAndDown(int arr[][3], int n, int m)
{
    for (int col = 0; col < m; col++)
    {
        // even means top to bottom
        // or we can use if (n & 1)
        if (col % 2 == 0)
        {
            for (int row = 0; row < n; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = n - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // op
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    waveTraversalUpAndDown(arr, 3, 3);

    return 0;
}
