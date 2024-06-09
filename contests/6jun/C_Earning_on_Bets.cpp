#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int minimum=INT_MAX;
        int index;
        for (int i = 0; i < n; i++)
        {
            if(minimum>arr[i]){
                minimum=arr[i];
                index=i;
            }
        }
        int prod=1;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            if(i!=index){
                prod*=arr[i];
            }
        }
        cout<<prod<<" ";
        vector<int> solution(n);
        int a=(prod*minimum);
        for (int i = 0; i < n; i++)
        {
            
            solution[i]=a/arr[i];
            
        }
        for (int i = 0; i < n; i++)
        {
            sum+=solution[i];
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            if(solution[i]*arr[i]<=sum){
                flag=false;
                break;
            }
        }
        if(flag){
            for (int i = 0; i < n; i++)
            {
                cout<<solution[i]<<" ";
            }
            cout<<endl;
            
        }
        else{
            cout<<-1<<endl;
        }
        
        
        
    }
    
return 0;
}