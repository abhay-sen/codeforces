#include <bits/stdc++.h>
using namespace std;
int main() {
    float t;cin>>t;
    float k=t;
    float count=0;
    while (t--)
    {
        float i;
        cin>>i;
        count+=i;
    }
    cout<<count/k;
return 0;
}