#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        if (key > arr[mid])
        { // go in right
            s = mid + 1;
        }

        if (key < arr[mid])
        { // go in left
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        if (key > arr[mid])
        { // go in rigth
            s = mid + 1;
        }

        if (key < arr[mid])
        { // go in left
            e = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}

int main()
{
    int even[8] = {1, 2, 4, 4, 4, 4, 4, 6};

    cout << "First Occurence of 4 is at Index " << firstOcc(even, 8, 14) << endl;
    cout << "Last Occurence of 4 is at Index " << lastOcc(even, 8, 14) << endl;
}

// CODE STUDIO

// IF WE HAVE TO FIND TOTAL NUMBER OF OCCURENCES OF 3

//  -> FIND First Occur
//  -> FIND Last Occur
// Total occur of that elem -> lastIdx - firstIdx + 1