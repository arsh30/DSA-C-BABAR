/*
MAP -> The data stored is in key value form.
1) all keys should be unique
2) 1 key 1 hi value ko point keegi

eg: key (love) : scorpio(value)
toh love scoripio ko hi point krega kisi aur ko nahi kar skta
ye ho skta hai ki love is pointing to scorpio
and babbar is also pointing to scorpio
value same ho skti hai

but aisa nahi ho skta, love is pointing to scorpio and
love is pointing to verna (ERROR)

----------------------

How to use Map?

1) #include<map>
2) map<int,string> m;


*/

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";
    // 1,2,13 are keys
    // babbr, love , kumar are values
    // If we print it is in sorted order

    m.insert({5, "bheem"}); // tc o(log n)

    cout << "Befor erase" << m.size() << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl; // tc  o(log n)
    }

    cout << "FINDING 13 -> " << m.count(13) << endl; // tc o(log n)

    m.erase(13); // tc o(log n)

    /*
    TIME COMPLEXITY ->
    Map  -> iski implementaion using red or black tree se hoti hai
    jo unordered Map uski implementation Hash Table se hoti hai uski TC O(1) hoti
    */

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    //    Find Iterator return krta hai us particular element ka
}