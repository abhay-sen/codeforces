#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--)
    {
        int count=0,n,count1=0;
        string s;
        cin>>n>>s; 
        for (int i = 0; i < n-1; i++)
        {
            if (count>1)
            {
                
                break;
            }
            
            else if (s.at(i)=='.'&&s.at(i+1)=='.')
            {
                count++;
            }
            else
            {
                count=0;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            if (s.at(i)=='.')
            {
                count1++;
            }
            
        }
        if (count==2)
        {
            cout<<"2"<<endl;
        }
        else {
            cout<<count1<<endl;
        }

    }
    
return 0;
}