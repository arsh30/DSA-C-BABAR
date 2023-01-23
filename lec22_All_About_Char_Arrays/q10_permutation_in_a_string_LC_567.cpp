/* 

IMPORTANT QUES -> 567 LEETCODE tc o(n + m)

Eg: s1 = ab -> permutation of ab is ab , ba 
s2 = e i d b a o o o -> isme check krna hai ki koi permutation exist krti hai 

Approach -> ik count array maintain kra s1 ke liye usme count hoga
2) traverse on 2nd string and compare ki exist krta hai, traverse krege jitna window ka 
size hai

windowSize = 2 kyuki s1 ki length utni hai

- e i d b a o o o -> running for first window e i inko bhi chracterCount array bnaege 
usme count store krlege agr exist krta hoga count array 1 me to return true

jb next winow ke liyeelement dalege toh prvs ko remove krdege
*/



private:
bool checkEqual(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

public:
bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};

    // storing character count  in character array
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // travel on s2 string in windowSize s1.length % compare
    int count2[26] = {0};
    int windowSize = s1.length();
    int i = 0;

    // s2 pr travel krege and compare
    // running for first window
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
        return 1;

    // age ki windows process kri s2 length me
    while (i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        // remove krege jo 0index wala element hoga
        char oldChar = s2[i - windowSize];
        int oldIndex = oldChar - 'a';
        count2[oldIndex]--;

        i++;

        // compare
        if (checkEqual(count1, count2))
            return 1;
    }
    return 0;
}