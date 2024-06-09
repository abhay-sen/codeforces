#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        
        for (int i = 1; i <= 2*n-2; i++)
        {
            
            if (i*2==k)
            {
                
                cout<<i<<endl;
                break;
            }
            else if (i*2+1==k)
            {
                cout<<i+1<<endl;
                break;
            }
            else if(i*2+2==k&&i!=1) {
                cout<<i+2<<endl;
                break;
            }
            
        }
        
       
    }
    
return 0;
}