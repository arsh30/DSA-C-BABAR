/*
LIST -> List ki implementation doubly linked list ki vjah se hoti hai
        doubly linked list means jisme 2 pointer hote hai ik front me and ik back me

    - isme direct access possible nahi hai, eg: agr 4 element nikalna hai
    toh first idx se iterate krke 4 idx par jana hoga, tbhi uss element ko
    access kr skte hai

---------------------------
HOW TO USE ->
1) import ; #include<list>

    list <int> l;

    list <int> v(l); // jo l me data tha o sara copy hogya

    or

    list <int> l (n,0); // n is size and default value is 0

----------------------------
OPERATIONS

 methods - begin,end , empty, back ye sab dekh chuke h; TC O(1)
 erase method -> TC o(N) coz udr jakr delete krte hai

1) l.push_back(1); TC O(1)
2) l.push_front(2);  TC O(1)
3) l.erase(iterator pass krege ie l.begin());  TC O(N)
4) l.begin(); TC (1)

5) l.end(); TC O(1)
6) l.empty(); TC O(1)
7) l.pop_front(1);
8) l.pop_back(1);
9) l.size(); // give the size

------------------------


*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        // op - 2 1

        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}
