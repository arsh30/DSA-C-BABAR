// Binary Search -> leetcode 69
/*
Eg: ip -> 25 & op sqrt of (25) ie 5

eg 2: ip -> 8 -> 2.3 => 2


Brute force -> loop chalo 1 se n
or har number ke liye square nikal kr
 compare krlo

 eg: ip 27
 toh jo answer hai vo 0 ---- 27 iske bheech
 lie krta hoga


*/

#include <iostream>
using namespace std;

// APPROACH 1
int mySqrt(int x)
{

    // It will store the square root of x
    long sqrt = 0;

    /*
      Running a for loop
      and checking every possible
      value for the square root.
    */
    for (long i = 1; i <= x; i++)
    {
        if (i * i <= x)
        {
            sqrt = i;
        }
        // else {
        //     break;
        // }
    }

    return (int)sqrt;
}
// -------------------------------

// APPROACH 2  BINARY SEARCH

long long int sqrtInteger(int n)
{
    int s = 0, e = n;
    long long int ans = -1;
    while (s <= e)
    {
        //  Check constraint x can be from 0 to 2^31 - 1
        // Agr mid ki value lie 2 ^ 31 toh ye range se bhar hojega
        // Integer overflow hora hai exception ara hai
        // so dataType lenge (long long)

        long long int mid = s + (e - s) / 2;
        if (mid * mid == n)
        {
            return mid;
        }

        if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
// int mySqrt(int x)
// {
//     return binarySearch(x);
// }

// TO FIND DECIMAL PART ALSO
// jo decimal part bnare hai usko integer me nhi store kr payege
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10; // eg: 0.1
        // so isko hume baar baar add krte jana hai
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
// -----------------------

int main()
{
    int n;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout << "Ans is " << morePrecision(n, 3, tempSol);
    // 3 -> means decimal ke baad 3 digit or chahte hai
}