// leetcode ques 1009 -> compliment of base 10 int [lec 7]
// Approach ->

// eg: n = 5; binary of 5 is = 101
// compliment of 5 is  = 010 ie 2

// How 5 is stored in memory -> 00000....101
// compl of 5 is -> 11111....010 [ isme hame kuch mask create krna hoga jisse sare 1 hatjae or last ka 1,0 bch jaye]
// so final form -> ~(n) & mask

// How mask is created
// eg: n = 5; binary is 0000...101
// mask is like 0000...111

// KITNI BAAR 1 ADD KRNA HAI HOW TO DO THIS
// number ko right shift marte rhege jb tak number zero nhi hota utni baar 1 add krna hai

// Now JITNI BAAR LOOP CHLA UTNI BAAR 1 DALNA HAI
// sol initailise mask variable ie - 0000000000
// so left shift the mask variable and Do OR operator with 1

int bitwiseComplement(int n)
{

    int m = n;
    int mask = 0;

    //  Edge case
    if (n == 0)
    {
        return 1; // compliment of 0 is 1
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = ~(n)&mask;
    return ans;
}