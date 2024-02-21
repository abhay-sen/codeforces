#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        int n,count;
        n=a/9;
        count=a%9;
        int output=n*45;
        for (int i = 0; i < count; i++)
        {
            output=output +i+1;
        }
        cout<<output<<endl;

    }
    
return 0;
}