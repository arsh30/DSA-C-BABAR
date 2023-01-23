string reverseWords(string str)
{
    int left = 0, right = 0;
    while (left < str.size())
    {
        // left will travel on whole string
        while (right < str.size() && str[right] != ' ')
        {
            right++;
        }
        // after complting right means now its a time to reverse one word
        // reverse(str,left, right-1);
        // reverse(str.begin() + left, str.begin() + right);

        // reverse(str.begin() + left , str.begin() + right);
        int si = left;
        int ei = right - 1;

        while (si <= ei)
        {
            swap(str[si], str[ei]);
            si++;
            ei--;
        }

        left = right + 1;
        right = left;
    }
    return str;
}