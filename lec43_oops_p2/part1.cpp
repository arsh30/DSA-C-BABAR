// ENCAPSULATION CONCEPT -------->
/*
 Encapsulation [Data Hiding] -> Means wrapping of data Members
 and function in a single enity is encapsulation. [entity is class]

 Fuly Encapsulated class -> In Which all Data Members are private
 [private means class ke member hi access kr skte h]

 ADVANTAGES OF ENCAPSULATION -

 - Data Hiding which increase security [Means private krdo members
   ko direct access nahi kr skte, GETTER func ke through hi
   kar skte ]

 - If we want class Read only toh vo bhi kar skte hai by
   making private toh GETTER ke through access krege un variables
   ko

 - Code Reusablitiy

 - Encapsulation beneficial in Unit Testing



 EXAMPLE
example of encapsulation, in a company there are different sections like the accounts section, finance section, sales section etc. The finance section handles all the financial transactions and keep records of all the data related to finance. Similarly the sales section handles all the sales related activities and keep records of all the sales. Now there may arise a situation when for some reason an official from finance section needs all the data about sales in a particular month. In this case, he is not allowed to directly access the data of sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data. This is what encapsulation is. Here the data of sales section and the employees that can manipulate them are wrapped under a single name “sales section”.

We can not access any function from class directly. We need an object to access that function which is using the member the variable of that class.

The function which we are making inside the class ,it must use the all member variable then only it is called encapsulation.
*/
#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student first;
    cout << "FINE" << endl;
}