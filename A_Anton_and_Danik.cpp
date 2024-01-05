#include <bits/stdc++.h>
using namespace std;
int main() {
    int size;

    string s;
    cin>>size;
    cin>>s;
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='A'){
            count++;
            

        }
    }
    if (count>(s.length()-count))
    {
        cout<<"Anton";
    }
    else if (count<(s.length()-count))
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    
return 0;
}