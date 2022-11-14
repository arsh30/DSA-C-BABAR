// Functions
// Always try to make the functionss, means jitna possible ho utna functions me break krdo
/*
Synatx

return_Type function_Name(Input parameter){
    return jo krna hai vo krege
}

1) return type means konsi value return krega yeh function
    jis function o return krega usko catch bhi krege same data type ya print krwalege

2) function name
3) input parameter -> inka name pni mrji chnge bhi kr skte hai but yeh bnte hai main function me jidr se function ko call krege


4) V V V IMP -=> JIS FUNCTION KO CALL KRRE HAI VO USS FUNCTION SE UPR HONA CHAIYE

Data type can be -> int , char float tring void bool 
*/

#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{

    // 1 function bnao usko reuse krte rho
    // int a, b;
    // cin >> a >> b;

    // int ans = 1;
    // for (int i = 1; i <= b; i++)
    // {
    //     ans = ans * a;
    // }
    // cout << "The Power is " << ans << endl;

    // Normally agr yehi power baar baar nikalni ho to code repeat hoga isse better

    int a, b;
    cin >> a >> b;

    int ans = power(a, b);
    cout << "The power is " << ans << endl;
}