#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main() {
    string s1,s2;
    cin >> s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1>s2)
    {
        cout<<1;
    
    }
    else if(s1<s2)
    {
        cout<< "-"<<1;
    }
    else
    {
        cout<<0;
    }
    
    
    


}