#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t; cin>>t;
    while (t--)
    {
        long long int a,b;
        cin>>a>>b;
        if (a%2==0)
        {
            if (a/2!=b)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            
            
        }
        else if (b%2==0)
        {
            if (b/2!=a)
            {
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        
        else
        {
            cout<<"No"<<endl;
        }
        
        
    }
    
return 0;
}