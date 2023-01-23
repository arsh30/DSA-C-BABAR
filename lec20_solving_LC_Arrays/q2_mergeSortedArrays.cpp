/**
 2 array milege dono sorted honge; arr1 = {1, 3, 5, 7 , 9}
 arr2 [] = {2 ,  4, 6};

 create a new array, having both element of 1 and 2 array in sorted way

    op -> [1,2,3,4,5,6,7,9];

 APPROACH -> 2 pointer approach

 1)


*/

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int ans[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }

    // copy 1st array elements
    while (i < n)
    {
        ans[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m)
    {
        ans[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
}