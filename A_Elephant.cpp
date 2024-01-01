#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,count=0;
    cin>>a;
    for (int i = 5; i > 0; i--)
    {
        count=count+ a/i;
        a=a%i;
    }
    cout<<count;
    
return 0;
}