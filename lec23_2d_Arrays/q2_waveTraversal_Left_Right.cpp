#include <iostream>
#include <vector>

using namespace std;

// ques
//  eg
//  1 2 3
//  4 5 6
//  7 8 9 output -> 1 2 3 , 6 5 4 , 7 8 9
void waveTraversalLeftRight(vector<vector<int>> arr)
{
    int n = arr.size(), m = arr[0].size();
    for (int row = 0; row < n; row++)
    {
        if (row % 2 == 0)
        {
            for (int col = 0; col < m; col++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int col = m - 1; col >= 0; col--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}



void display(vector<vector<int>> arr)
{

    for (vector<int> ar : arr)
    {
        for (int ele : ar)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}

void input(vector<vector<int>> arr)
{
    int n = arr.size(), m = arr[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m, 0));

    // taking input
    input(arr);

    display(arr);
    waveTraversalLeftRight(arr);
}
