// LEETCODE 1207 Unique number of occurences
/*
Eg: [1,2,2,1,1,3]
1 -> 3 times
2 -> 2 times
3 -> 1 times
Means sare unique number hai 3,2,1 [all occurence are unique] to return true
agr 2 bhi 3 times hota to 3 2 baar so us case me return false;


Eg:2 -> -3,0,1,-3,1,1,1,-3,10,0
-3 -> 3time
0 -> 2time
1 -> 4time
10 -> 1time

so overall 1 4 2 3 all are unique so return true


Aapproach 1 ->
*/

bool uniqueOccurrences(vector<int> &arr)
{
    vector<int> ans;
    sort(arr.begin(), arr.end());
    int i = 0;
    while (i < arr.size())
    {
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                count++;
            else
                break;
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
