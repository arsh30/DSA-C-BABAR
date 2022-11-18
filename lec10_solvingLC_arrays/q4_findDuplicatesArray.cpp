int findDuplicate(vector<int> &arr)
{
    //    Write your code here
    // lets first sort the array :::
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == arr[i + 1])
            return arr[i];
    }
}