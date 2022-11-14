// Means jo main function me variable create kra hai or vo agr kisi dusre function ko paas krege
// toh copy jaegi udr means dono values jo hai vo different hai 

#include<iostream>
using namespace std;

// FIND OUTPUTS 

// void update (int a){
//     a = a / 2; // op -> 5
// }

// int update(int a)
// {
//     a = a - 5; // 10
//     return a;
// }

int update(int a)
{
    int ans = a * a;
    return ans;
}
int main(){
    int a = 14;
    a = update(a); 
    cout << a << endl; // op -> 196
}