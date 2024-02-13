#include <bits/stdc++.h>
using namespace std;
int main() {
    int a; cin >> a;
    
    while (a%2==0)
    {
        cout<<"2"<<endl;
        a=a/2;
    }
    for (int i = 3; i <= a; i+=2)
    {
        while (a%i==0)
        {
            cout<<i<<endl;
            a=a/i;
        }
        
    }
    
    
    
return 0;
}