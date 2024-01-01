#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.length();
    int lower=0,upper=0;
    for (int i = 0; i < n; i++)
    {
        if (int(s.at(i))<123 && int(s.at(i))>96)
        {
            lower++;
        }
        else{
            upper++;
        }
        
    }
    if (lower<upper)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s;
    
    
return 0;
}