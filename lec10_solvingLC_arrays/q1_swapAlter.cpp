/*
Eg: input -> arr [1,2,3,4,5,6] -> swap Alternate
    op -> [2,1,4,3,6,5]

eg2: input -> arr[1,2,3,4,5] -> swap alternate
op -> [2,1,3,4,5]


Note -> Jo bss pair me honge voi swap honge

-------
Algo ->
1) for (travel on idx 0 to n-1){
    if(Arr[i + 1] < size) { -> check kra ki next element array ki
    range me to hai, aise sare swap hojege
    }
}

2) Normal for loop me -> i ko 1 se increment krte the
but in this hum 2 se krege kyuki next element toh sort hai
*/

// NOTE -> array ko function me pass kro to original array hi pass hota hai, means 0th index element ka address jata hai agr print kro
// toh
#include <iostream>
using namespace std;
void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        // check ki hum within array hai ya nahi, agle wale idx ko dekh kr
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    swapAlternate(even, 8);
    print(even, 8);

    cout << endl;

    swapAlternate(odd, 5);
    print(odd, 5);

    // printing the array
    // print(odd, 5);
}