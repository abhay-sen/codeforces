#include <bits/stdc++.h>
using namespace std;
int main() {
    int count;cin>>count;
    int res=0;
    for (int i = 0; i < count; i++)
    {
        int k;
        cin>>k;
        res+=k;
    }
    if (res==0)
    {
        cout<<"EASY";
    }
    else
    {
        cout<<"HARD";
    }
    
    
return 0;
}