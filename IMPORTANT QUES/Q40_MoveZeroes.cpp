/*
ques says ->
1) sare 0 ko  right ki trf hift krna hai
2) jo element ka order hai , vo preserver rakhna hai, means jo pehele aaya vo pehle aayega

3) Approach 2 pointer approach:
3.1) 0th idx pr nonZero value aayegi
3.2) loop chalaege 0 to < than
3.3) if =0 ignore
    if != 0 (swap)
    nonzero ++ krdo;
*/

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int nonzero = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[nonzero]);
            nonzero++;
        }
    }
}