/*
Means Array hai usko check ki ye sorted rotated array hai ya nahi

so ->
1) 1st scenario -> Array is sorted, -> 1 pair h exist krta hai jo prvs bda hai current se
2) 2nd scenario -> Array is sorted and rotated -> 1 pair h exist krta hai jo prvs bda hai current se
3) 3rd scenario -> Array mixtype ka hai -> 2 pair h exist krta hai jo prvs bda hai current se
4) 4th scenario -> same elem hai array me -> 1 bhi pair exst nahi krta

so true us case me bhjege jidr count <= 1; hoga
*/

bool check(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }

    if (nums[n - 1] > nums[0])
    {
        count++;
    }

    return count <= 1;
}
