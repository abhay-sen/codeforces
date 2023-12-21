#include <bits/stdc++.h>
using namespace std;
int main() {

    string input;
    cin>>input;
    int n = input.length(),count=0;
    for (int j = 0; j < n; j++)
    {
        if (count<6)
        {
            if (input[j] == input[j + 1])
            {
                count++;
            }
            else
            {
                count = 0;
            }
        }
        else{
            break;
        }
        
        
        
    }
    if (count>=6)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO"          ;

    }
    
    
    

    return 0;

}