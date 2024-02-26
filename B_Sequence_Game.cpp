#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n,count;
        cin>>n;
        count=n;
        n+=1;
        vector<int>  v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        v.push_back(v[n-1]);
        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            
            if (v[i+1]>=v[i])
            {
                result.push_back(v[i]);
            }
            
            else
            {
                result.push_back(1);
                result.push_back(v[i]);
            }
            
            
        }
        cout<<count<<endl;
        for (int i = 0; i < count; i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
        

    }
    
return 0;
}