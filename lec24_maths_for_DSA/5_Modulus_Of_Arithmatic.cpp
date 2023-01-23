/*
Modulus -> a % n -> a koi bhi number ho skta hai, agr usko mod by N krege toh output
0 se N - 1 tak aayega

-> property of Modulus of Arithmatic ->
 
*/

#include <bits/stdc++.h>
#include <bits/stdc++.h>
int modularExponentiation(long long x, long long n, long long m)
{
    long long ans = 1;

    while (n > 0)
    {
        if (n % 2 != 0)
        {
            // means odd hai
            ans = (ans * x) % m;
            n--;
        }

        x = (x * x) % m;
        n = n / 2;
    }
    return (int)ans;
}
