// PEAK INDEX IN A MOUNTAIN ARRAY
/*
Given -> 1) array is atleast have 3 elem
2) Array elem is in Mountain shape
3) we have to find the peak elem

Approach 1 -> Linear search - max Ele find krlo
Approach 2 -> Binary search ->
            - Jo array hai vo yeh 3 condition hold krega
            - arr[0] < arr[1] < arr[2] -> Means Next Elem curr wale se bda h,
                mean Inc hora h
            - arr[i] > arr[i + 1] -> Means Next elem jo hai vo chota hai prvs se
            Means Dec hora hai
            - arr[mid -1] < arr[mid] > arr[mid  + 1]

            Agr yeh 3 conditon hold krega to Peak Idx milaega

[NOTE - Binary search is apply only on sorted Array but this array is
1st srted and then decreasingly sorted]
*/

int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1])
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

