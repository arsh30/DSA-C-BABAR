/*
  BEHIND THE SCESNS (BTS)
1) Jb Hero ramesh; isse memory me 2 block allocate hote hai
   health, char level yeh 2 block store hogye honge

   so jab size print krege object ka to print hona chaiye jitne
   variable hai
   int = 4
   char =1 op => 5 aana chaiye

   But op is 8 How?  study Padding and greedy alignment
   Hero greedy alignment ki vjah se ayaa

   <-------------------------->
   check vid4.cpp file nOw
   <--------------------------->
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
    Hero ramesh;
    // jab size print krwaege to op 5 ana chaiye
    // int = 4byte,  char 1 byte

    cout << "Size is " << sizeof(ramesh) << endl;
    // Size is 8 -> Study padding , greedy alignment
}