/**
 * bubbleSort.cpp

 Sorting means array ko sort krna hai either in ascending order or descending order.
 Eg: [7, 1, 6, 9] after sorting [1 , 6 , 7 , 9];

 1) Bubble sort -> simpley isme hota hai, har i th round par, i th element ko uski
 correct position par place krte hai, and this is the use case also

    simply to do is apna adjacent wala check krte jao,
    if (a > b) swap (a,b);
    if(a < b) continue; [means ignore krdo]

 2) Note : if array has N element, Then total number of rounds will be N-1

*/

#include <iostream>
#include <vector>

using namespace std;

// time complexity -> O(n^2)
// best case - array is already sorted; so no swap is happen
// so take bool swap = false; agr swap hi nhai hua toh loop se bhar aajao
// now best case time complexity is O(N)

// Hw: check this is stable or unstable algo
// Is it inplace sorting?

void bubbleSort(vector<int> &arr, int n)
{
    // for rounds
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;

        // for comparisons
        // for (int j = 0; j < n - 1; j++)
        for (int j = 0; j < n - i; j++) // optimised way
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // for optimised -> Now tc is O(N)
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
}
