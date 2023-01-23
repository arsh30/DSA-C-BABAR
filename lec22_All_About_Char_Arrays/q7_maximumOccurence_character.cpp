/*
given string ->eg:  test

t - 2
e - 1
s - 1

op t
*/

#include <iostream>
using namespace std;

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    // Create array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
            // cout << number;
        }
        else
        {
            // uppercase
            number = ch - 'A';
            // cout << number;
        }
        arr[number]++;
    }

    int maxi = -(int)1e9;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans; // to conver again into the number
    return finalAns;
}
int main()
{
    string s;
    cin >> s;

    cout << "the maximum occurence is : ";
    cout << getMaxOccCharacter(s) << endl;
    return 0;
}