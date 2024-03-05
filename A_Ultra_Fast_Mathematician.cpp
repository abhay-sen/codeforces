#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    string result;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1.at(i)==s2.at(i)){
            result.push_back('0');

        }
        else
        {
            result.push_back('1');
        }
        
    }
    cout<<result;

return 0;
}