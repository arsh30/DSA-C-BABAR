#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "FINDING 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;

    // cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    // lower bound iterator return krta hai

    // cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max -> " << max(a, b) << endl;

    cout << "min -> " << min(a, b) << endl;

    swap(a, b);
    cout << "A -> " << a << endl;

    string str = "ABCD";
    reverse(str.begin(), str.end());
    cout << "String is " << str << endl;

    rotate(v.begin(), v.begin() + 2, v.end());
    // 1st parameter is kidr se start krna h
    // 2nd parameter is kitne se rotate krna h, and starting idx me add
    // krege
    // 3r is array khtm kidr hora h

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    // this sort is based on introsort
    // introsort it is combination of 3 sort
    // quick sort, insertion sort, heap sort

    for (int i : v)
    {
        cout << i << " ";
    }
}