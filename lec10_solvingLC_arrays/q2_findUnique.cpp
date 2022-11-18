/*cODE STUDIO -> FIND UNIQUE */

/*
Approach 1 -> Brute force
*/

/*Approach 2 -> tc O(1) XOR
sare elem ko xor krwaliya, jo 2 same honge vo 0 dedega

Eg: 5,6,5 -> unique is 6
5 xor -> 101 ^ 110 => output 011
jo result aya ie 011 ^ 101 (ie 5) => 110 ie 6 so unique is 6


property of xor ->
1) jb 2 number same honge toh output is 0
2) 0 ^ n = n
*/
int findOneUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

// --------------------------------

// Ques 2 find 2 unique numbers  -> Anuj Bahiaya

