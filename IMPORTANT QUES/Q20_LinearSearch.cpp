#include <iostream>
using namespace std;
/*
Linear Search is -> Pure array pr travel kro or element ko check krte rho present hai ya nahi
agr nhi toh return -1
*/
bool linearSearch(int arr[], int size, int data)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == data)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    // whether 1 is present or not

    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;

    bool found = linearSearch(arr, 10, key);
    if (found)
    {
        cout << "Number is present " << endl;
    }
    else
    {
        cout << "Number is Not present " << endl;
    }
}