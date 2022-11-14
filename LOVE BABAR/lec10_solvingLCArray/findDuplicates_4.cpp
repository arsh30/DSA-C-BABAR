// code studio -> FIND DUPLICATES -> Imp
/*
1) you are given an array of size N containing each number 1 and N-1 at least once.
eg: -> [1,n-1] sare element isme present hai. eg: 5 size array -> 1 to n-1 present hai ie 1 se 4 tak present hai

2) There is a single number that is present in the array twice, so hume vo duplicate number find krna hai

sol)


*/

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    // XOR ing all arrays element
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR -> [1,n-1]
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
