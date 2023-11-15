#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        if ((2*n)-x >= x)
        {
            cout<<0<<endl;
        }
        else
        {
            cout << 2*(x-n)<<endl;
        }
        
        
    }
    
}