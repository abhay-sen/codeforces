#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{

    vector<int> arr{1, 2, -3, 4, -5, 6};
    int size = 6;

    int low = 0;
    int high = size - 1;

    int i = 0;
    while (low <= high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

    // printing the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}