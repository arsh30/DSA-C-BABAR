// Home work ques
// given ip me koi bhi elem aa skte hai

// to total sum dena hai humko
#include <iostream>
using namespace std;

int sumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cin >> size;

    int arr[1000];

    // taking input from user
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of array is " << sumOfArray(arr, size);
}