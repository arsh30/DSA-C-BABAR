/*
1) vector is a dynamic array
jese normall array me continous memory me element store hote hai
same vector array me bhi hota hai

2) but isme alag hai ki, jese hi humare array ka size full hogya to
toh yeh apne array ka size "DOUBLE KRLEGA";

How? ye 1 new or array bnaega jese hi size full hojega
toh jo old array hoga uski sari values copy krke iss Array me put
krdega or purane wale array ko remove krdega

this is Dynamic Array bcoz ye apna size ko increase or decrease krna janta hai

This is very usefull.

-----------HOW TO USE THIS -----------------
1) first hmko iski library include krni pdhegi ie #include<vector>

2) creating vector -> vector<int> v;
    jb new vector bnate h toh uski capacity is 0

    or 2nd way to declare
    vector<int> a (5 (size of vector) , 1(default value is 1));
    eg vector <int> a(n,0); // where n is size
-------

1) How to insert element [it add in the last] : v.push_back(1);
2) To check the capacity of array: v.capacity(); [ Means kitne
    element store ho skte hai]

3) to check the size: v.size(); // [ye btata hai ki array ka size
                                    kya hai


4) To access the element: a[idx] or a.at(idx); TC O(!)

5) access the first element -> a.front(); TC O(1)

6) access the last element -> a.back();

7) to remove the last element -> v.pop_back();

8) clear the array [size 0 krdega yeh] -> v.clear();

9) Agr iterator chaiye vector ke -> v.begin();

10) How to copy value from 1 array to another
Eg: vector<int> v;
vector<int> last (v); // Array put krdiya so sare element jo the idr copy hogye
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "SIZE : " << v.capacity() << endl;
    // capactity means abhi pure array ki capacity kitni hai,
    // kitne element tore ho skte hai, and
    // size  means kitne element hai usme

    v.push_back(10);
    cout << "CAPACITY : " << v.capacity() << endl;

    v.push_back(20);
    cout << "CAPACITY : " << v.capacity() << endl;

    v.push_back(30);
    cout << "CAPACITY : " << v.capacity() << endl;
    // Now jese hi 2 ki capacity full hui toh isne apne aap
    // ko double krliya

    cout << "SIZE : " << v.size() << endl;

    cout << " ELEMENT AT 2ND INDEX : " << v.at(2) << endl;
    // 2nd idx ka element return krdega

    cout << "ACCESS THE FIRST ELEMENT " << v.front() << endl;

    cout << "ACCESS THE LAST ELEMENT " << v.back() << endl;

    cout << "Befor pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << " CLEAR THE VECTOR: [Means size 0 hojega] " << endl;
    cout << "befr clear the size " << v.size() << endl;
    v.clear();
    cout << "after clear the size " << v.size() << endl;
}
