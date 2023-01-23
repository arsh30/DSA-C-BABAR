#include <iostream>
#include <vector>
using namespace std;
// PEPCODING

/* WE ARE USING GAP TECHNIQUE
NOTE -> ALWAYS USE GAP LOOP WHENEVER DIAGONAL MOVE KRNA HO
i = 0, j = gap then dono ke same speed se aage move krna chalue krdo

*/

void diagonalTraversal(vector<vector<int>> &arr)
{
    // Always think for traingle matrix
    int n = arr.size(), m = arr[0].size();
    for (int gap = 0; gap < m; gap++)
    {
        for (int i = 0, j = gap; i < n && j < m; i++, j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
int main(int argc, char const *argv[])
{

    return 0;
}
