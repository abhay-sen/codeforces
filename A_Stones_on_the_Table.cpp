#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,count=0;
    cin >> a;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
        }
        
    }
    cout<<count;


return 0;
}