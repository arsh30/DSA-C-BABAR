/*
Sorting -> It is basically to sort an array either in
increasing order or decreasing order

eg: 1 7 9 2 3 0
after sorting in ascending order
0 1 2 3 7 9

SELECTION SORT:

What is selection sort?
This algo have rounds, and each round sabse minimum
element apni correct position pr place hojata hai

Eg: 64 25 12 22 11
[ i = 0 to 4]

round 1 = 11 25 12 22 64 (swap i =0 with minimum
elemenet pure array me i=0 hai toh usse aage se start
hoga)

round 2 = 11 25 12 22 64
        -> 11 12 25 22 64 [i=1, check krege i + 1 se
        pure array me koi minimm element hai ya nahi
        agr hai toh swap]

round 3 -> 11 12 25 22 64; [i = 2]
        -> 11 12 22 25 64 (swap kra 25 with 22)

round 4 -> 11 12 22 25 64 [i=3]
        ->  11 12 22 25 64

so Overall -> N = 5; total rounds 4 (N-1)

---------------------------------------------

space complexity -> O(1) coz we created only variables

Time complexity -> O(n ^ 2)

best case: array is alreeady sorted:  O(n ^ 2) compare to krege hi
worst case: O(n ^ 2)

------------------------------------------

USE CASE:

1) Jbhi array ka size small hoga toh use this
2) jb memory useage kam ho tab use kro

-------------------------------

Read -> It is stable or unstable algo?

*/

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    // for n = 5 toh i = 3 tak jaega
    // j usse aage ke liye check krega
    for (int i = 0; i < n - 1; i++)
    {
        // j loop means round; To find minimum value
        int minIndex = i; // jidr abhi khde h
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                // AGR DESCENDING ORDER ME SORT KRNA HOGA TOH SIRF SIGN CHANGE KRDEGE
                // >
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}