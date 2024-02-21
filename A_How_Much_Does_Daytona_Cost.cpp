#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int count,k;
        cin >> count>>k;
        int arr[count],n=0;
        for(int i=0;i<count;i++){
            cin>>arr[i];
            
            
        }
        for (int i = 0; i < count; i++)
        {
            if (arr[i] == k)
            {
                n++;
                break;
            }
            
            
        }
        if (n==0)
        {
            cout<<"NO"<<endl;
        }
        
        else
        {
            cout<<"YES"<<endl;
        }
        

    }
    
return 0;
}