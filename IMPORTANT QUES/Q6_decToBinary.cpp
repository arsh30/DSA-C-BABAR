// DECIMAL TO BINARY -> Lec 6

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


    // APPROACH 2 -> number ko divide kra 2 se  [jisme convert krna]
    // 2 - store remainder
    // repeat above 2 steps jab number 0 nhi hota
    // 4 - last me num ko reverse krdiya

    // int ans = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int rem = n % 2;
    //     ans = (rem * pow(10, i)) + ans;

    //     n = n / 2;
    //     i++;
    // }
}