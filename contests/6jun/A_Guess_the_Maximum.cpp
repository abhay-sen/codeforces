#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int minimum=INT32_MAX;
        int n;cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            minimum=min(minimum,max(arr[i],arr[i+1]));
        }
        cout<<minimum-1<<endl;
        
        
    }
return 0;
}