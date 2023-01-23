string removeDuplicates(string s)
{
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (ans.size() == 0)
        {
            ans.push_back(s[i]);
        }
        else if (s[i] == ans.back())
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

// ------------ 2nd approach using stack

string removeDuplicates(string s)
{
    stack<char> st;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.size() == 0)
        {
            st.push(s[i]);
        }
        else if (s[i] == st.top())
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    while (st.size() != 0)
    {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}