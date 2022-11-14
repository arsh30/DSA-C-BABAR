// LEETCODE 191 UMBER OF 1 BITS

// given -> an unsigned integer
//  isme btana hai kitne number of 1 bits hai
//  Eg : n = 5 bnary is 101 -> op is 2 coz 2 one hai
//  n = 8 ; binary representation is 1000 -> op 1 coz number f 1 ik hai

// How to convert the number into binary
// ...2^3 + 2^2 +2^1 + 2^0

// Approach 1:
// convert into binary and then count krlo ki kitne 1 hai

// Approach 2: [we do this]
// check the last bit if it is 1 then count me incrmenet krlege
// and then riht shift krege kab tak krege jab tak pura number 0 nhi hojata

#include <iostream>
using namespace std;

int hammingWeight(uint32_t n)
{
    int count = 0;
    // cout << n << endl; // checking the number is in binary form or not
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }

        n = n >> 1;
    }

    return count;
}