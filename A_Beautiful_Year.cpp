#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for (int i = 1; i < 9001-n; i++)
    {
        int k=n+i;
        if (k%10!=(k/10)%10!=((k/100)%10)!=(k/1000))
        {
            cout<<k;
            break;
        }
        
    }
    
    
return 0;
}