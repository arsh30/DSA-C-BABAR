// SOLVING LEETCODE AND CODE STUDIO

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> &arr)
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

// q2 -> m  ke aage se reverse krna hai
void reverse(vector<int> &arr, int m)
{
    int si = m + 1, ei = arr.size() - 1;

    while (si <= ei)
    {
        swap(arr[si], arr[ei]);
        si++;
        ei--;
    }
}

// void print(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    vector<int> arr;
    arr.push_back(11);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(12);
    arr.push_back(4);

    vector<int> ans = reverseArray(arr);

    // print(ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}