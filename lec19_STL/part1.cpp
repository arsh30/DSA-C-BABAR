/* c++ STL -> 2 major parts
1) Algorithms
2) Containers


CONTAINERS: Means pre build data structures

sequnce containers = Array, vector, deque, list
container Adapters = Stack ,Queue, Priority Queue
Associative Containers = set, Map, mulitSet, MulitMap
Unordered Associate = Unorder set, unordered Map, Unorder MultiList,
                    Unorder mulitMap


ALGORITHMS:

1) Binary search
2) Lower/ upper Bound
3) min/ max
4) reverseOrder
5) sort / swap etc

*/

/*
Array -> It is a collection of data of similar dataType
1) first array library include kro
2)  array<int, 4> a = {1, 2, 3, 4}; yeh bnaya library se
    integer type ka rray , size 4; = and elements insert krdiye

    difference between both array?

    jo  stl wala array hai, iski implmentation basic array jo upr
    hai usse hi hoti h means
    STL array ki implementation fixed size ke static array se hi
    hoti hai.

    so STL array is static array isliye isko use nahi krte
    cometitive prog me

    Overall STL array basic Array par hi based hota hai

    -> access the element: a.at(idx) or a[idx] ; TC O(1)
    -> size -> a.size()
    -> access first element -> a.front() o(1)
    -> access last element -> a.back() o(1)
    -> check array is empty or not -> a.empty() o(1)
*/

#include <iostream>
#include <array>
using namespace std;
int main()
{

    int basicArr[3] = {1, 2, 3};
    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << " ELEMENT AT 2ND INDEX : " << a.at(2) << endl;
    //  2 ways se access kr skte hai: 1)  a.at(idx); 2) a[idx];

    cout << " EMPTY OR NOT : " << a.empty() << endl;
    // It return false or true: 0 or 1

    cout << "FIRST ELEMENT : " << a.front() << endl;
    // Ye first element dedega

    cout << "LAST ELEMENT : " << a.back() << endl;
}
