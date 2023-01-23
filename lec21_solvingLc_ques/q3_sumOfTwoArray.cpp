/*
NOTE -> 1st make test cases

TC 1 -> array2 is smaller than arr1
TC 2 -> arr1 is smaller than arr2
TC 3 -> Hanling the carry if they are of equal length

Make sure -> first carry / 10 krege then sum % 10 krege

*/

#include <bits/stdc++.h>
vector<int> reverse(vector<int> arr)
{
    int si = 0, ei = arr.size() - 1;
    while (si <= ei)
    {
        swap(arr[si], arr[ei]);
        si++;
        ei--;
    }
    return arr;
}
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	int i = n -1;
//     int j = m -1;
//     int carry = 0;
//     vector<int>ans;

//     while(i >= 0 && j >= 0){
//         int val1 = a[i];
//         int val2 = b[j];
//         int sum = val1 + val2 + carry;

//         sum = sum % 10;
//         carry = sum / 10;

//         ans.push_back(sum);
//         i--;
//         j--;
//     }

//        // Handling cases
// //     1st case -> Arr1 is larger than b

//     while(i >= 0){
//         int sum = a[i] + carry;
//         sum = sum %10;
//         carry = sum / 10;
//         ans.push_back(sum);
//         i--;
//     }

//     //Handling 2nd TC, if arr2 is larger than 1st
//      while(j >= 0){
//         int sum = b[j] + carry;
//         sum = sum %10;
//         carry = sum / 10;
//         ans.push_back(sum);
//         j--;
//      }

// //     Handling carry 3rd case
//     while(carry != 0){
//         int sum = carry;
//         sum = sum % 10;
//         carry = sum / 10;
//          ans.push_back(sum);
//     }

//     return reverse(ans);
// }

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{

    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }

    // second case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // print(ans);
    return reverse(ans);
}