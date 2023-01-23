/*
merge sorted arrays - LC88

1) 2 arrays are given arr1 - [1, 2, 3, 0, 0, 0] && arr2 = [2, 5, 6];
2) compare kro and sorted array bnao and usko arr1 me hi push kro , means do this without extra space,
0 means blank spaces

where, m = no of element in arr1 and n is no of element in arr2

i = m - 1; bcoz vo last element hai
j = n - 1; arr2 ka last element
k = m + n - 1; arr1 ka last idx

k = jidr yeh hoga udr sabse bda element aayega
*/

public
void merge(int[] arr1, int m, int[] arr2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k] = arr1[i];
            i--;
            k--;
        }
        else
        {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }

    while (i >= 0)
    {
        arr1[k] = arr1[i];
        i--;
        k--;
    }
    while (j >= 0)
    {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}