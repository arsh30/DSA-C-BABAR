/*
Deque -> double ended queue ->

what is deque?
sol) means begining me or ending me dono taraf "PUSH OR POP" operations kr skte h
     means insertion or deletion dono end se kar skte hai


2) It is also dynamic

3) randome access possible.

How to use ------------->
1) import library : #include<deque>
2) how to create:

    deque<int> d;

----------------------------

1) d.push_back(1); // yeh piche add krega
2) d.push_front(2); // Age se 2 dala,
3) d.pop_back(); // piche wala element hata dega last se
4) d.pop_front(); // aage wala element pop krdega

5) d[idx] or d.at(idx); //  Accessing the element f that particular idx
6) d.front(); // it gives front element
7) d.back(); // it gives back element
8) d.empty(); // it gives either true or false

9) d.begin(); if we want Iteratorr
10) d.end(); // if want iterator for last
11) d.size(); // it gives size
12) d.erase(d.begin() iterator, d.begin() + 1 [kitne elem delete krne h]); //


*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);  // last me add krdega
    d.push_front(2); // age se 2 dala

    // op -> 2,1
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // d.pop_front();

    cout << "Print 1st index Element : " << d.at(1) << endl;

    cout << "FRONT ELEMENT : " << d.front() << endl;
    cout << "BACK ELEMENT : " << d.back() << endl;
    cout << "EMPTY OR NOT " << d.empty() << endl;

    cout << "Before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // we want to delete the 1st idx character
    // 1st elem delete krdega
    cout << "After erase " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}

// --------FInish-------------