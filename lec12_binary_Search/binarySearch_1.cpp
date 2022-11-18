/*
1) LINEAR SEARCH -> 1 aarray given hota hai jisme key search krni hoti hai

so 0 idx se start krte hai and har elem ki value se compare krwalete hai agr
miljata hai to return the idx otheriwse return -1

eg: int arr[5] = {1,2,3,4,5};
int linearSearch(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == n) return i;
    }
    return -1;
}


--------------------------------

2) BINARY SEARCH -> NOTE -> 1) It should apply only on monotonic functions
monotonic means either the array is increasing order or decreasing order

ALGORITHM ->

Step 1 -> Find mid -> ( si + ei ) / 2;
step 2-> compare mid with key
step 3 -> PART DECIDE -> if equal -> return idx
                      -> if not equal -> Part decide either go in left or right
                       -> if (key < mid) go in left -> end=mid-1
                       -> if (key > mid) go in right ->
                             start = mid + 1

step 4 -> repeat above 3 step until we get the element

Eg:

Benefit ->
1) linear search - agr 1000 value ka 1 Array hai
                    Toh worst case 1000 comparison

2) Binary Search - agr 1000 value ->  ka sorted array hai
                    1000 size -> initially then mid find kra mid ke ya
                    to right me jaege ya left me,  array is half

                    500 size -> 250 size -> 125 -> 62 -> 31 -> 15 -> 7 -> 3 -> 1 -> 0

                    Total 10 comparison -> isme pta lggya ki value present hai ya Nahi

Ttime Complexity -> O(log n)

How -> N --> N/2 --> N / 4
or we can say -> N/2^0 --> N/2^1 --> N/2^2 ... N/2^k

N/2^k  -> isme last me array ki length 1 hojegi
n = 2^k
k = log (n)
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2;
    while (start <= end)
    {
        // int mid = (start + end) / 2; // Not use this formula
        int mid = start + (end - start) / 2;

        // step 2 compare mid with key
        if (arr[mid] == key)
            return mid;

        // step 3 part decide
        if (arr[mid] < key)
        {
            // go in right
            start = mid + 1;
        }
        else
        {
            // key < arr[mid ] go in left part
            end = mid - 1;
        }

        // update mid
        // mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    // int index = binarySearch(even, 6, 180);
    int index = binarySearch(odd, 5, 8);
    cout << "The index of 18 is " << index << endl;
}
