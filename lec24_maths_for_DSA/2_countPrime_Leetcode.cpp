int countPrimes(int n)
{
    // SEIVE OF ERATOTHES THEOREM
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == true)
        {
            // agr true hai toh uske jitne bhi mutiple hai unko false mark krdo
            count++;

            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}

// STUDY AND WRITE CODE -> SEGMENTED SIEVE