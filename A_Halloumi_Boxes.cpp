#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--)
    {
        int x,k; cin >> x >> k;
        long long int arr[x];
        int flag=0;
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        if (x == 1)
        {
            flag = 1;
            
        }
        else{
        for (int i = 0; i < x-1; i++)
        {
            
            
            if (k>1)
            {
                flag=1;
                break;
            }
            
            else if (arr[i]>arr[i+1])
            {
                flag=0;
                break;
            }
            else
            {
                flag = 1;
            }
            
            
            
            
            
        }
        }
        if (flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
return 0;
}