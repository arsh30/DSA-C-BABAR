// STATICALLY AND DYNAMICALLY CREATED OBJECT
/*
1) how we created dynamically variable?
  int *i = new int;
  Isse hota tha ki Heap pr 1 varible bna int type ka
  aur i me address pdha hai

  Hero *ramesh = new Hero; // same as above
 hero type ka pointer pdha hua h, or heap me memory allocate hui h
 assume address is 710; so Hero type ka pointer Heap memory ko point
 krra hoga same

 int main()
{
    // Statically allocation
    Hero a;
    cout << "Level is " << a.level << endl;
    cout << "Health is " << a.health << endl;

    // Dynamically Created Object
    Hero *b = new Hero;
    cout << "Level is " << (*b).level << endl;
    cout << "Health is " << (*b).health << endl;
    // Agr b.health() ye likhte to galat hota coz b jo hai
    // voi pointer hai means Address hai

    // So object jo hai address pr pdha hua hai usko
    // dereference krege *(b) krkr ya fir b-> [ye arrow lgaege]

    cout << "Level is " << b->level << endl;
    cout << "Health is " << b->health << endl;
}

<---------->
CHECK NEXT FILE VID5.CPP
<----------->
*/
#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;
};
int main()
{
    // Statically allocation
    Hero a;
    cout << "Level is " << a.level << endl;
    cout << "Health is " << a.health << endl;

    // Dynamically Created Object
    Hero *b = new Hero;
    cout << "Level is " << (*b).level << endl;
    cout << "Health is " << (*b).health << endl;
    // Agr b.health() ye likhte to galat hota coz b jo hai
    // voi pointer hai means Address hai

    // So object jo hai address pr pdha hua hai usko
    // dereference krege *(b) krkr ya fir b-> [ye arrow lgaege]

    cout << "Level is " << b->level << endl;
    cout << "Health is " << b->health << endl;
}