/*
rotate
+ve -> Means aage wale 2 element uth kar pivhe chle jayege
-ve k -> means pihce wale K elem uth kar aage aajege if (k < 0) k = k + n;
if k is very large -> to elem jo hai vo repeat honge, so mod krke range me le aayege

NOTE -> Jiise mode krege , vo usi range me aajege
Eg: Agr kisi bhi number ko mod krege 10 se
to vo 0 se 9 ke bheech me hi aayega
*/
#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int> &arr, int si, int ei)
{
    while (si <= ei)
    {
        swap(arr[si], arr[ei]);
        si++;
        ei--;
    }
}
void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    if (k < 0)
    {
        k = k + nums.size() - 1;
    }
    reverseArr(nums, 0, nums.size() - 1);
    reverseArr(nums, 0, k - 1);
    reverseArr(nums, k, nums.size() - 1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    rotate(arr, n);
    for (int i = 0; i < arr.size() - 1; i++)
    {
        cout << arr[i];
    }
    return 0;
}
