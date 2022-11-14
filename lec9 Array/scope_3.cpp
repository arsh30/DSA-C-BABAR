#include <iostream>
using namespace std;
/*
Note->
1) Variable -> ko jab kisi varibale ko function ke liye pass kro from main function
                to ek copy create hoti hai and vo jaati hai, means both values are diff;

2) Array ->
main function jidr array bna hai usko paas kra kisi function me to value pass nahi hoti, reference pass hota hai
so jb array ko function me pass kro to uska reference jata hai udr means original array

so jo function me array hai and main me array both are same
How -> eg: arr = [1,2,3];
update(arr,3); // arr jo diya hai means address diya hai 0th element ka

*/
void update(int arr[], int n)
{
    cout << "Inside th function" << endl;

    // update the array first element
    arr[0] = 120;

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "going back to main" << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}