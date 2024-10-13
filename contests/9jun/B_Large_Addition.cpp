#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool canBeSumOfLargeIntegers(int x)
{
    // Convert x to a string to easily access each digit
    std::string str = std::to_string(x);

    // Check each digit in the string
    for (char ch : str)
    {
        int digit = ch - '0';
        // Check if the digit is in the range of sums of two large digits (10 to 18)
        if (digit < 10 || digit > 18)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;cin>>t;

    while(t--){
        int x;

        std::cin >> x;

        if (canBeSumOfLargeIntegers(x))
        {
            std::cout << "YES." << std::endl;
        }
        else
        {
            std::cout << " NO" << std::endl;
        }
    }
    
    return 0;
}
