#include <iostream>
using namespace std;

// do -> https://www.geeksforgeeks.org/print-distinct-elements-given-integer-array/

void countFrequency(int arr[], int n)
{
    bool visited[5] = {false};

    // traverse the array and count frequencies
    for (int i = 0; i < n; i++)
    {

        // skip this element if already process
        if (visited[i] == true)
            continue;

        // count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
        }
}
int main()
{
    int arr[5] = {3, 1, 3, 1, 4};
    countFrequency(arr, 5);
}