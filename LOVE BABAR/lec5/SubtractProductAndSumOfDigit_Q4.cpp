// Leetcode -> 1281

// eg: n = 234
// product -> 2 * 3 * 4 = 24;
// sum->2 + 3 + 4 = 9;

// ans = product - sum = 24 - 9 = 15;

// but number kaise nikale?

// eg: n = n % 10;
// n = 234 % 10; // op - 4
// ab number ko chota krdo

// n = n / 10; ie 23

// now 23 % 10 ie 3
// n = n / 10, now num is 23 / 10 ie 2

// Eg2: 456
// find the last digit ie remainder -> n % 10; op - 6
// Now NUmber ko chota krdo -> n / 10 ie 45
// Then 45 ki last digit find krlo -> 5
// number chota -> n / 10 ie 4

// rukege tb jab number 0 hojega

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

// APPROACH ->

// Har bar last digit nikalege product and sum har baar calculate krte jaege
