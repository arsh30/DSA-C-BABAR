bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        // X - x = A - a =>
        // x = ch - A + a
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string str)
{
    int si = 0, ei = str.length() - 1;
    while (si <= ei)
    {
        if (str[si] != str[ei])
        {
            return false;
        }
        else
        {
            si++;
            ei--;
        }
    }
    return true;
}

public:
bool isPalindrome(string s)
{
    // remove all faltu chracters
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    // conver to lowercase
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }
    // check palindrome
    return checkPalindrome(temp);
}