/*
Priority Queue: Means aisi queue bnadi Jiska first element hmesha "greatest hoga"
ie Max Heap; jo default priority queue bnate hai, vo MAX HEAP hota hai

Eg: PQ aisa DS hai jisme ,agr hum kuch element enter krte hai, Toh jab nikalna shuru
krege , Tb 2 hi ways
1) max heap -> Jo sabse greatest element hoga vo bhar aayega
2) Min heap ->   Jo sabse minimum element hoga vo bhar aayega


---------------
How to make: 1) simply include <queue>
2)  priority_queue<int> p; // It is based n Max heap; means jo sabse greates element hoga vo pehle bhar aayega

3) How to make minHeap
 priority_queue<int, vector<int>, greater<int>> mini;

-----------------

1) maxi.push(1);
2) maxi.top(); // to view ki sabse upr konsa element h
3) maxi.pop(); // jo sabse greatest hoga vo niklega

4) maxi.size();
5) maxi.empty();

*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max heap;
    priority_queue<int> maxi;

    // min heap;
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size -> " << maxi.size() << endl;
    int n = maxi.size(); // andr isliye nhi kra coz size baar baar change hora hai

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " "; // 1 print krwaya
        maxi.pop();                // or usko bhar nikal diya
    }
    cout << endl;

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout << "Size -> " << mini.size() << endl;
    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "EMTY OR NOT " << mini.empty();
}
