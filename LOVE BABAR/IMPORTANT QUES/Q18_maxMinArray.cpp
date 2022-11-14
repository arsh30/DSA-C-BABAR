#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int max = -(int)1e9;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// using inbuilt max , min function
int getMax_1(int arr[], int n)
{
    int maxi = -(int)1e9;
    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[i], maxi);
    }
    return maxi;
}

int getMin(int arr[], int n)
{
    int min = (int)1e9;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    // int arr[8] = {1, 4, 2, 5, 3, 9, 12, 10};

    // int size; // creating variable
    // cin >> size;
    // int arr[size]; // array ka size me variable daldiya hai WHICH IS VERY BAD PRACTICE
    // So hum number hi put krege isme

    int size;
    cin >> size;

    int arr[100];

    // taking input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum value is " << getMax_1(arr, size) << endl;
    cout << "Miimum value is " << getMin(arr, size) << endl;
}