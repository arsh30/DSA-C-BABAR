/*
STACK -> LIFO -> Last In first Out, Eg: marriage plate system jo sbse upr hoti hai
vo sabse pehle nikalti h

-----------------
1) How to include -> #include<stack>
2) How to make -> stack<string> s;


---------------

OPERATIONS :

1) s.push(); add krta jaega last me
2) s.top(); // jo sabse end me jaega vo sabse pehele Milega, [USUALLY TO VIEW ON TOP]
3) s.pop(); // jo sabse end me aayega ya upr hoga vo sabse pehle bhar aayega
4) s.size(); // It gives the size ; kitne element present h
5) s.empty(); // ye btaega ki empty hai ya nahi
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout << "Top element " << s.top() << endl;
    s.pop();
    cout << "Top element " << s.top() << endl;
    cout << "size " << s.size() << endl;
    cout << "Empty or not " << s.empty() << endl;
}
