// given  1 int ye btana hai agr vo 2 ki power se dvide hota hai to return true otherwise false
/*
Hit and Trial ->

% -> Not Work this stategy

eg:n = 16 -> 0
eg: n =14 -> 0

/ -> check this -> NOT WORK THIS ALSO

eg: n = 16
16 / 2 -> 8 / 2 -> 4 / 2 -> 2 / 2 = 1 [means jb 1 aara hai to return true]

eg: m = 14
14/2 -> 7 / 2 -> 1 [idr bhi 1 ara but this is not the power of 2] so FAIL
*/

// Approach 1 ->
// number can be any range from ie 2^0 to 2^31
// so har baar power calculate krke dekhte and compare krte hai ki vo equal hai n ke if yes to retun true
// isme har baar power calculate krre hai

bool isPowerOfTwo(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            return true;
        }
    }
    return false;
}

// Approach 2: OPTIMIZATION
// Reuse the ans
// eg:
// int ans = 1;
// ans = ans * 2;  1 * 2 = 2
// 2 * 2 = 4

bool isPowerOfTwo(int n)
{
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }
        if (ans < INT_MAX / 2)
            ans = ans * 2; // mult to krna hi h 2 se, so check krke krege
    }
    return false;
}
