// BINARY SEARCH -> LEC 15
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int k, int mid)
{
    int cowCount = 1; // first cow ke liye process krre
    int cowLastPosition = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - cowLastPosition >= mid)
        {
            cowCount++; // means 2nd cow place krege ab

            if (cowCount == k)
            {
                return true;
            }

            // update cowlast position
            cowLastPosition = arr[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &arr, int k)
{ // arr = stalls array

    sort(arr.begin(), arr.end());
    int s = 0;
    int maxi = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }

    // SEARCHS SPACE FROM 0 TO MAXI

    int e = maxi;

    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, k, mid))
        {
            ans = mid;
            s = mid + 1; // go in right, bcoz largest minimum distance chaiye
        }
        else
        {
            e = mid - 1; // go in left part
        }
    }
    return ans;
}