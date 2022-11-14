/*
what is arrays?
sol) array is a collection of similar type of data
    eg: agr  100 values store krni hai toh kese krege ? 100 variables create krege No?
    hum sirf ik array bnaege jisme ye sari value aajegi

2) The values that are stored in memory are in conatgeous loation
    eg: [ 3 5 9 2 11 ] memory me contageous store honge, suppose 0th index ka address 4k hai to next element is 4k + 4,
    then 4k + 8, 4k + 12,

3) Jo bhi sari values pdhi hai array me unko hum index ki help se access kr skte hai,
   starting of index is 0 and last index is n - 1


Q) HOW TO DECLARATION AND ACCESSING THE ARRAY?
Sol)
int arr[3]; // garbage value assign hojegi
2) Access -> suppose 3rd element chaiye , arr[2];
3) Indexing start from 0 to n-1

Q) INITIALIZATION
sol)
1) int a = 5; // jb variable declare krte the toh memory me 1 block assign hota tha a name se value 5 dalti thi
2) In Array -> int num[3] = {1,3,4}; toh memory me bnega -> [1,3,4]
3) int arr[10000] = {0}; // isse sabki value 0 assign hojegi
4) int arr[1000]; // garbage value assign hojegi
5) int(dataType) arr(variable_name) [1000 (size)]: eg int arr[10]

Q) ARRAY WITH FUNCTIONS
Sol) like we learnt in variables, jab main me varible create kro or Kisi function me pass kro toh copy jaati hai
    means both the values are different

    But in Arrays, main function me declare krra hai or kisi dusre function ko pass krege to address jaega of 0 address
    so agr kuch bhi change krege to original array me change hojega

    eg: update(arr,10); // update function ko call kra sath me array bhja, array ka 0th index ka element
    print hota hai agr print kre eg: cout << arr; so isliye address pass hora hai isliye original array me reflect aara hai

Q) Hm array ke size length kyu bhjte hai jb aise array create krte hai?
Sol) sizeof operator se size ni nikl pata isliye hum sath hi bhjte hai eg is below
    fifth array

*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing done " << endl;
}
int main()
{

    // declare
    int number[15];

    // Accessing & checking ki first location pr kya pdha hai
    cout << "Value at 1 index " << number[1] << endl; // garbage value assign hojegi pure array ko

    // if access index jo exist nhi krta, gives error
    cout << "Value at 20 index " << number[50] << endl;

    // Initialising an array
    int second[3] = {5, 7, 12};
    cout << " value at 2 index " << second[2] << endl; // op 12, bracket me index pass krte hai

    int third[15] = {2, 7}; // 2 values dali but size 15 hai, so baki jgh 0 aajega apne aap

    // printing the array
    int n = 15;
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;

    // Initialise all locations with {0}
    int fourth[10] = {0};
    n = 10;
    printArray(fourth, 10);

    // Can we find the size of the array using sizeof
    int fifth[10] = {1}; // but is case me size to 1 hi hai thats why hum size jo h jrur bhjre hai Function me
    cout << "Size of 5th array is " << sizeof(fifth) / sizeof(int) << endl;

    char ch[5] = {'a', 'b', 'c', 'd'};
    cout << ch[3] << endl;

    // printArray(ch, 3); // Error coz upr jo hai int ka recieve krega

    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;

    double firstDouble[5];
    float firstfloat[5];
    bool firstBool[5];

    cout << "Everything is fine " << endl;
}