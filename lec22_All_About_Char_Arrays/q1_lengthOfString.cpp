
#include <iostream>
#include <vector>
using namespace std;

// q4 -> to convert any character from upper to lower 'X' - 'x' = 'A' - 'a'
char toLowerCase(char ch)
{
    // agr koi chracter lower case me hai toh usko as it is return krdega
    // Agr nahi hai toh Uppercase se Lower case me convert krega

    // 1) to convert it in upper to lower -> ch ('X') - 'A' + 'a'
    // 2) to convert it in lower to upper -> ch ('x') - 'a' + 'A'
    // 3) to convert it in Number character to Number -> '1'-'0' = 1

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        // else eans uppercase chracter hai
        char temp = ch - 'A' + 'a';
        // X-'x' = A - 'a' [X is any chracter]
        // X(ch) - A + a = x

        return temp;
    }
}

// q3 -> Note This is not case sensitive
bool checkPalindrome(char arr[], int n)
{
    int si = 0, ei = n - 1;
    while (si <= ei)
    {
        if (toLowerCase(arr[si]) != toLowerCase(arr[ei]))
        {
            // pehle dono character ko lower case me convert krliya and then compare rka
            return false;
        }
        si++;
        ei--;
    }
    return true;
}

// q2
void reverse(char name[], int n)
{
    int si = 0, ei = n - 1;
    while (si <= ei)
    {
        swap(name[si], name[ei]);
        si++;
        ei--;
    }
}

// q2.1: LEETCODE
void reverseString(vector<char> &arr)
{
    int si = 0;
    int ei = arr.size() - 1;

    while (si < ei)
    {
        int temp = arr[si];
        arr[si] = arr[ei];
        arr[ei] = temp;

        si++;
        ei--;
    }
}

// q1
int getLength(char name[])
{
    // note - abhi tak jitne array ke ques krre the unme size bhi bhjte the but in this
    // size ki need nahi hai

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    // Character Arrays
    // char name[20] = "Arshdeep Singh";
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;

    cout << "your name is ";
    cout << name << endl;

    int len = getLength(name);
    cout << "Length: " << len << endl;

    reverse(name, len);
    cout << "your name is ";
    cout << name << endl;

    cout << " Palindome or Not: " << checkPalindrome(name, len) << endl;
    cout << "Character is " << toLowerCase('b') << endl;
    cout << "Character is " << toLowerCase('C') << endl;

    // Strings
    
}