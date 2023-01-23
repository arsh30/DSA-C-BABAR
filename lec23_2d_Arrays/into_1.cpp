#include <iostream>
using namespace std;

// ques4
int findLargestRowSum(int arr[][3], int n, int m)
{
    int maxi = -(int)1e9;
    int rowIndex = -1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "maximum element is " << maxi << endl;
    return rowIndex;
}

// ques3
void printColWiseSum(int arr[][3], int n, int m)
{
    cout << "Column sum is " << endl;
    for (int col = 0; col < m; col++)
    {
        int sum = 0;
        for (int row = 0; row < n; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// ques 2
void printRowWiseSum(int arr[][3], int n, int m)
{
    cout << "Printing Sum " << endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// ques 1
bool findData(int arr[][3], int data, int n, int m)
{
    /*In 2d Array, col ka size mention krna is mandatory but in 1d not, because
    compiler can preCalculate the memory address of an Individual Element  */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == data)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    // creation of 2d Array
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // 2nd way to inserting value
    // int arr[3][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}}; //3rd way to creating array, and initialise all value with different values
    int arr[3][3];

    // Taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing the array
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to be search " << endl;
    int data;
    cin >> data;

    if (findData(arr, data, 3, 3))
    {
        cout << "Element Found " << endl;
    }
    else
    {
        cout << "Not Found " << endl;
    }

    // ques 2
    printRowWiseSum(arr, 3, 3);

    // ques3
    printColWiseSum(arr, 3, 3);

    // ques4
    cout << findLargestRowSum(arr, 3, 3);
}
