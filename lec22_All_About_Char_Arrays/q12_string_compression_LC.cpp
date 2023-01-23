// lc 443
int compress(vector<char> &chars)
{
    int i = 0; // for traversing the chars array
    // jo bhi valid answer hoga, usko isme rakhege and count ko ++ krte jaege
    int ansIndex = 0;
    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;

        while (j < n && chars[i] == chars[j])
        {
            j++;
        }

        // yaha kab aayege
        //  ya to pura array traverse hogya hai,
        //  ya koi new character encounter hua hai

        // so store old character
        chars[ansIndex++] = chars[i];

        // then count the character
        int count = j - i;
        if (count > 1)
        {
            string cnt = to_string(count); // eg 12 is string
            // coz ik ik krke append krna hai
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
                // ansIndex is basically storing the size
            }
        }

        // coming to new character
        i = j;
    }
    return ansIndex;
// ANSiNDEX is basically the size of array
}


// OR

/*
public static String compress(String str)
{
    if (str.length() == 0)
        return "";
    StringBuilder sb = new StringBuilder();

    char prevChar = str.charAt(0);
    int i = 1;
    while (i <= str.length())
    {
        int count = 1;
        while (i < str.length() && prevChar == str.charAt(i))
        {
            count++;
            prevChar = str.charAt(i);
            i++;
        }

        sb.append(prevChar);
        sb.append(count);
        if (i == str.length())
            break;
        prevChar = str.charAt(i);
        i++;
    }

    return sb.toString();
}

*/
// -------------------- FINSIH ---------------