/*
prime num -> ip me no milega btana hai prime hai ya nah

eg: 10 -> agr kisi no 2 se 9 tak kisi number ne divide krdiya toh not prime hai
0 & 1 -> are not not prime 


TC -> Kitni baar loop chlra hai, nearly n-2 baar enter krega O(N) TC 

- kya isko optimise kr skte hai?

*/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime number " << endl;
    }
    else
    {
        cout << "Not Prime number " << endl;
    }
}