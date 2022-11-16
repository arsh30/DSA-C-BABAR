#include <iostream>
#include <math.h>
using namespace std;

/*
LEETCODE 7

REVERSE UNSIGNED INTEGER-> Unsigned int means positive or negative

Approach ->
1) Normal case -> normall number reverse -> form -> (ans * 10) + Ldigit
number -> iska reverse krna hai simple

2) Case 2 -> Aisa koi number hai jo Int ki range se bhar hai ya kam hai so uss case me return 0

Handle case 2 ->

1)suppose aisa koi no aaya ans me jo ikdum peak pr hai ans ki range ke ie 2 ^ 31 - 10
Ab isko agr 10 se mult krege to kya accept krega No

so multiply to 10 se krna hi hai reverse krne ke liye so soch smj kr muliply krege
if(ans > INT_MAX / 10) return 0;

*/
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int lDigit = n % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + lDigit;

        n = n / 10;
    }
    // cout << "Reverse ans is " << ans << endl;
}