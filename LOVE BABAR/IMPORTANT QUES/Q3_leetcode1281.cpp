// lec 5 -> LEETCODE 1281 SUBTRACT PRODUCT $ SUM

int subtractProductAndSum(int n)
{
    int product = 1;
    int sum = 0;

    while (n != 0)
    {
        int lastDigit = n % 10;
        product = product * lastDigit;
        sum = sum + lastDigit;

        n /= 10;
    }

    int ans = product - sum;
    return ans;
}