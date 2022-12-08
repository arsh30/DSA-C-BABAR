/*
Why we use this insertion sort?

sol) It is very adaptable algo
means time ke sth sth array jo h sort hota jaara h

and It is very Stable algorithm.


-> agr n small hoga toh acha work krta hai

----------------

Time complxity
 (O(n^2))

worst case: O(n^2)
best case: array is already sorted: O(n)

*/

void insertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {

        int temp = arr[i];
        // store isliye krwayi coz hame baar baar udapte krre h

        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        // 1 7 10 | 4 8 2 11
        // 4 jb 1 se comapre hua toh loop  break hogya,
        // means 4 ko 1 ke right me dlni h
        // jb 4 , 1 se compare hua hoga toh break hokr bhar aagye
        // us time j jo hai vo 0 idx pr h
        // but hame 1 idx pr chaiye ie j + 1 o, pura shift krege array ko
        // so inshort j hamesha udr hoga jidr humko dalna hai usse 1 piche

        arr[j + 1] = temp;
    }
}