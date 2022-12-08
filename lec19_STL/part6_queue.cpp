/*
Queue -> Queue means Line, FIFO; Jo line me pehle aayega uski baari aayegi

How to make:
1) import library :  #include <queue>
2)  queue<string> q; // create queue

------------------

OPERATIONS:

1) q.push("value"); // last me add krta hai
2) q.front(); // To view ki konsa element sabse top pr hai
3) q.pop(); // to remove , sbse pehle element
4) q.size(); // gives the size
5) q.empty();

ALL OPERATIONS TC IS O(1)


*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout << "size before pop " << q.size() << endl;
    cout << "First element is " << q.front() << endl; // love
    q.pop();                                          // love remove hua
    cout << "First element is " << q.front() << endl; // babbar aaya

    cout << "size after pop " << q.size() << endl;
}

