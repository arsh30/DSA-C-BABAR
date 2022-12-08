#include <iostream>
using namespace std;

/*
Pivot ->
Approach 1 - linear search , Search Minimum Eleme
Approach 2 - Binary Seach , TC o(log n)

Binary search -
 1) always find mid
 2) so mid ke elem ko aise condition bnani hai jisse pivot element mil Jaye


 condition -> we know array is sorted and rotated Array.
 eg: [1,3,7,9]; After rotated, => [7,9,1,3], 7,9 is increasily sorted and 1,3 is inc sorted

 condition -> arr[mid] > arr[0] Means graph me 1st line pr lie krta hai
 so s= mid + 1 coz hume 2nd line ka least elem chaiye

 else{
    e = mid; // coz agr hum mid - 1 krte or mid jo hai vo least elem hi hota toh wapas
    1st line par aajata isliye mid kra
 }


*/
int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;

        //
        if (arr[mid] >= arr[0])
        {
            // 1st line me values jyda hai 2nd line kam hori hai value
            // and hame 2nd liine pr jana hai
            s = mid + 1;
        }
        else
        {

            e = mid;
        }
    }
    return s;
}
int main()
{
    int arr[5] = {3, 8, 10, 17, 1}; // sorted and Rotated Array
    cout << "Pivot is " << getPivot(arr, 5) << endl;
}