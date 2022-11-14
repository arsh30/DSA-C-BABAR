// code studeio ques
/*
yout have been given an integr arraylist(Arr) of size N, where N is equal to 2m + 1
Now, in the given arraylist, 'M' numbers are present twice and one number is present only once

you need to find and return that number which is unique in the arraylist
*/

// find all duplicates

#include <iostream>
using namespace std;

// Approach 1 -> Time complexity O(n^2)
/*
1st loop -> o to less n
2nd nested loop -> j-> 0 to less than i
agr different hai to print krdo
*/

// TIME COMPLEXITY -> o(N^2)
// void findAllUnique(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (i != j)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                 }
//             }
//         }
//         if (count == 0)
//             cout << "the unique element is " << arr[i] << endl;
//     }
// }

// Approach 2 Better
/*
Using xor method -> Means jo 2 same honge vo 0 hojege

-> eg: 2^3^2^3^1^3^2^3^2 -> jo same honge vo kat jaege

means simple travel kro pure array or har element ko xor krwalo

*/

int findUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[5] = {3, 1, 3, 1, 9};
    // findAllUnique(arr, 7);
    cout << "Unique elements are " << findUnique(arr, 5);
}