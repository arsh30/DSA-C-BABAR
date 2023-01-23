#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void reverse_words(char *s)
{
    // Reverse the entire string
    int start = 0, end = strlen(s) - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    // Reverse each word in the string
    start = 0;
    for (int current = 0; current < strlen(s); current++)
    {
        // if (s[current] == ' ')
        // {
        //     continue;
        // }
        start = current;
        while (s[current] != ' ' && current < strlen(s))
        {
            current++;
        }
        end = current - 1;
        while (start < end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
}

int main()
{

    char s[] = "my name is juned";
    // cin>>s;

    reverse_words(s);
    cout << s;

    return 0;
}