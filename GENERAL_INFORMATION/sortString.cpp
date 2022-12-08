#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// TIME COMPLEXITY - O(N LOG N)

/*
// SORT A SINGLE STRING, character sort
void sortString(string &str, int n)
{
    // sort(str.begin(), str.end()); // sort string in ascending order
    sort(str.begin(), str.end(), greater<char>()); // sort string in descending order
    // 3rd parameter kiske basis pr sort  krna, greater<kya sort krna h>

    cout << str;
}
*/

// ONLY STARTING WORDS WILL BE SORT
// void sortStrings(string arr[], int n)
// {
//     // sort(arr, arr + n); // sort - ascedning order
//     sort(arr, arr + n, greater<string>());
// }

void sortStrings(char arr[], int n)
{
    // sort(arr, arr + n); // sort - ascedning order
    sort(arr, arr + n, greater<string>());
}

// ---------------------------------------------------------------

/*
void sortNumbersArray(vector<int> &arr, int n)
{
    // Here we take two parameters, the beginning of the
    //  array and the length n upto which we want the array to
    //  be sorted

    // SORT THE INTEGER ARRAY
    // sort(arr, arr + n); // sort in ascednign order
    // sort(arr, arr + n, greater<int>()); // sort in descedning order

    // SORT THE VECTOR ARRAY
    // sort(arr.begin(), arr.end()); in ascending order
    sort(arr.begin(), arr.end(), greater<int>());
}
*/

int main()
{
    /*
    string str = "Arshdeep";
    sortString(str);
    */

    // ---------------------------SORT NUMBERS -------------

    /*
    vector<int> arr = {10, 35, 85, 93, 62, 77, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // 4(size of 1 int) * 8 / 4 (size of 1 elem)

    // here it tke 2 paramter, the begining of the array and the length n upto which we

    sortNumbersArray(arr, n);

    for (int e : arr)
    {
        cout << e << " ";
    }
    */
}
