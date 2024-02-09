#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--)
    {
        int x,k; cin >> x >> k;
        long long int arr[x];
        bool flag;
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < x-1; i++)
        {
            if (x==1)
            {
                flag==true;
                break;
            }
            
            else if (arr[i]>arr[i+1]&&k<2)
            {
                flag=false;
                break;
            }
            
            else 
            {
                flag=true;
            }
            
        }
        
        if (flag)
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