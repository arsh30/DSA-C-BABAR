// LEETCODE 1910 REMOVE ALL OCCURENECE IN A SUBSTRING

// To use these function s.erase and s.find -> import library cstring.h

// while looop me tabhi enter krege jb string exist krti hogi and sth sth jab jaege
// tab pattern present ho main string me, agr hai toh vo s.length se kam hai
// to sahi hai usko delete krdege

string removeOccurrences(string s, string part)
{
    // int str = s.find(part); // find method is for both strings and chracter search
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

// ALTERNATE APPROACH

string removeOccurrences(string s, string part)
{
    // USING STRING AS A STACK

    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        ans.push_back(s[i]);

        if (ans.size() >= part.size() && ans.substr(ans.size() - part.size()) == part)
        {
            // means agr substring puri end tak vo equal hai part ke toh utne por
            // tion ko pop back krdege

            int x = part.size();
            while (x--)
            {
                ans.pop_back();
            }
        }
    }
    return ans;
}