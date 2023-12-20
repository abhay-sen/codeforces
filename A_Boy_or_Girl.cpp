#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    cin>> s;
    int n= s.length(), counter=0;
    for (int j = 0; j < n; j++)
    {
        counter++;
        for (int i = j+1; i < n; i++)
        {
            if (s[j]==s[i])
            {
                counter--;
                break;
            }
            
        }
        
        
    }
    
    if (counter%2==1)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    



return 0;
}