#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int count=0;
        for (int i = 0; i <5; i++)
        {
            if (s.at(i)=='A')
            {
                count++;
            }
            
        }
        if (count>2)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
        
        
    }
    
return 0;
}