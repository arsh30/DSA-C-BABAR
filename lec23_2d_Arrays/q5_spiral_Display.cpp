#include <iostream>
#include <vector>
using namespace std;

void spiralDisplay(vector<vector<int>> &arr)
{
    // logic is print box by box , print 1st box then us box pr dubara nahi aaana
    // make sure ki 1 variable 1 baar hi aaye
    int n = arr.size(), m = arr[0].size();
    int rmin = 0, rmax = n - 1, cmin = 0, cmax = m - 1;

    int count = 0;
    int totalElements = n * m;

    while (count < totalElements)
    {
        // printing 1st row
        for (int i = cmin; count < totalElements && i <= cmax; i++)
        {
            count++;
            cout << arr[rmin][i] << " ";
        }
        rmin++;

        // print ending row
        for (int i = rmin; count < totalElements && i <= rmax; i++)
        {
            count++;
            cout << arr[i][cmax] << " ";
        }
        cmax--;

        // print bottom row
        for (int i = cmax; count < totalElements && i >= cmin; i--)
        {
            count++;
            cout << arr[rmax][i] << " ";
        }
        rmax--;

        // print left row
        for (int i = rmax; count < totalElements && i >= rmin; i--)
        {
            count++;
            cout << arr[i][cmin] << " ";
        }
        cmin++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    spiralDisplay(arr);
}