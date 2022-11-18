// 1207 -> LEETCODE - UNIQUE NUMBER OCCURENCES
/*
Approch -> 1) simply sort the array
2) 2nested loops
3) make new array -> and store the count
3.1) and uss array ko dubara count 1 se start kridya

4) jo answer me count store hoga usko dubara sort krke dekhege
or next element se compare krwalege agr same hoga toh return false
else return true
*/
#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    vector<int> ans;

    int i = 0;
    sort(arr.begin(), arr.end());
    while (i < arr.size())
    {
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }

        ans.push_back(count);

        i = i + count;
    }

    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] == ans[i + 1])
            return false;
    }
    return true;
}
