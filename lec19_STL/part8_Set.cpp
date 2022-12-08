/*
SET ->
1) isme sare unique element store hote hai. Eg: agr 5 times 5 dala toh
 actual me 1 hi baar hoga; [MEANS ALL ELEMENT SHOULD BE UNIQUE]

2) Iski implementation hoti hai, BST used krke

3) Koi bhi element agr daal chuke , to uske baad modification is not allowed
 ya to nikalo ya toh delete kro

4) sorted order me element return hote hai

-----------------

Unordered SET ->
1) set is slow, than unordered set
2)  unordered, jbhi element fetch krre hote hai toh element randome order me aate h

----------------

HOW TO CREATE AND USE:
1) #INCLUDE<SET>
2) set<int> s;

------------------

OPERATIONS

1) s.insert(5); - TC o(Log n)
    set<int>::iterator it = s.begin(); // Agr pointer set krna ho 2nd idx pr
         it++;

2)   // s.erase(s.begin()); // o index // TC O(LOG N)
    s.erase(it); // 2 index

3) s.count(5); // it tells ki 5 present hai ya nahi in true or false, TC O(LOG N)

4)   set<int>::iterator itr = s.find(5);
     find jo hai iterator deta hai, ki 5 elem ka
    iterator kya hai, MEANS USKA REFERENCE MIL JATA H
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    s.insert(0);

    for (auto i : s)
    {
        // auto : means koi bhi data type hai apne aap leleta hai
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    // s.erase(s.begin()); // o index
    s.erase(it); // 2 index

    for (auto i : s)
    {
        // auto : means koi bhi data type hai apne aap leleta hai
        cout << i << endl;
    }

    cout << endl;
    cout << "5 IS PRESENT OR NOT " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5); // find jo hai iterator deta hai, ki 5 elem ka
    // iterator kya hai, MEANS USKA REFERENCE MIL JATA H
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}