/*
Search in rotated and sorted array eg: [7,9,1,2,3] this array is sorted and rotated
check the K elem is present or Not. eg: k = 2

Same like prv ques

first draw in graph this---> to ease this approach
Both Lines are montonic functions

Note -> arr[0] and n-1 ye 2 always know honge


Sol) 1 -> 0 idx always pta hoga ie 7 and n-1 idx bhi always pta hoga ie 3
2 -> Aise Nahi hai ki kisi 1 line ki dono value pdhi hai agr dono value hoti
    toh pta lga lete ki iss line me binary search lgana hai

    2nd line pivot nikal lenge kisi trah se and (n-1) idx given hi hai
    so target ko compare krke dekhlenge ki hai ya nahi

    so, if(arr[pivot] < target < arr[n-1]){
        2nd Line
        Apply Binary search and compare the key
    }else{
        means first line present hai, apply binary search there
    }

-----------------------------
ALGO
1) Find Pivot
2) conditon check (Arr[pivot] <= target <= arr[n-1])
2.1) isse pta lga ki konsi line me binary search lgana hai
2.2) BS apply krdi jisse pta lgega   present hai ya nahi

*/

#include <iostream>
using namespace std;

int findPivot(vector<int> &arr, int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;

        // Means 1st line pr hai and we go to 2nd line
        if (arr[0] <= arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binarySearch(vector<int> &arr, int s, int e, int key)
{
    int start = s;
    int end = e;

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

int findPosition(vector<int> &arr, int n, int k)
{
    int pivot = findPivot(arr, n);
    if (arr[pivot] <= k && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
}