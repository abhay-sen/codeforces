#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        bool flag=false;
        int index=0;
        if(arr[0]-arr[n-1]==0){
            flag=false;
        }
        else{
            flag=true;
        }
        string s;
        
        for (int i = 0; i < n; i++)
        {
            
        }
        
        if(flag){
            cout<<"YES"<<endl;
            for (int i = 0; i < n; i++)
            {
                if ((arr[i] - arr[0] == 0)&&i==n-2)
                {
                    s.push_back('R');
                    i++;
                }
                if (i==n-1)
                {
                    
                    s.push_back('R');
                }
                else{
                    s.push_back('B');
                }
            }
            cout<<s<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
return 0;
}