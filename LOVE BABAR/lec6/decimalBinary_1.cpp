// How to convert the decimal to binary

// Approach 1
// step 1) jisme number me convert krna hai usse divide krege ie 2
// step 2) store remainder in answer
// step 3) repeat the above two steps jab tak number 0 nhi ban jata
// step 4) jidr remainder store hai usko reverse krege  to get the final result

// eg: n = 10
// 10/2 -> rem = 0
// 5/2 -> rem = 1
// 2 / 2 -> rem = 0
// 1 / 2 -> rem = 1

// ans = [0 1 0 1] store the remainder
// Now reverse this [1010]

// NOW HOW TO VISULAIZE KI JO ANSWER AAYA HAI SAHI HAI
// 2 ^ 3 + 2 ^ 2 + 2 ^ 1 + 2 ^ 0 [right to left]

// Approach 2
// eg: n = 5 binary is 101
// suppose hmko nhi pta ki binary kya hai to kese pta lgaye ?

// n = 5; conver this to binary
// What we learnt ki -> kisi number ko '&' krege 1 se, agr 1 aaya to Odd umber , agr 0 aaya to even number

// EG: 1 -> binary of 1 is 00001
// &  1
//  = 1 ie odd [ans]

// Eg: 2 -> binary of 2 is 0010
//    &  1
//    0  ie even [ans]

// EG: 3 -> binary of 3 is 00011
// &  1
//  = 1 ie odd [ans] 1 ko and krege 1 se toh ans is odd

// Eg: 4 -> binary of 4 is 100
//    &  1
//    =  0  ie even [ans] 0 and 1 ko and krege to 0 aayega

// SO  -> kisi number ko '&' krege 1 se to op me agr 1 aya to number is Odd Otherwise EVEN

// Final Ans approach
//     Eg : n = 5;
// while (n != 0)
// {
//     lastBit = n & 1;            // binary form ki last bit store hojegi , Now ab last bit ko use nhi krna next bit ko use krege to right shift krdege
//     ans = (bit * 10 ^ i) + ans; // to reverse the ans
//     n = n >> 1;                 // Taki ab next bit use kr ske
// }

// NOTE->1, 2, 3->Print into reverse order;
// ans = 0;
// ans = (digit * 10 ^ i) + ans  -> FORMULA TO PRINT IN REVERSE ORDER
// ans = (ans * 10) + digit ; FORMULA TO PRINT IN NORMAL ORDER MEANS FROM FRONT SE

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;                // find the last bit and store
        ans = (bit * pow(10, i)) + ans; // Reverse the answer
        n = n >> 1;
        i++;
    }

    cout << "Answer is " << ans << endl;
}