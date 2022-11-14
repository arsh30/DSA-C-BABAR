/*
swap alternate
given arr -> [1,2,3,4,5] -> adjacent wale element ko swap krna hai like 1and2 3and4 5and6

Approach ->

for(0 ---> n - 1){
    // check krege hmesha abhi next element par jana hoga kabhi ki udr jana valid hai
    if(Arr[i + 1] < n){
        swap(arr[i], arr[i+1])
    }

    AND FR LOOP ME I KO 2 SE INCREMENT KREGE
}
*/

#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        // next elem access krne se pehle check krege ki udr jana safe hai
        if (i + 1 < n) // swap krne se pehle index dekha valid hai next wala
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    // print the array
    swapAlternate(even, 8);
    printArr(even, 8);

    cout << endl;

    swapAlternate(odd, 5);
    printArr(odd, 5);
}
