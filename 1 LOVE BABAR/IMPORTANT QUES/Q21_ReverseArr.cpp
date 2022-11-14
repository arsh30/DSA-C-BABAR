// Use 2 pointer approach
/*
Approach -> 2 pointer approach
1) initailise start = 0, end = size - 1; (means end pr rakhege)
2) swap start and end
3) i++ j--

4) repeat above 2 steps tb tak jab tak (i<=j) Do dry run for odd length and even length

*/

#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void reverseArr(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {
        // swap(arr, i, j);
        swap(arr[i], arr[j]); // in built swap
        i++;
        j--;
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[15];

    // taking input from user
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverseArr(arr, size);

    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
