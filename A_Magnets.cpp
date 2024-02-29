#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    int arr[t],grp=1;
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < t-1; i++)
    {
        if (arr[i]!=arr[i+1]) 
        {
            grp++;
        }
        
    }
    cout<<grp;
    
return 0;
}