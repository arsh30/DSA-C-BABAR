/*
Search in 2d Matrix leetcode 74

suppose matrix is given

1  3   5  7
10 11 16 17
23 30 34 60

- All elements are sorted

- If we visulaise this 2d Array In 1d (Linear Array)
- formula to convert from 2d to 1D Mapping -> totalColumn * i(rowIndex) + j(colIndex);
    -> means 2d ka elem 1d me iss position pr pdha hoga

- so Our array look like In 1D if we assume
- In 1D -> 1 3 5 7, 10 11 16 17, 23 30 34 60
- Now Observe - The array is in sorted Order, Hence we can apply BINARY SEARCH TO SEARCH THE ELEMENT

- HOW WE FIND ELEMENT IN 1D ARRAY USING Binary Search
- s = 0 , e = total element - 1 -> to find the index in 1d -> row * col - 1
- find Mid  s = 0 , e = s+ (e - s) / 2;
- mid == element [return true]
- mid < target => s = mid + 1
- mid > target => s = mid - 1

- Now problem is In 2D we dont have mid ->
- Now WE HAVE TO MAP THE 1D ELEMENT INTO 2D ARRAY

------------LOGIC TO CONVERT THE 1D TO 2D ARRAY----------------

- EG: In 1d we have -> 1 3 5 7 , 10 11 16 20, 23 30 34 60
- We find mid ie 16 = 6 index
- yeh 1d me hai, isko 2d me map krwana hai , jisse 16 element mil jaye , how we do
- 2d me access arr [rowIdx] [colIdx]

- so How we do ?
-1) 6 (index in 1d array jisko map krwana hai ) / 4 (total no of columns) = 6 / 4 = 1; [Means 1st row me hai 2d array]
    eg: 9(index of 30 in 1d) / 4(totalColum) = 9 / 4 = 2 [means 2nd row me hai]

-2) Ab uss row me Kitni aage kaise find krre? -> BY DOING MOD
    % totalNo of column, to vo 0 , 1, 2, 3 ke bheech  bss nikal gya
     => IT GIVE COLUMN INDEX

    NOTE -> Agr kisi bhi number ko mod krege 'N' ke sth to  0 TO N-1 ke bheech hi aayega
*/

#include <iostream>
#include <vector>
using namespace std;

bool searchInSorted2d(vector<vector<int>> &arr, int data)
{
    int n = arr.size(), m = arr[0].size();
    int s = 0, e = n * m - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int elem = arr[mid / m][mid % m];

        if (elem == data)
        {
            return true;
        }

        if (elem < data)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return false;
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

    int target;
    cin >> target;

    if (searchInSorted2d(arr, target))
    {
        cout << "FOUND" << endl;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }
}