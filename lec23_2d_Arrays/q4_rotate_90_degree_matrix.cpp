/*
Pepcoding  -> rotate 90

Apprach -> 1st take transpose -> move upper traingle ( i = 0 , j = i loop)
 har i and j ko swap krlege

 -> after this -> swap 1st column and last column
*/

#include <iostream>
#include <vector>
using namespace std;

void rotate90(vector<vector<int>> &arr)
{
    int n = arr.size(), m = arr[0].size();

    // 1st take transpose -> i = 0, j = i, move inupper triangle and swap elements
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // swap columns 1st and last
    int j1 = 0, j2 = m - 1;
    while (j1 <= j2)
    {
        // because rows are changing
        for (int row = 0; row < n; row++)
        {
            int temp = arr[row][j1];
            arr[row][j1] = arr[row][j2];
            arr[row][j2] = temp;
        }
        j1++;
        j2--;
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

    rotate90(arr);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}