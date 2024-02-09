#include <bits/stdc++.h>
using namespace std;
int main() {
    int testcases;
    cin>>testcases;
    int length[testcases];
    string s[testcases];
    for (int i = 0; i < testcases; i++)
    {
        cin>>length[i];
        cin>>s[i];
    }
    int first,last;
    
    for (int i = 0; i < testcases; i++)
    {
        for (int j = 0; j < length[i]; j++)
        {
            if (s[i].at(j)=='B')
            {
                first=j;
                break;
            }
            
        }
        for (int j = length[i]; j >0; j--)
        {
            if (s[i].at(j-1)=='B')
            {
                last=j;
                break;
            }
            
            
        }
        cout<<last-first<<endl;
    }
    
return 0;
}